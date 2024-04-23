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
#include "../types/MDEntryPositionNo.hpp"
#include "../types/MDEntryType.hpp"
#include "../types/MDUpdateAction.hpp"
#include "../types/MatchEventIndicator.hpp"
#include "../types/SecurityExchangeBVMF.hpp"
#include "../types/SecurityIDSource.hpp"
#include "../types/SecurityID.hpp"
#include "../types/ApplVerID.hpp"
#include "../types/MessageType.hpp"


namespace bovespa_mbo_sbe
{
namespace detail
{
namespace messages
{



template<typename Byte>
class message_23 : public ::sbepp::detail::message_base<
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
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::MDUpdateAction mDUpdateAction() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::MDUpdateAction, ::bovespa_mbo_sbe::types::MDUpdateAction, ::sbepp::endian::little>(*this, 17);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void mDUpdateAction(::bovespa_mbo_sbe::types::MDUpdateAction v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 17, v);
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::MDEntryType mDEntryType() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::MDEntryType, ::bovespa_mbo_sbe::types::MDEntryType, ::sbepp::endian::little>(*this, 18);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void mDEntryType(::bovespa_mbo_sbe::types::MDEntryType v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 18, v);
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::MDEntryPositionNo mDEntryPositionNo() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::MDEntryPositionNo, ::bovespa_mbo_sbe::types::MDEntryPositionNo::value_type, ::sbepp::endian::little>(*this, 20);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void mDEntryPositionNo(::bovespa_mbo_sbe::types::MDEntryPositionNo v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 20, v.value());
    }
    constexpr ::bovespa_mbo_sbe::types::UTCTimestampNanos<Byte> mDEntryTimestamp() const noexcept
    {
        return ::sbepp::detail::get_static_field_view<::bovespa_mbo_sbe::types::UTCTimestampNanos<Byte>>(
            *this, 24);
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::RptSeq rptSeq() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::RptSeq, ::bovespa_mbo_sbe::types::RptSeq::value_type, ::sbepp::endian::little>(*this, 32);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void rptSeq(::bovespa_mbo_sbe::types::RptSeq v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 32, v.value());
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
        mDUpdateAction(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::MDUpdateAction>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::MDUpdateAction, ::bovespa_mbo_sbe::types::MDUpdateAction, ::sbepp::endian::little>(
            *this, 0, 17);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void mDUpdateAction(
        ::bovespa_mbo_sbe::types::MDUpdateAction v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 17, v);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        mDEntryType(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::MDEntryType>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::MDEntryType, ::bovespa_mbo_sbe::types::MDEntryType, ::sbepp::endian::little>(
            *this, 0, 18);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void mDEntryType(
        ::bovespa_mbo_sbe::types::MDEntryType v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 18, v);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        mDEntryPositionNo(Cursor&& c) const noexcept
            -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::MDEntryPositionNo>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::MDEntryPositionNo, ::std::uint32_t, ::sbepp::endian::little>(
            *this, 1, 20);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void mDEntryPositionNo(
        ::bovespa_mbo_sbe::types::MDEntryPositionNo v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 1, 20, v.value());
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
            *this, 0, 24);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto rptSeq(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::RptSeq>
    {
        return c.template get_last_value<::bovespa_mbo_sbe::types::RptSeq, ::std::uint32_t, ::sbepp::endian::little>(
            *this, 0, 32);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void rptSeq(::bovespa_mbo_sbe::types::RptSeq v, Cursor&& c) const noexcept
    {
        return c.template set_last_value<::sbepp::endian::little>(
            *this, 0, 32, v.value());
    }


    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP14_CONSTEXPR ::bovespa_mbo_sbe::types::messageHeader<Byte>
        operator()(::sbepp::detail::fill_message_header_tag) const noexcept
    {
        auto header = operator()(::sbepp::detail::get_header_tag{});
        header.schemaId({2});
        header.templateId({52});
        header.version({8});
        header.blockLength({28});
        
        
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
        v.template on_message(*this, c, ::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52{});
    }


    template<typename Visitor, typename Cursor>
    constexpr bool operator()(
        ::sbepp::detail::visit_children_tag, Visitor& v, Cursor& c) const
    {
        return v.template on_field(this->securityID(c), ::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::securityID{})
||v.template on_field(this->matchEventIndicator(c), ::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::matchEventIndicator{})
||v.template on_field(this->mDUpdateAction(c), ::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::mDUpdateAction{})
||v.template on_field(this->mDEntryType(c), ::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::mDEntryType{})
||v.template on_field(this->mDEntryPositionNo(c), ::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::mDEntryPositionNo{})
||v.template on_field(this->mDEntryTimestamp(c), ::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::mDEntryTimestamp{})
||v.template on_field(this->rptSeq(c), ::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::rptSeq{});
    }

};

} // namespace messages
} // namespace detail

namespace messages
{

    template<typename Byte>
    using MassDeleteOrders_MBO_52 = ::bovespa_mbo_sbe::detail::messages::message_23<Byte>;

} // namespace messages
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::messageType>
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
class field_traits<::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::applVerID>
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
        return "Specifies the service pack release being applied at message level.";
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
class field_traits<::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::securityID>
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
class field_traits<::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::securityIDSource>
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
class field_traits<::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::securityExchange>
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
class field_traits<::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::matchEventIndicator>
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
        return "Identifies if it is a retransmission.";
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
class field_traits<::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::mDUpdateAction>
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
        return "Update Action (DELETE_FROM, DELETE_THRU).";
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

    
    using value_type = ::bovespa_mbo_sbe::types::MDUpdateAction;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::MDUpdateAction;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::mDEntryType>
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
        return "Entry Type (BID or OFFER).";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {10};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::MDEntryType;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::MDEntryType;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::mDEntryPositionNo>
{
public:
    static constexpr const char* name() noexcept
    {
        return "mDEntryPositionNo";
    }

    static constexpr member_id_t id() noexcept
    {
        return 290;
    }

    static constexpr const char* description() noexcept
    {
        return "Display position of a bid or offer where orders will be deleted (up or down from this position).";
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

    
    using value_type = ::bovespa_mbo_sbe::types::MDEntryPositionNo;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::MDEntryPositionNo;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::mDEntryTimestamp>
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
        return {16};
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
class field_traits<::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52::rptSeq>
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
        return {24};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::RptSeq;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::RptSeq;
};

template<>
class message_traits<::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52>
{
public:
    static constexpr const char* name() noexcept
    {
        return "MassDeleteOrders_MBO_52";
    }

    static constexpr const char* description() noexcept
    {
        return "Disseminates mass deletion of orders.";
    }

    static constexpr message_id_t id() noexcept
    {
        return 52;
    }

    static constexpr block_length_t block_length() noexcept
    {
        return 28;
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
    using value_type = ::bovespa_mbo_sbe::messages::MassDeleteOrders_MBO_52<Byte>;

    using schema_tag = ::bovespa_mbo_sbe::schema;
    static constexpr ::std::size_t size_bytes() noexcept
    {
        return ::sbepp::composite_traits<
            ::sbepp::schema_traits<schema_tag>::header_type_tag>::size_bytes()
            + block_length();
    }

};

template<typename Byte>
struct traits_tag<::bovespa_mbo_sbe::messages::MassDeleteOrders_MBO_52<Byte>>
{
    using type = ::bovespa_mbo_sbe::schema::messages::MassDeleteOrders_MBO_52;
};


}  // namespace sbepp

SBEPP_WARNINGS_ON();
