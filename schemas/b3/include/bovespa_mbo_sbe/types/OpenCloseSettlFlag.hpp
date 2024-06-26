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

enum class enum_27 : ::std::uint8_t
{
    DAILY = 0,
    SESSION = 1,
    EXPECTED_ENTRY = 3,
    ENTRY_FROM_PREVIOUS_BUSINESS_DAY = 4,
    THEORETICAL_PRICE = 5
};

template<typename Visitor>
SBEPP_CPP14_CONSTEXPR void tag_invoke(
    ::sbepp::detail::visit_tag, enum_27 e, Visitor& visitor) noexcept
{
    switch(e)
    {
    case enum_27::DAILY:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::OpenCloseSettlFlag::DAILY{});
        break;
    case enum_27::SESSION:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::OpenCloseSettlFlag::SESSION{});
        break;
    case enum_27::EXPECTED_ENTRY:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::OpenCloseSettlFlag::EXPECTED_ENTRY{});
        break;
    case enum_27::ENTRY_FROM_PREVIOUS_BUSINESS_DAY:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::OpenCloseSettlFlag::ENTRY_FROM_PREVIOUS_BUSINESS_DAY{});
        break;
    case enum_27::THEORETICAL_PRICE:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::OpenCloseSettlFlag::THEORETICAL_PRICE{});
        break;
    default:
        visitor.on_enum_value(e, ::sbepp::unknown_enum_value_tag{});
    }
}


} // namespace types
} // namespace detail

namespace types
{
using OpenCloseSettlFlag = ::bovespa_mbo_sbe::detail::types::enum_27;
} // namespace types
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class enum_traits<::bovespa_mbo_sbe::schema::types::OpenCloseSettlFlag>
{
public:
    static constexpr const char* name() noexcept
    {
        return "OpenCloseSettlFlag";
    }

    static constexpr const char* description() noexcept
    {
        return "Identifies if the opening/closing price in field MDEntryPx represents a theoretical opening/closing price and applicable to describe when the settlement data is related to.";
    }

    using encoding_type = ::std::uint8_t;
    
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::OpenCloseSettlFlag;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::types::OpenCloseSettlFlag>
{
    using type = ::bovespa_mbo_sbe::schema::types::OpenCloseSettlFlag;
};


template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::OpenCloseSettlFlag::DAILY>
{
public:
    static constexpr const char* name() noexcept
    {
        return "DAILY";
    }

    static constexpr const char* description() noexcept
    {
        return "Daily settlement entry.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::OpenCloseSettlFlag value() noexcept
    {
        return ::bovespa_mbo_sbe::types::OpenCloseSettlFlag::DAILY;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::OpenCloseSettlFlag::SESSION>
{
public:
    static constexpr const char* name() noexcept
    {
        return "SESSION";
    }

    static constexpr const char* description() noexcept
    {
        return "Session settlement entry.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::OpenCloseSettlFlag value() noexcept
    {
        return ::bovespa_mbo_sbe::types::OpenCloseSettlFlag::SESSION;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::OpenCloseSettlFlag::EXPECTED_ENTRY>
{
public:
    static constexpr const char* name() noexcept
    {
        return "EXPECTED_ENTRY";
    }

    static constexpr const char* description() noexcept
    {
        return "Expected entry (preliminary price).";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::OpenCloseSettlFlag value() noexcept
    {
        return ::bovespa_mbo_sbe::types::OpenCloseSettlFlag::EXPECTED_ENTRY;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::OpenCloseSettlFlag::ENTRY_FROM_PREVIOUS_BUSINESS_DAY>
{
public:
    static constexpr const char* name() noexcept
    {
        return "ENTRY_FROM_PREVIOUS_BUSINESS_DAY";
    }

    static constexpr const char* description() noexcept
    {
        return "Entry from previous business day.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::OpenCloseSettlFlag value() noexcept
    {
        return ::bovespa_mbo_sbe::types::OpenCloseSettlFlag::ENTRY_FROM_PREVIOUS_BUSINESS_DAY;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::OpenCloseSettlFlag::THEORETICAL_PRICE>
{
public:
    static constexpr const char* name() noexcept
    {
        return "THEORETICAL_PRICE";
    }

    static constexpr const char* description() noexcept
    {
        return "Theoretical Price.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::OpenCloseSettlFlag value() noexcept
    {
        return ::bovespa_mbo_sbe::types::OpenCloseSettlFlag::THEORETICAL_PRICE;
    }
};

}  // namespace sbepp

SBEPP_WARNINGS_ON();
