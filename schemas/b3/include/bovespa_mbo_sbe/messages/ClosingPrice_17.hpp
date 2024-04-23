// SPDX-License-Identifier: MIT
// Copyright (c) 2023, Oleksandr Koval

// This file was generated by sbeppc 1.3.0
#pragma once

#include <sbepp/sbepp.hpp>

SBEPP_WARNINGS_OFF();

#include "../schema/schema.hpp"
#include "../types/messageHeader.hpp"
#include "../types/RptSeq.hpp"
#include "../types/UTCTimestampNanos.hpp"
#include "../types/LocalMktDate.hpp"
#include "../types/Price8.hpp"
#include "../types/MDEntryType.hpp"
#include "../types/MDUpdateAction.hpp"
#include "../types/MatchEventIndicator.hpp"
#include "../types/SecurityExchangeBVMF.hpp"
#include "../types/LocalMktDateOptional.hpp"
#include "../types/SecurityIDSource.hpp"
#include "../types/SecurityID.hpp"
#include "../types/OpenCloseSettlFlag.hpp"
#include "../types/ApplVerID.hpp"
#include "../types/MessageType.hpp"


namespace bovespa_mbo_sbe
{
namespace detail
{
namespace messages
{



template<typename Byte>
class message_12 : public ::sbepp::detail::message_base<
    Byte, ::bovespa_mbo_sbe::types::messageHeader<Byte>>
{
public:
    using ::sbepp::detail::message_base<
        Byte, ::bovespa_mbo_sbe::types::messageHeader<Byte>>::message_base;
    using ::sbepp::detail::message_base<
        Byte, ::bovespa_mbo_sbe::types::messageHeader<Byte>>::operator();

    static constexpr ::bovespa_mbo_sbe::types::MessageType messageType() noexcept
    {
        return ::bovespa_mbo_sbe::types::MessageType{::bovespa_mbo_sbe::detail::types::enum_8::MarketDataIncrementalRefresh};
    }
    static constexpr ::bovespa_mbo_sbe::types::ApplVerID applVerID() noexcept
    {
        return ::bovespa_mbo_sbe::types::ApplVerID{::bovespa_mbo_sbe::detail::types::enum_6::FIX50SP2};
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::SecurityID securityID() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::SecurityID, ::bovespa_mbo_sbe::types::SecurityID::value_type, ::sbepp::endian::little>(*this, 8);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void securityID(::bovespa_mbo_sbe::types::SecurityID v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 8, v.value());
    }
    static constexpr ::bovespa_mbo_sbe::types::SecurityIDSource securityIDSource() noexcept
    {
        return ::bovespa_mbo_sbe::types::SecurityIDSource{::bovespa_mbo_sbe::detail::types::enum_1::EXCHANGE_SYMBOL};
    }
    static constexpr ::bovespa_mbo_sbe::types::SecurityExchangeBVMF securityExchange() noexcept
    {
        return ::bovespa_mbo_sbe::types::SecurityExchangeBVMF{"BVMF", 4};
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::MatchEventIndicator matchEventIndicator() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::MatchEventIndicator, ::std::uint8_t, ::sbepp::endian::little>(*this, 16);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void matchEventIndicator(::bovespa_mbo_sbe::types::MatchEventIndicator v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 16, *v);
    }
    static constexpr ::bovespa_mbo_sbe::types::MDUpdateAction mDUpdateAction() noexcept
    {
        return ::bovespa_mbo_sbe::types::MDUpdateAction{::bovespa_mbo_sbe::detail::types::enum_16::NEW};
    }
    static constexpr ::bovespa_mbo_sbe::types::MDEntryType mDEntryType() noexcept
    {
        return ::bovespa_mbo_sbe::types::MDEntryType{::bovespa_mbo_sbe::detail::types::enum_31::CLOSING_PRICE};
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::OpenCloseSettlFlag openCloseSettlFlag() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::OpenCloseSettlFlag, ::bovespa_mbo_sbe::types::OpenCloseSettlFlag, ::sbepp::endian::little>(*this, 17);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void openCloseSettlFlag(::bovespa_mbo_sbe::types::OpenCloseSettlFlag v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 17, v);
    }
    constexpr ::bovespa_mbo_sbe::types::Price8<Byte> mDEntryPx() const noexcept
    {
        return ::sbepp::detail::get_static_field_view<::bovespa_mbo_sbe::types::Price8<Byte>>(
            *this, 20);
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::LocalMktDateOptional lastTradeDate() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::LocalMktDateOptional, ::bovespa_mbo_sbe::types::LocalMktDateOptional::value_type, ::sbepp::endian::little>(*this, 28);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void lastTradeDate(::bovespa_mbo_sbe::types::LocalMktDateOptional v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 28, v.value());
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::LocalMktDate tradeDate() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::LocalMktDate, ::bovespa_mbo_sbe::types::LocalMktDate::value_type, ::sbepp::endian::little>(*this, 30);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void tradeDate(::bovespa_mbo_sbe::types::LocalMktDate v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 30, v.value());
    }
    constexpr ::bovespa_mbo_sbe::types::UTCTimestampNanos<Byte> mDEntryTimestamp() const noexcept
    {
        return ::sbepp::detail::get_static_field_view<::bovespa_mbo_sbe::types::UTCTimestampNanos<Byte>>(
            *this, 32);
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::RptSeq rptSeq() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::RptSeq, ::bovespa_mbo_sbe::types::RptSeq::value_type, ::sbepp::endian::little>(*this, 40);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void rptSeq(::bovespa_mbo_sbe::types::RptSeq v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 40, v.value());
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        securityID(Cursor&& c) const noexcept
            -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::SecurityID>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::SecurityID, ::std::uint64_t, ::sbepp::endian::little>(
            *this, 0, 8);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void securityID(
        ::bovespa_mbo_sbe::types::SecurityID v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 8, v.value());
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        matchEventIndicator(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::MatchEventIndicator>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::MatchEventIndicator, ::std::uint8_t, ::sbepp::endian::little>(
            *this, 0, 16);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void matchEventIndicator(
        ::bovespa_mbo_sbe::types::MatchEventIndicator v, Cursor&& c) const noexcept
    {
        c.template set_value<::sbepp::endian::little>(*this, 0, 16, *v);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        openCloseSettlFlag(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::OpenCloseSettlFlag>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::OpenCloseSettlFlag, ::bovespa_mbo_sbe::types::OpenCloseSettlFlag, ::sbepp::endian::little>(
            *this, 0, 17);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void openCloseSettlFlag(
        ::bovespa_mbo_sbe::types::OpenCloseSettlFlag v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 17, v);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto mDEntryPx(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor, 
            ::bovespa_mbo_sbe::types::Price8<::sbepp::detail::cursor_byte_type_t<Cursor>>>
    {
        return c.template get_static_field_view<::bovespa_mbo_sbe::types::Price8<::sbepp::detail::cursor_byte_type_t<Cursor>>>(
            *this, 2, 20);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        lastTradeDate(Cursor&& c) const noexcept
            -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::LocalMktDateOptional>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::LocalMktDateOptional, ::std::uint16_t, ::sbepp::endian::little>(
            *this, 0, 28);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void lastTradeDate(
        ::bovespa_mbo_sbe::types::LocalMktDateOptional v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 28, v.value());
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        tradeDate(Cursor&& c) const noexcept
            -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::LocalMktDate>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::LocalMktDate, ::std::uint16_t, ::sbepp::endian::little>(
            *this, 0, 30);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void tradeDate(
        ::bovespa_mbo_sbe::types::LocalMktDate v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 30, v.value());
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto mDEntryTimestamp(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor, 
            ::bovespa_mbo_sbe::types::UTCTimestampNanos<::sbepp::detail::cursor_byte_type_t<Cursor>>>
    {
        return c.template get_static_field_view<::bovespa_mbo_sbe::types::UTCTimestampNanos<::sbepp::detail::cursor_byte_type_t<Cursor>>>(
            *this, 0, 32);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto rptSeq(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::RptSeq>
    {
        return c.template get_last_value<::bovespa_mbo_sbe::types::RptSeq, ::std::uint32_t, ::sbepp::endian::little>(
            *this, 0, 40);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void rptSeq(::bovespa_mbo_sbe::types::RptSeq v, Cursor&& c) const noexcept
    {
        return c.template set_last_value<::sbepp::endian::little>(
            *this, 0, 40, v.value());
    }


    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP14_CONSTEXPR ::bovespa_mbo_sbe::types::messageHeader<Byte>
        operator()(::sbepp::detail::fill_message_header_tag) const noexcept
    {
        auto header = operator()(::sbepp::detail::get_header_tag{});
        header.schemaId({2});
        header.templateId({17});
        header.version({8});
        header.blockLength({36});
        
        
        return header;
    }


    SBEPP_CPP20_CONSTEXPR std::size_t operator()(
        ::sbepp::detail::size_bytes_tag) const noexcept
    {
        return 8 + (*this)(::sbepp::detail::get_block_length_tag{});
    }


    template<typename Visitor, typename Cursor>
    SBEPP_CPP14_CONSTEXPR void operator()(
        ::sbepp::detail::visit_tag, Visitor& v, Cursor& c)
    {
        v.template on_message(*this, c, ::bovespa_mbo_sbe::schema::messages::ClosingPrice_17{});
    }


    template<typename Visitor, typename Cursor>
    constexpr bool operator()(
        ::sbepp::detail::visit_children_tag, Visitor& v, Cursor& c) const
    {
        return v.template on_field(this->securityID(c), ::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::securityID{})
||v.template on_field(this->matchEventIndicator(c), ::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::matchEventIndicator{})
||v.template on_field(this->openCloseSettlFlag(c), ::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::openCloseSettlFlag{})
||v.template on_field(this->mDEntryPx(c), ::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::mDEntryPx{})
||v.template on_field(this->lastTradeDate(c), ::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::lastTradeDate{})
||v.template on_field(this->tradeDate(c), ::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::tradeDate{})
||v.template on_field(this->mDEntryTimestamp(c), ::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::mDEntryTimestamp{})
||v.template on_field(this->rptSeq(c), ::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::rptSeq{});
    }

};

} // namespace messages
} // namespace detail

namespace messages
{

    template<typename Byte>
    using ClosingPrice_17 = ::bovespa_mbo_sbe::detail::messages::message_12<Byte>;

} // namespace messages
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::messageType>
{
public:
    static constexpr const char* name() noexcept
    {
        return "messageType";
    }

    static constexpr member_id_t id() noexcept
    {
        return 35;
    }

    static constexpr const char* description() noexcept
    {
        return "";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::constant;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {0};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::MessageType;
    
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::applVerID>
{
public:
    static constexpr const char* name() noexcept
    {
        return "applVerID";
    }

    static constexpr member_id_t id() noexcept
    {
        return 1128;
    }

    static constexpr const char* description() noexcept
    {
        return "Specifies the service pack release being applied at message level";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::constant;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {0};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::ApplVerID;
    
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::securityID>
{
public:
    static constexpr const char* name() noexcept
    {
        return "securityID";
    }

    static constexpr member_id_t id() noexcept
    {
        return 48;
    }

    static constexpr const char* description() noexcept
    {
        return "Security ID as defined by B3. For the SecurityID list, see the Security Definition message in Market Data feed.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {0};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::SecurityID;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::SecurityID;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::securityIDSource>
{
public:
    static constexpr const char* name() noexcept
    {
        return "securityIDSource";
    }

    static constexpr member_id_t id() noexcept
    {
        return 22;
    }

    static constexpr const char* description() noexcept
    {
        return "Identifies the class of the SecurityID (Exchange Symbol).";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::constant;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {0};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::SecurityIDSource;
    
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::securityExchange>
{
public:
    static constexpr const char* name() noexcept
    {
        return "securityExchange";
    }

    static constexpr member_id_t id() noexcept
    {
        return 207;
    }

    static constexpr const char* description() noexcept
    {
        return "Market to which the symbol belongs.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::constant;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {0};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::SecurityExchangeBVMF;
    
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::matchEventIndicator>
{
public:
    static constexpr const char* name() noexcept
    {
        return "matchEventIndicator";
    }

    static constexpr member_id_t id() noexcept
    {
        return 37035;
    }

    static constexpr const char* description() noexcept
    {
        return "Identifies the end of the current event and if it is a retransmission.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {8};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::MatchEventIndicator;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::MatchEventIndicator;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::mDUpdateAction>
{
public:
    static constexpr const char* name() noexcept
    {
        return "mDUpdateAction";
    }

    static constexpr member_id_t id() noexcept
    {
        return 279;
    }

    static constexpr const char* description() noexcept
    {
        return "Update Action (NEW) - always replace.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::constant;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {0};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::MDUpdateAction;
    
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::mDEntryType>
{
public:
    static constexpr const char* name() noexcept
    {
        return "mDEntryType";
    }

    static constexpr member_id_t id() noexcept
    {
        return 269;
    }

    static constexpr const char* description() noexcept
    {
        return "Entry type: Closing Price.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::constant;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {0};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::MDEntryType;
    
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::openCloseSettlFlag>
{
public:
    static constexpr const char* name() noexcept
    {
        return "openCloseSettlFlag";
    }

    static constexpr member_id_t id() noexcept
    {
        return 286;
    }

    static constexpr const char* description() noexcept
    {
        return "Describe when the settlement data is related to; valid values: 0, 3 or 4.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {9};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::OpenCloseSettlFlag;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::OpenCloseSettlFlag;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::mDEntryPx>
{
public:
    static constexpr const char* name() noexcept
    {
        return "mDEntryPx";
    }

    static constexpr member_id_t id() noexcept
    {
        return 270;
    }

    static constexpr const char* description() noexcept
    {
        return "Closing price. May be adjusted by corporate events.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {12};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    
    template<typename Byte>
    using value_type = ::bovespa_mbo_sbe::types::Price8<Byte>;

    using value_type_tag = ::bovespa_mbo_sbe::schema::types::Price8;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::lastTradeDate>
{
public:
    static constexpr const char* name() noexcept
    {
        return "lastTradeDate";
    }

    static constexpr member_id_t id() noexcept
    {
        return 9325;
    }

    static constexpr const char* description() noexcept
    {
        return "Date the instrument last traded.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::optional;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {20};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::LocalMktDateOptional;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::LocalMktDateOptional;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::tradeDate>
{
public:
    static constexpr const char* name() noexcept
    {
        return "tradeDate";
    }

    static constexpr member_id_t id() noexcept
    {
        return 75;
    }

    static constexpr const char* description() noexcept
    {
        return "Used to specify the trading date for which a set of market data applies.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {22};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::LocalMktDate;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::LocalMktDate;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::mDEntryTimestamp>
{
public:
    static constexpr const char* name() noexcept
    {
        return "mDEntryTimestamp";
    }

    static constexpr member_id_t id() noexcept
    {
        return 37033;
    }

    static constexpr const char* description() noexcept
    {
        return "Date and time of market data entry.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {24};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    
    template<typename Byte>
    using value_type = ::bovespa_mbo_sbe::types::UTCTimestampNanos<Byte>;

    using value_type_tag = ::bovespa_mbo_sbe::schema::types::UTCTimestampNanos;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17::rptSeq>
{
public:
    static constexpr const char* name() noexcept
    {
        return "rptSeq";
    }

    static constexpr member_id_t id() noexcept
    {
        return 83;
    }

    static constexpr const char* description() noexcept
    {
        return "Sequence number per instrument update. Zeroed in snapshot feed.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::optional;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {32};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::RptSeq;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::RptSeq;
};

template<>
class message_traits<::bovespa_mbo_sbe::schema::messages::ClosingPrice_17>
{
public:
    static constexpr const char* name() noexcept
    {
        return "ClosingPrice_17";
    }

    static constexpr const char* description() noexcept
    {
        return "Summary information about closing trading sessions per market data stream.";
    }

    static constexpr message_id_t id() noexcept
    {
        return 17;
    }

    static constexpr block_length_t block_length() noexcept
    {
        return 36;
    }

    static constexpr const char* semantic_type() noexcept
    {
        return "";
    }

    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    
    template<typename Byte>
    using value_type = ::bovespa_mbo_sbe::messages::ClosingPrice_17<Byte>;

    using schema_tag = ::bovespa_mbo_sbe::schema;
    static constexpr ::std::size_t size_bytes() noexcept
    {
        return ::sbepp::composite_traits<
            ::sbepp::schema_traits<schema_tag>::header_type_tag>::size_bytes()
            + block_length();
    }

};

template<typename Byte>
struct traits_tag<::bovespa_mbo_sbe::messages::ClosingPrice_17<Byte>>
{
    using type = ::bovespa_mbo_sbe::schema::messages::ClosingPrice_17;
};


}  // namespace sbepp

SBEPP_WARNINGS_ON();