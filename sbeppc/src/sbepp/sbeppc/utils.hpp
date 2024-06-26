// SPDX-License-Identifier: MIT
// Copyright (c) 2023, Oleksandr Koval

#pragma once

#include <sbepp/sbeppc/ireporter.hpp>
#include <sbepp/sbeppc/source_location.hpp>
#include <sbepp/sbeppc/throw_error.hpp>
#include <sbepp/sbepp.hpp>
#include <sbepp/sbeppc/sbe.hpp>
#include <sbepp/sbeppc/build_info.hpp>

#include <fmt/core.h>

#include <algorithm>
#include <cctype>
#include <iterator>
#include <charconv>
#include <stdexcept>
#include <string_view>
#include <unordered_set>
#include <unordered_map>
#include <variant>
#include <optional>

namespace sbepp::sbeppc::utils
{
inline bool is_primitive_type(const std::string_view type)
{
    static const std::unordered_set<std::string_view> primitive_types{
        "char",
        "int8",
        "int16",
        "int32",
        "int64",
        "uint8",
        "uint16",
        "uint32",
        "uint64",
        "float",
        "double"};

    return primitive_types.count(type);
}

inline std::string_view primitive_type_to_cpp_type(const std::string_view type)
{
    static const std::unordered_map<std::string_view, std::string_view> map{
        {"char", "char"},
        {"int8", "::std::int8_t"},
        {"int16", "::std::int16_t"},
        {"int32", "::std::int32_t"},
        {"int64", "::std::int64_t"},
        {"uint8", "::std::uint8_t"},
        {"uint16", "::std::uint16_t"},
        {"uint32", "::std::uint32_t"},
        {"uint64", "::std::uint64_t"},
        {"float", "float"},
        {"double", "double"}};

    return map.at(type);
}

inline std::string_view primitive_type_to_wrapper_type(
    const std::string_view type, const field_presence presence)
{
    assert(presence != field_presence::constant);

    static const std::unordered_map<std::string_view, std::string_view>
        required_types{
            {"char", "::sbepp::char_t"},
            {"int8", "::sbepp::int8_t"},
            {"int16", "::sbepp::int16_t"},
            {"int32", "::sbepp::int32_t"},
            {"int64", "::sbepp::int64_t"},
            {"uint8", "::sbepp::uint8_t"},
            {"uint16", "::sbepp::uint16_t"},
            {"uint32", "::sbepp::uint32_t"},
            {"uint64", "::sbepp::uint64_t"},
            {"float", "::sbepp::float_t"},
            {"double", "::sbepp::double_t"}};

    static const std::unordered_map<std::string_view, std::string_view>
        optional_types{
            {"char", "::sbepp::char_opt_t"},
            {"int8", "::sbepp::int8_opt_t"},
            {"int16", "::sbepp::int16_opt_t"},
            {"int32", "::sbepp::int32_opt_t"},
            {"int64", "::sbepp::int64_opt_t"},
            {"uint8", "::sbepp::uint8_opt_t"},
            {"uint16", "::sbepp::uint16_opt_t"},
            {"uint32", "::sbepp::uint32_opt_t"},
            {"uint64", "::sbepp::uint64_opt_t"},
            {"float", "::sbepp::float_opt_t"},
            {"double", "::sbepp::double_opt_t"}};

    if(presence == field_presence::required)
    {
        return required_types.at(type);
    }

    return optional_types.at(type);
}

inline std::size_t get_underlying_size(const std::string_view underlying_type)
{
    static const std::unordered_map<std::string_view, std::size_t> map{
        {"char", sizeof(char)},
        {"::std::int8_t", sizeof(std::int8_t)},
        {"::std::int16_t", sizeof(std::int16_t)},
        {"::std::int32_t", sizeof(std::int32_t)},
        {"::std::int64_t", sizeof(std::int64_t)},
        {"::std::uint8_t", sizeof(std::uint8_t)},
        {"::std::uint16_t", sizeof(std::uint16_t)},
        {"::std::uint32_t", sizeof(std::uint32_t)},
        {"::std::uint64_t", sizeof(std::uint64_t)},
        {"float", sizeof(float)},
        {"double", sizeof(double)}};

    return map.at(underlying_type);
}

template<typename T>
std::string_view get_encoding_name(const T& encoding)
{
    return std::visit(
        [](const auto& encoding) -> std::string_view
        {
            return encoding.name;
        },
        encoding);
}

template<typename Variant>
const source_location& get_location(const Variant& variant)
{
    return std::visit(
        [](const auto& variant) -> const source_location&
        {
            return variant.location;
        },
        variant);
}

template<typename... Ts>
struct overloaded : Ts...
{
    using Ts::operator()...;
};

template<typename... Ts>
overloaded(Ts...) -> overloaded<Ts...>;

inline offset_t get_valid_offset(
    const std::optional<offset_t>& offset,
    const offset_t min_offset,
    const source_location& location)
{
    if(offset)
    {
        if(*offset >= min_offset)
        {
            return *offset;
        }
        throw_error(
            "{}: custom offset ({}) is less than minimal ({})",
            location,
            *offset,
            min_offset);
    }
    return min_offset;
}

inline bool is_constant(const sbe::encoding& encoding)
{
    return std::visit(
        utils::overloaded{
            [](const sbe::type& t)
            {
                return t.presence == field_presence::constant;
            },
            [](const auto&)
            {
                return false;
            }},
        encoding);
}

inline std::string_view byte_order_to_endian(const sbe::byte_order_kind order)
{
    if(order == sbe::byte_order_kind::big_endian)
    {
        return "::sbepp::endian::big";
    }
    return "::sbepp::endian::little";
}

inline std::string_view presence_to_string(const field_presence presence)
{
    if(presence == field_presence::constant)
    {
        return "::sbepp::field_presence::constant";
    }
    else if(presence == field_presence::optional)
    {
        return "::sbepp::field_presence::optional";
    }
    else
    {
        return "::sbepp::field_presence::required";
    }
}

inline bool is_reserved_cpp_identifier(const std::string_view str)
{
    if(str.find("__") != std::string_view::npos)
    {
        return true;
    }

    if((str.size() > 1) && (str[0] == '_')
       && (std::isupper(static_cast<unsigned char>(str[1]))))
    {
        return true;
    }

    return false;
}

inline bool is_reserved_cpp_namespace(const std::string_view str)
{
    return (str == "std") || (str == "posix");
}

inline bool is_cpp_keyword(const std::string_view str)
{
    static const std::unordered_set<std::string_view> cpp_keywords{
        "alignas",       "alignof",     "and",
        "and_eq",        "asm",         "auto",
        "bitand",        "bitor",       "bool",
        "break",         "case",        "catch",
        "char",          "char8_t",     "char16_t",
        "char32_t",      "class",       "compl",
        "concept",       "const",       "consteval",
        "constexpr",     "constinit",   "const_cast",
        "continue",      "co_await",    "co_return",
        "co_yield",      "decltype",    "default",
        "delete",        "do",          "double",
        "dynamic_cast",  "else",        "enum",
        "explicit",      "export",      "extern",
        "false",         "float",       "for",
        "friend",        "goto",        "if",
        "inline",        "int",         "long",
        "mutable",       "namespace",   "new",
        "noexcept",      "not",         "not_eq",
        "nullptr",       "operator",    "or",
        "or_eq",         "private",     "protected",
        "public",        "register",    "reinterpret_cast",
        "requires",      "return",      "short",
        "signed",        "sizeof",      "static",
        "static_assert", "static_cast", "struct",
        "switch",        "template",    "this",
        "thread_local",  "throw",       "true",
        "try",           "typedef",     "typeid",
        "typename",      "union",       "unsigned",
        "using",         "virtual",     "void",
        "volatile",      "wchar_t",     "while",
        "xor",           "xor_eq"};

    return cpp_keywords.count(str);
}

inline bool is_sbe_symbolic_name(const std::string_view name)
{
    // SBE also sets maximum name length to 64 but it doesn't make sense to me
    if(name.empty() || std::isdigit(static_cast<unsigned char>(name[0])))
    {
        return false;
    }

    auto search = std::find_if_not(
        std::begin(name),
        std::end(name),
        [](unsigned char ch)
        {
            return std::isalnum(ch) || (ch == '_');
        });
    return (search == std::end(name));
}

inline bool is_valid_name(const std::string_view name)
{
    return is_sbe_symbolic_name(name) && !is_cpp_keyword(name);
}

inline void warn_about_reserved_identifier(
    const std::string_view name,
    const source_location& location,
    ireporter& reporter)
{
    if(is_reserved_cpp_identifier(name))
    {
        reporter.warning(
            "{}: name `{}` is a reserved C++ identifier\n", location, name);
    }
}

inline std::string to_lower(const std::string_view str)
{
    std::string res;
    res.reserve(str.size());
    std::transform(
        std::begin(str),
        std::end(str),
        std::back_inserter(res),
        [](const auto ch)
        {
            return std::tolower(ch);
        });
    return res;
}

template<typename T, typename Format, typename... Args>
T string_to_number_or_throw(
    const std::string_view str, const Format& format, Args&&... args)
{
    if(!str.empty())
    {
        T value{};
        auto res = std::from_chars(str.data(), str.data() + str.size(), value);
        if(res.ec == std::errc{})
        {
            return value;
        }
    }

    throw_error(format, std::forward<Args>(args)...);
}

// should NOT be used for floating point types
inline std::string to_integer_literal(
    const std::string_view str, const source_location& location)
{
    if(str.empty())
    {
        throw_error("{}: can't convert empty string to number", location);
    }

    if(str[0] == '-')
    {
        const auto v = string_to_number_or_throw<signed long long>(
            str,
            "{}: cannot convert `{}` to `signed long long`",
            location,
            str);
        static constexpr auto min_signed_literal = -9223372036854775807;
        if(v < min_signed_literal)
        {
            // that difference is going to be negative, no need for sign in
            // the format string
            return fmt::format(
                "{} {}", min_signed_literal, (v - min_signed_literal));
        }
        return std::string{str};
    }
    else
    {
        // this part is not strictly required since type will be deduced
        // correctly but most compilers produce warning when literal
        // representing large number is used without `UL` prefix
        const auto v = string_to_number_or_throw<unsigned long long>(
            str,
            "{}: cannot convert `{}` to `unsigned long long`",
            location,
            str);
        static constexpr auto max_signed_literal = 9223372036854775807;
        if(v > max_signed_literal)
        {
            return fmt::format("{}UL", str);
        }
        return std::string{str};
    }
}

inline void
    validate_schema_name(const sbe::message_schema& schema, ireporter& reporter)
{
    if(!utils::is_valid_name(schema.name)
       || utils::is_reserved_cpp_namespace(schema.name))
    {
        throw_error(
            "{}: schema namespace `{}` is not valid. Change "
            "`messageSchema.package` attribute or provide a custom name with "
            "`--schema-name`",
            schema.location,
            schema.name);
    }
    utils::warn_about_reserved_identifier(
        schema.name, schema.location, reporter);
}

inline std::string get_compiled_header_top_comment()
{
    static std::string str = fmt::format(
        // clang-format off
R"(// SPDX-License-Identifier: MIT
// Copyright (c) 2023, Oleksandr Koval

// This file was generated by sbeppc {})",
        // clang-format on
        build_info::get_version());

    return str;
}

struct parsed_value_ref
{
    std::string enum_name;
    std::string enumerator;
};

inline parsed_value_ref parse_value_ref(const std::string_view value_ref)
{
    const auto dot_pos = value_ref.find('.');
    if((dot_pos == std::string_view::npos) || (value_ref.size() < 3)
       || (dot_pos == 0) || (dot_pos == (value_ref.size() - 1)))
    {
        return {};
    }

    parsed_value_ref res{};
    res.enum_name = value_ref.substr(0, dot_pos);
    res.enumerator = value_ref.substr(dot_pos + 1);

    return res;
}

inline std::string
    make_type_alias(const std::string_view alias, const std::string_view type)
{
    return fmt::format("using {} = {};", alias, type);
}

inline std::string make_alias_template(
    const std::string_view alias, const std::string_view type)
{
    return fmt::format(
        // clang-format off
R"(
    template<typename Byte>
    using {} = {}<Byte>;
)",
        // clang-format on
        alias,
        type);
}

