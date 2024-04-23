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

enum class enum_8 : char
{
    Sequence = '0',
    SequenceReset = '4',
    MarketDataIncrementalRefresh = 'X',
    SecurityStatus = 'f',
    SecurityDefinition = 'd',
    News = 'B',
    MarketDataSnapshotFullRefresh = 'W'
};

template<typename Visitor>
SBEPP_CPP14_CONSTEXPR void tag_invoke(
    ::sbepp::detail::visit_tag, enum_8 e, Visitor& visitor) noexcept
{
    switch(e)
    {
    case enum_8::Sequence:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::MessageType::Sequence{});
        break;
    case enum_8::SequenceReset:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::MessageType::SequenceReset{});
        break;
    case enum_8::MarketDataIncrementalRefresh:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::MessageType::MarketDataIncrementalRefresh{});
        break;
    case enum_8::SecurityStatus:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::MessageType::SecurityStatus{});
        break;
    case enum_8::SecurityDefinition:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::MessageType::SecurityDefinition{});
        break;
    case enum_8::News:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::MessageType::News{});
        break;
    case enum_8::MarketDataSnapshotFullRefresh:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::MessageType::MarketDataSnapshotFullRefresh{});
        break;
    default:
        visitor.on_enum_value(e, ::sbepp::unknown_enum_value_tag{});
    }
}


} // namespace types
} // namespace detail

namespace types
{
using MessageType = ::bovespa_mbo_sbe::detail::types::enum_8;
} // namespace types
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class enum_traits<::bovespa_mbo_sbe::schema::types::MessageType>
{
public:
    static constexpr const char* name() noexcept
    {
        return "MessageType";
    }

    static constexpr const char* description() noexcept
    {
        return "FIX Message Type.";
    }

    using encoding_type = char;
    
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::MessageType;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::types::MessageType>
{
    using type = ::bovespa_mbo_sbe::schema::types::MessageType;
};


template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::MessageType::Sequence>
{
public:
    static constexpr const char* name() noexcept
    {
        return "Sequence";
    }

    static constexpr const char* description() noexcept
    {
        return "Sequence message for heartbeat.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::MessageType value() noexcept
    {
        return ::bovespa_mbo_sbe::types::MessageType::Sequence;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::MessageType::SequenceReset>
{
public:
    static constexpr const char* name() noexcept
    {
        return "SequenceReset";
    }

    static constexpr const char* description() noexcept
    {
        return "Sequence Reset.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::MessageType value() noexcept
    {
        return ::bovespa_mbo_sbe::types::MessageType::SequenceReset;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::MessageType::MarketDataIncrementalRefresh>
{
public:
    static constexpr const char* name() noexcept
    {
        return "MarketDataIncrementalRefresh";
    }

    static constexpr const char* description() noexcept
    {
        return "Market Data Incremental Refresh.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::MessageType value() noexcept
    {
        return ::bovespa_mbo_sbe::types::MessageType::MarketDataIncrementalRefresh;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::MessageType::SecurityStatus>
{
public:
    static constexpr const char* name() noexcept
    {
        return "SecurityStatus";
    }

    static constexpr const char* description() noexcept
    {
        return "Security Status.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::MessageType value() noexcept
    {
        return ::bovespa_mbo_sbe::types::MessageType::SecurityStatus;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::MessageType::SecurityDefinition>
{
public:
    static constexpr const char* name() noexcept
    {
        return "SecurityDefinition";
    }

    static constexpr const char* description() noexcept
    {
        return "Security Definition.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::MessageType value() noexcept
    {
        return ::bovespa_mbo_sbe::types::MessageType::SecurityDefinition;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::MessageType::News>
{
public:
    static constexpr const char* name() noexcept
    {
        return "News";
    }

    static constexpr const char* description() noexcept
    {
        return "News.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::MessageType value() noexcept
    {
        return ::bovespa_mbo_sbe::types::MessageType::News;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::MessageType::MarketDataSnapshotFullRefresh>
{
public:
    static constexpr const char* name() noexcept
    {
        return "MarketDataSnapshotFullRefresh";
    }

    static constexpr const char* description() noexcept
    {
        return "Market Data Full Refresh.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::MessageType value() noexcept
    {
        return ::bovespa_mbo_sbe::types::MessageType::MarketDataSnapshotFullRefresh;
    }
};

}  // namespace sbepp

SBEPP_WARNINGS_ON();
