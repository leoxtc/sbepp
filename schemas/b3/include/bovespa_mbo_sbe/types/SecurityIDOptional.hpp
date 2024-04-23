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

class type_7
    : public ::sbepp::detail::optional_base<::std::uint64_t, type_7>
{
public:
    using ::sbepp::detail::optional_base<
        ::std::uint64_t, type_7>::optional_base;

    static constexpr value_type min_value() noexcept
    {
        return {0};
    }

    static constexpr value_type max_value() noexcept
    {
        return {18446744073709551614UL};
    }

    static constexpr value_type null_value() noexcept
    {
        return {0};
    }
};

} // namespace types
} // namespace detail

namespace types
{
using SecurityIDOptional = ::bovespa_mbo_sbe::detail::types::type_7;
} // namespace types
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class type_traits<::bovespa_mbo_sbe::schema::types::SecurityIDOptional>
{
public:
    static constexpr const char* name() noexcept
    {
        return "SecurityIDOptional";
    }

    static constexpr const char* description() noexcept
    {
        return "Security ID as defined by B3's Trading System.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::optional;
    }

    using primitive_type = ::std::uint64_t;
    
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
    
    
    
    static constexpr const char* semantic_type() noexcept
    {
        return "Int";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    static constexpr const char* character_encoding() noexcept
    {
        return "";
    }

    
    using value_type = ::bovespa_mbo_sbe::types::SecurityIDOptional;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::types::SecurityIDOptional>
{
    using type = ::bovespa_mbo_sbe::schema::types::SecurityIDOptional;
};


}  // namespace sbepp

SBEPP_WARNINGS_ON();
