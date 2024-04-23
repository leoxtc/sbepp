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


class type_23
    : public ::sbepp::detail::optional_base<::std::int64_t, type_23>
{
public:
    using ::sbepp::detail::optional_base<
        ::std::int64_t, type_23>::optional_base;

    static constexpr value_type min_value() noexcept
    {
        return {-9223372036854775807};
    }

    static constexpr value_type max_value() noexcept
    {
        return {9223372036854775807};
    }

    static constexpr value_type null_value() noexcept
    {
        return {-9223372036854775807 - 1};
    }
};
using type_24 = ::std::int8_t;


template<typename Byte>
class composite_1 : public ::sbepp::detail::composite_base<Byte>
{
public:
    using ::sbepp::detail::composite_base<Byte>::composite_base;
    using ::sbepp::detail::composite_base<Byte>::operator();

    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::detail::types::type_23 mantissa() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::detail::types::type_23, ::bovespa_mbo_sbe::detail::types::type_23::value_type, ::sbepp::endian::little>(*this, 0);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void mantissa(::bovespa_mbo_sbe::detail::types::type_23 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 0, v.value());
    }
    static constexpr ::std::int8_t exponent() noexcept
    {
        return ::std::int8_t{-4};
    }


    constexpr std::size_t
        operator()(::sbepp::detail::size_bytes_tag) const noexcept
    {
        return 8;
    }

    template<typename Visitor, typename Cursor>
    constexpr bool operator()(
        ::sbepp::detail::visit_tag, Visitor& v, Cursor&) const
    {
        return v.template on_composite(*this, ::bovespa_mbo_sbe::schema::types::PriceOptional{});
    }


    template<typename Visitor, typename Cursor>
    constexpr bool operator()(
        ::sbepp::detail::visit_children_tag, Visitor& v, Cursor&) const
    {
        return v.template on_type(this->mantissa(), ::bovespa_mbo_sbe::schema::types::PriceOptional::mantissa{});
    }

};

} // namespace types
} // namespace detail

namespace types
{

    template<typename Byte>
    using PriceOptional = ::bovespa_mbo_sbe::detail::types::composite_1<Byte>;

} // namespace types
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class type_traits<::bovespa_mbo_sbe::schema::types::PriceOptional::mantissa>
{
public:
    static constexpr const char* name() noexcept
    {
        return "mantissa";
    }

    static constexpr const char* description() noexcept
    {
        return "Mantissa (for fixed-point decimal numbers).";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::optional;
    }

    using primitive_type = ::std::int64_t;
    
    static constexpr primitive_type min_value() noexcept
    {
        return value_type::min_value();
    }
    
    static constexpr primitive_type max_value() noexcept
    {
        return value_type::max_value();
    }

    static constexpr primitive_type null_value() noexcept
    {
        return value_type::null_value();
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

    
    using value_type = ::bovespa_mbo_sbe::detail::types::type_23;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::detail::types::type_23>
{
    using type = ::bovespa_mbo_sbe::schema::types::PriceOptional::mantissa;
};


template<>
class type_traits<::bovespa_mbo_sbe::schema::types::PriceOptional::exponent>
{
public:
    static constexpr const char* name() noexcept
    {
        return "exponent";
    }

    static constexpr const char* description() noexcept
    {
        return "Exponent (for fixed-point decimal numbers).";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::constant;
    }

    using primitive_type = ::std::int8_t;
    
    
    static constexpr length_t length() noexcept
    {
        return 1;
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

    
    using value_type = ::bovespa_mbo_sbe::detail::types::type_24;
};



template<>
class composite_traits<::bovespa_mbo_sbe::schema::types::PriceOptional>
{
public:
    static constexpr const char* name() noexcept
    {
        return "PriceOptional";
    }

    static constexpr const char* description() noexcept
    {
        return "Optional price (4 decimal places). Usually 3 places are enough, but FX requires 4.";
    }

    

    static constexpr const char* semantic_type() noexcept
    {
        return "Price";
    }

    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    
    template<typename Byte>
    using value_type = ::bovespa_mbo_sbe::types::PriceOptional<Byte>;


    static constexpr std::size_t size_bytes() noexcept
    {
        return 8;
    }
};

template<typename Byte>
struct traits_tag<::bovespa_mbo_sbe::types::PriceOptional<Byte>>
{
    using type = ::bovespa_mbo_sbe::schema::types::PriceOptional;
};


}  // namespace sbepp

SBEPP_WARNINGS_ON();
