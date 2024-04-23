// SPDX-License-Identifier: MIT
// Copyright (c) 2023, Oleksandr Koval

// This file was generated by sbeppc 1.3.0
#pragma once

#include <sbepp/sbepp.hpp>

SBEPP_WARNINGS_OFF();

#include "../schema/schema.hpp"


namespace bovespa_mbo_sbe
{
namespace detail
{
namespace types
{


class type_90
    : public ::sbepp::detail::required_base<::std::uint8_t, type_90>
{
public:
    using ::sbepp::detail::required_base<
        ::std::uint8_t, type_90>::required_base;

    static constexpr value_type min_value() noexcept
    {
        return {0};
    }

    static constexpr value_type max_value() noexcept
    {
        return {250};
    }
};

template<typename Byte>
using type_91 = ::sbepp::detail::static_array_ref<
    Byte, char, 0, ::bovespa_mbo_sbe::schema::types::TextEncoding::varData>;


template<typename Byte>
class composite_17 : public ::sbepp::detail::composite_base<Byte>
{
public:
    using ::sbepp::detail::composite_base<Byte>::composite_base;
    using ::sbepp::detail::composite_base<Byte>::operator();

    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::detail::types::type_90 length() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::detail::types::type_90, ::bovespa_mbo_sbe::detail::types::type_90::value_type, ::sbepp::endian::little>(*this, 0);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void length(::bovespa_mbo_sbe::detail::types::type_90 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 0, v.value());
    }
    constexpr ::bovespa_mbo_sbe::detail::types::type_91<Byte> varData() const noexcept
    {
        return ::sbepp::detail::get_static_field_view<::bovespa_mbo_sbe::detail::types::type_91<Byte>>(
            *this, 1);
    }


    constexpr std::size_t
        operator()(::sbepp::detail::size_bytes_tag) const noexcept
    {
        return 1;
    }

    template<typename Visitor, typename Cursor>
    constexpr bool operator()(
        ::sbepp::detail::visit_tag, Visitor& v, Cursor&) const
    {
        return v.template on_composite(*this, ::bovespa_mbo_sbe::schema::types::TextEncoding{});
    }


    template<typename Visitor, typename Cursor>
    constexpr bool operator()(
        ::sbepp::detail::visit_children_tag, Visitor& v, Cursor&) const
    {
        return v.template on_type(this->length(), ::bovespa_mbo_sbe::schema::types::TextEncoding::length{})
||v.template on_type(this->varData(), ::bovespa_mbo_sbe::schema::types::TextEncoding::varData{});
    }

};

} // namespace types
} // namespace detail

namespace types
{

    template<typename Byte>
    using TextEncoding = ::bovespa_mbo_sbe::detail::types::composite_17<Byte>;

} // namespace types
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class type_traits<::bovespa_mbo_sbe::schema::types::TextEncoding::length>
{
public:
    static constexpr const char* name() noexcept
    {
        return "length";
    }

    static constexpr const char* description() noexcept
    {
        return "";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }

    using primitive_type = ::std::uint8_t;
    
    static constexpr primitive_type min_value() noexcept
    {
        return value_type::min_value();
    }
    
    static constexpr primitive_type max_value() noexcept
    {
        return value_type::max_value();
    }

    
    static constexpr length_t length() noexcept
    {
        return 1;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {0};
    }

    
    static constexpr const char* semantic_type() noexcept
    {
        return "";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    static constexpr const char* character_encoding() noexcept
    {
        return "";
    }

    
    using value_type = ::bovespa_mbo_sbe::detail::types::type_90;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::detail::types::type_90>
{
    using type = ::bovespa_mbo_sbe::schema::types::TextEncoding::length;
};


template<>
class type_traits<::bovespa_mbo_sbe::schema::types::TextEncoding::varData>
{
public:
    static constexpr const char* name() noexcept
    {
        return "varData";
    }

    static constexpr const char* description() noexcept
    {
        return "";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }

    using primitive_type = char;
    
    
    static constexpr length_t length() noexcept
    {
        return 0;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {1};
    }

    
    static constexpr const char* semantic_type() noexcept
    {
        return "";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    static constexpr const char* character_encoding() noexcept
    {
        return "UTF-8";
    }

    
    
    template<typename Byte>
    using value_type = ::bovespa_mbo_sbe::detail::types::type_91<Byte>;

};



template<>
class composite_traits<::bovespa_mbo_sbe::schema::types::TextEncoding>
{
public:
    static constexpr const char* name() noexcept
    {
        return "TextEncoding";
    }

    static constexpr const char* description() noexcept
    {
        return "Variable-length short UTF-8 String.";
    }

    

    static constexpr const char* semantic_type() noexcept
    {
        return "String";
    }

    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    
    template<typename Byte>
    using value_type = ::bovespa_mbo_sbe::types::TextEncoding<Byte>;


    static constexpr std::size_t size_bytes() noexcept
    {
        return 1;
    }
};

template<typename Byte>
struct traits_tag<::bovespa_mbo_sbe::types::TextEncoding<Byte>>
{
    using type = ::bovespa_mbo_sbe::schema::types::TextEncoding;
};


}  // namespace sbepp

SBEPP_WARNINGS_ON();