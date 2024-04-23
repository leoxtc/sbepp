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

class type_19
    : public ::sbepp::detail::required_base<::std::uint16_t, type_19>
{
public:
    using ::sbepp::detail::required_base<
        ::std::uint16_t, type_19>::required_base;

    static constexpr value_type min_value() noexcept
    {
        return {0};
    }

    static constexpr value_type max_value() noexcept
    {
        return {65534};
    }
};

} // namespace types
} // namespace detail

namespace types
{
using UInt16 = ::bovespa_mbo_sbe::detail::types::type_19;
} // namespace types
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class type_traits<::bovespa_mbo_sbe::schema::types::UInt16>
{
public:
    static constexpr const char* name() noexcept
    {
        return "UInt16";
    }

    static constexpr const char* description() noexcept
    {
        return "2-byte unsigned integer, from 0 to 65535.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }

    using primitive_type = ::std::uint16_t;
    
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

    
    using value_type = ::bovespa_mbo_sbe::types::UInt16;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::types::UInt16>
{
    using type = ::bovespa_mbo_sbe::schema::types::UInt16;
};


}  // namespace sbepp

SBEPP_WARNINGS_ON();