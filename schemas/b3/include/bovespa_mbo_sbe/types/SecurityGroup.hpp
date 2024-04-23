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

template<typename Byte>
using type_89 = ::sbepp::detail::static_array_ref<
    Byte, char, 3, ::bovespa_mbo_sbe::schema::types::SecurityGroup>;

} // namespace types
} // namespace detail

namespace types
{

    template<typename Byte>
    using SecurityGroup = ::bovespa_mbo_sbe::detail::types::type_89<Byte>;

} // namespace types
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class type_traits<::bovespa_mbo_sbe::schema::types::SecurityGroup>
{
public:
    static constexpr const char* name() noexcept
    {
        return "SecurityGroup";
    }

    static constexpr const char* description() noexcept
    {
        return "Indicates the group this instrument belongs to.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }

    using primitive_type = char;
    
    
    static constexpr length_t length() noexcept
    {
        return 3;
    }
    
    
    
    static constexpr const char* semantic_type() noexcept
    {
        return "String";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    static constexpr const char* character_encoding() noexcept
    {
        return "ASCII";
    }

    
    
    template<typename Byte>
    using value_type = ::bovespa_mbo_sbe::types::SecurityGroup<Byte>;

};



}  // namespace sbepp

SBEPP_WARNINGS_ON();
