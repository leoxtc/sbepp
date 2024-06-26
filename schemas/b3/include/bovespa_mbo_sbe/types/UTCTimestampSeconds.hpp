// SPDX-License-Identifier: MIT
// Copyright (c) 2023, Oleksandr Koval

// This file was generated by sbeppc 1.3.0
#pragma once

#include <sbepp/sbepp.hpp>

SBEPP_WARNINGS_OFF();

#include "../schema/schema.hpp"
#include "TimeUnit.hpp"


namespace bovespa_mbo_sbe
{
namespace detail
{
namespace types
{


class type_71
    : public ::sbepp::detail::optional_base<::std::int64_t, type_71>
{
public:
    using ::sbepp::detail::optional_base<
        ::std::int64_t, type_71>::optional_base;

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
using type_72 = ::std::uint8_t;


template<typename Byte>
class composite_11 : public ::sbepp::detail::composite_base<Byte>
{
public:
    using ::sbepp::detail::composite_base<Byte>::composite_base;
    using ::sbepp::detail::composite_base<Byte>::operator();

    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::detail::types::type_71 time() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::detail::types::type_71, ::bovespa_mbo_sbe::detail::types::type_71::value_type, ::sbepp::endian::little>(*this, 0);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void time(::bovespa_mbo_sbe::detail::types::type_71 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 0, v.value());
    }
    static constexpr ::std::uint8_t unit() noexcept
    {
        return ::std::uint8_t{::sbepp::to_underlying(::bovespa_mbo_sbe::detail::types::enum_12::SECOND)};
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
        return v.template on_composite(*this, ::bovespa_mbo_sbe::schema::types::UTCTimestampSeconds{});
    }


    template<typename Visitor, typename Cursor>
    constexpr bool operator()(
        ::sbepp::detail::visit_children_tag, Visitor& v, Cursor&) const
    {
        return v.template on_type(this->time(), ::bovespa_mbo_sbe::schema::types::UTCTimestampSeconds::time{});
    }

};

} // namespace types
} // namespace detail

namespace types
{

    template<typename Byte>
    using UTCTimestampSeconds = ::bovespa_mbo_sbe::detail::types::composite_11<Byte>;

} // namespace types
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class type_traits<::bovespa_mbo_sbe::schema::types::UTCTimestampSeconds::time>
{
public:
    static constexpr const char* name() noexcept
    {
        return "time";
    }

    static constexpr const char* description() noexcept
    {
        return "UTC timestamp with second precision (Unix Epoch).";
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

    
    using value_type = ::bovespa_mbo_sbe::detail::types::type_71;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::detail::types::type_71>
{
    using type = ::bovespa_mbo_sbe::schema::types::UTCTimestampSeconds::time;
};


template<>
class type_traits<::bovespa_mbo_sbe::schema::types::UTCTimestampSeconds::unit>
{
public:
    static constexpr const char* name() noexcept
    {
        return "unit";
    }

    static constexpr const char* description() noexcept
    {
        return "time unit (seconds)";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::constant;
    }

    using primitive_type = ::std::uint8_t;
    
    
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

    
    using value_type = ::bovespa_mbo_sbe::detail::types::type_72;
};



template<>
class composite_traits<::bovespa_mbo_sbe::schema::types::UTCTimestampSeconds>
{
public:
    static constexpr const char* name() noexcept
    {
        return "UTCTimestampSeconds";
    }

    static constexpr const char* description() noexcept
    {
        return "UTC timestamp with second precision (Unix Epoch)";
    }

    

    static constexpr const char* semantic_type() noexcept
    {
        return "UTCTimestamp";
    }

    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    
    template<typename Byte>
    using value_type = ::bovespa_mbo_sbe::types::UTCTimestampSeconds<Byte>;


    static constexpr std::size_t size_bytes() noexcept
    {
        return 8;
    }
};

template<typename Byte>
struct traits_tag<::bovespa_mbo_sbe::types::UTCTimestampSeconds<Byte>>
{
    using type = ::bovespa_mbo_sbe::schema::types::UTCTimestampSeconds;
};


}  // namespace sbepp

SBEPP_WARNINGS_ON();