inline std::string make_string_constant(
    const std::string& const_value,
    const length_t type_length,
    const source_location& location)
{
    if(type_length < const_value.size())
    {
        throw_error("{}: constant value doesn't fit into `length`", location);
    }

    std::string value;
    value.append("\"").append(const_value);
    // add padding if necessary
    const auto padding_length = type_length - const_value.size();
    for(std::size_t i = 0; i != padding_length; i++)
    {
        value.append("\\0");
    }
    value.append("\"");

    // string constants are represented using `static_array_ref`
    // which requires pointer and size to be constructed
    return fmt::format("{}, {}", value, const_value.size() + padding_length);
}

inline std::string make_char_constant(
    const std::string& constant_value,
    const length_t type_length,
    const source_location& location)
{
    if(constant_value.size() > 1)
    {
        return utils::make_string_constant(
            constant_value, type_length, location);
    }

    return fmt::format("'{}'", constant_value);
}

inline std::optional<std::string> numeric_literal_to_value(
    const std::optional<std::string>& value,
    const std::string_view type,
    const source_location& location)
{
    if(!value)
    {
        return value;
    }

    if((type == "float") || (type == "double"))
    {
        static std::string_view nan{"nan"};
        if(std::equal(
               std::begin(*value),
               std::end(*value),
               std::begin(nan),
               [](const auto lhs, const auto rhs)
               {
                   return std::tolower(lhs) == rhs;
               }))
        {
            return fmt::format("::std::numeric_limits<{}>::quiet_NaN()", type);
        }
        return value;
    }

    return utils::to_integer_literal(*value, location);
}

inline const sbe::composite_element*
    find_composite_element(const sbe::composite& c, const std::string_view name)
{
    const auto search = std::find_if(
        std::begin(c.elements),
        std::end(c.elements),
        [name](const auto& element)
        {
            return utils::get_encoding_name(element) == name;
        });

    if(search != std::end(c.elements))
    {
        return &*search;
    }

    return {};
}
} // namespace sbepp::sbeppc::utils
