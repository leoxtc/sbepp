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

enum class enum_19 : ::std::uint8_t
{
    ISSUING_BUY_BACK_AUCTION = 8
};

template<typename Visitor>
SBEPP_CPP14_CONSTEXPR void tag_invoke(
    ::sbepp::detail::visit_tag, enum_19 e, Visitor& visitor) noexcept
{
    switch(e)
    {
    case enum_19::ISSUING_BUY_BACK_AUCTION:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::SecurityMatchType::ISSUING_BUY_BACK_AUCTION{});
        break;
    default:
        visitor.on_enum_value(e, ::sbepp::unknown_enum_value_tag{});
    }
}


} // namespace types
} // namespace detail

namespace types
{
using SecurityMatchType = ::bovespa_mbo_sbe::detail::types::enum_19;
} // namespace types
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class enum_traits<::bovespa_mbo_sbe::schema::types::SecurityMatchType>
{
public:
    static constexpr const char* name() noexcept
    {
        return "SecurityMatchType";
    }

    static constexpr const char* description() noexcept
    {
        return "Type of matching that occurred. Required for Special Auctions.";
    }

    using encoding_type = ::std::uint8_t;
    
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::SecurityMatchType;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::types::SecurityMatchType>
{
    using type = ::bovespa_mbo_sbe::schema::types::SecurityMatchType;
};


template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::SecurityMatchType::ISSUING_BUY_BACK_AUCTION>
{
public:
    static constexpr const char* name() noexcept
    {
        return "ISSUING_BUY_BACK_AUCTION";
    }

    static constexpr const char* description() noexcept
    {
        return "Issuing/Buy Back Auction.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::SecurityMatchType value() noexcept
    {
        return ::bovespa_mbo_sbe::types::SecurityMatchType::ISSUING_BUY_BACK_AUCTION;
    }
};

}  // namespace sbepp

SBEPP_WARNINGS_ON();
