// SPDX-License-Identifier: MIT
// Copyright (c) 2023, Oleksandr Koval

// This file was generated by sbeppc 1.3.0
#pragma once

#include <sbepp/sbepp.hpp>

SBEPP_WARNINGS_OFF();

#include "../schema/schema.hpp"
#include "../types/messageHeader.hpp"
#include "../types/RptSeq.hpp"
#include "../types/UInt16.hpp"
#include "../types/UInt32.hpp"
#include "../types/SeqNum.hpp"
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
class message_20 : public ::sbepp::detail::message_base<
    Byte, ::bovespa_mbo_sbe::types::messageHeader<Byte>>
{
public:
    using ::sbepp::detail::message_base<
        Byte, ::bovespa_mbo_sbe::types::messageHeader<Byte>>::message_base;
    using ::sbepp::detail::message_base<
        Byte, ::bovespa_mbo_sbe::types::messageHeader<Byte>>::operator();

    static constexpr ::bovespa_mbo_sbe::types::MessageType messageType() noexcept
    {
        return ::bovespa_mbo_sbe::types::MessageType{::bovespa_mbo_sbe::detail::types::enum_8::MarketDataSnapshotFullRefresh};
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
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::SeqNum lastMsgSeqNumProcessed() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::SeqNum, ::bovespa_mbo_sbe::types::SeqNum::value_type, ::sbepp::endian::little>(*this, 16);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void lastMsgSeqNumProcessed(::bovespa_mbo_sbe::types::SeqNum v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 16, v.value());
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::UInt32 totNumReports() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::UInt32, ::bovespa_mbo_sbe::types::UInt32::value_type, ::sbepp::endian::little>(*this, 20);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void totNumReports(::bovespa_mbo_sbe::types::UInt32 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 20, v.value());
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::UInt32 totNumBids() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::UInt32, ::bovespa_mbo_sbe::types::UInt32::value_type, ::sbepp::endian::little>(*this, 24);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void totNumBids(::bovespa_mbo_sbe::types::UInt32 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 24, v.value());
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::UInt32 totNumOffers() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::UInt32, ::bovespa_mbo_sbe::types::UInt32::value_type, ::sbepp::endian::little>(*this, 28);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void totNumOffers(::bovespa_mbo_sbe::types::UInt32 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 28, v.value());
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::UInt16 totNumStats() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::UInt16, ::bovespa_mbo_sbe::types::UInt16::value_type, ::sbepp::endian::little>(*this, 32);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void totNumStats(::bovespa_mbo_sbe::types::UInt16 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 32, v.value());
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::RptSeq lastRptSeq() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::RptSeq, ::bovespa_mbo_sbe::types::RptSeq::value_type, ::sbepp::endian::little>(*this, 36);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void lastRptSeq(::bovespa_mbo_sbe::types::RptSeq v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 36, v.value());
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
        lastMsgSeqNumProcessed(Cursor&& c) const noexcept
            -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::SeqNum>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::SeqNum, ::std::uint32_t, ::sbepp::endian::little>(
            *this, 0, 16);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void lastMsgSeqNumProcessed(
        ::bovespa_mbo_sbe::types::SeqNum v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 16, v.value());
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        totNumReports(Cursor&& c) const noexcept
            -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::UInt32>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::UInt32, ::std::uint32_t, ::sbepp::endian::little>(
            *this, 0, 20);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void totNumReports(
        ::bovespa_mbo_sbe::types::UInt32 v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 20, v.value());
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        totNumBids(Cursor&& c) const noexcept
            -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::UInt32>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::UInt32, ::std::uint32_t, ::sbepp::endian::little>(
            *this, 0, 24);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void totNumBids(
        ::bovespa_mbo_sbe::types::UInt32 v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 24, v.value());
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        totNumOffers(Cursor&& c) const noexcept
            -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::UInt32>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::UInt32, ::std::uint32_t, ::sbepp::endian::little>(
            *this, 0, 28);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void totNumOffers(
        ::bovespa_mbo_sbe::types::UInt32 v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 28, v.value());
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        totNumStats(Cursor&& c) const noexcept
            -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::UInt16>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::UInt16, ::std::uint16_t, ::sbepp::endian::little>(
            *this, 0, 32);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void totNumStats(
        ::bovespa_mbo_sbe::types::UInt16 v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 32, v.value());
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto lastRptSeq(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::RptSeq>
    {
        return c.template get_last_value<::bovespa_mbo_sbe::types::RptSeq, ::std::uint32_t, ::sbepp::endian::little>(
            *this, 2, 36);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void lastRptSeq(::bovespa_mbo_sbe::types::RptSeq v, Cursor&& c) const noexcept
    {
        return c.template set_last_value<::sbepp::endian::little>(
            *this, 2, 36, v.value());
    }


    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP14_CONSTEXPR ::bovespa_mbo_sbe::types::messageHeader<Byte>
        operator()(::sbepp::detail::fill_message_header_tag) const noexcept
    {
        auto header = operator()(::sbepp::detail::get_header_tag{});
        header.schemaId({2});
        header.templateId({30});
        header.version({8});
        header.blockLength({32});
        
        
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
        v.template on_message(*this, c, ::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30{});
    }


    template<typename Visitor, typename Cursor>
    constexpr bool operator()(
        ::sbepp::detail::visit_children_tag, Visitor& v, Cursor& c) const
    {
        return v.template on_field(this->securityID(c), ::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::securityID{})
||v.template on_field(this->lastMsgSeqNumProcessed(c), ::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::lastMsgSeqNumProcessed{})
||v.template on_field(this->totNumReports(c), ::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::totNumReports{})
||v.template on_field(this->totNumBids(c), ::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::totNumBids{})
||v.template on_field(this->totNumOffers(c), ::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::totNumOffers{})
||v.template on_field(this->totNumStats(c), ::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::totNumStats{})
||v.template on_field(this->lastRptSeq(c), ::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::lastRptSeq{});
    }

};

} // namespace messages
} // namespace detail

namespace messages
{

    template<typename Byte>
    using SnapshotFullRefresh_Header_30 = ::bovespa_mbo_sbe::detail::messages::message_20<Byte>;

} // namespace messages
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::messageType>
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
class field_traits<::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::applVerID>
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
class field_traits<::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::securityID>
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
class field_traits<::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::securityIDSource>
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
class field_traits<::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::securityExchange>
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
class field_traits<::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::lastMsgSeqNumProcessed>
{
public:
    static constexpr const char* name() noexcept
    {
        return "lastMsgSeqNumProcessed";
    }

    static constexpr member_id_t id() noexcept
    {
        return 369;
    }

    static constexpr const char* description() noexcept
    {
        return "The last processed packet sequence number of the incremental channel as of the time the snapshot was generated. This value is used to synchronize the snapshot with the incremental feed.";
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

    
    using value_type = ::bovespa_mbo_sbe::types::SeqNum;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::SeqNum;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::totNumReports>
{
public:
    static constexpr const char* name() noexcept
    {
        return "totNumReports";
    }

    static constexpr member_id_t id() noexcept
    {
        return 911;
    }

    static constexpr const char* description() noexcept
    {
        return "Total number of snapshots to be returned in the current replay loop.";
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

    
    using value_type = ::bovespa_mbo_sbe::types::UInt32;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::UInt32;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::totNumBids>
{
public:
    static constexpr const char* name() noexcept
    {
        return "totNumBids";
    }

    static constexpr member_id_t id() noexcept
    {
        return 37071;
    }

    static constexpr const char* description() noexcept
    {
        return "Total number of bid orders that constitute this snapshot.";
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

    
    using value_type = ::bovespa_mbo_sbe::types::UInt32;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::UInt32;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::totNumOffers>
{
public:
    static constexpr const char* name() noexcept
    {
        return "totNumOffers";
    }

    static constexpr member_id_t id() noexcept
    {
        return 37072;
    }

    static constexpr const char* description() noexcept
    {
        return "Total number of ask orders that constitute this snapshot.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {20};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::UInt32;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::UInt32;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::totNumStats>
{
public:
    static constexpr const char* name() noexcept
    {
        return "totNumStats";
    }

    static constexpr member_id_t id() noexcept
    {
        return 37070;
    }

    static constexpr const char* description() noexcept
    {
        return "Total number of statistics (incremental and security status messages) that constitute this snapshot.";
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

    
    using value_type = ::bovespa_mbo_sbe::types::UInt16;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::UInt16;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30::lastRptSeq>
{
public:
    static constexpr const char* name() noexcept
    {
        return "lastRptSeq";
    }

    static constexpr member_id_t id() noexcept
    {
        return 37083;
    }

    static constexpr const char* description() noexcept
    {
        return "Last processed RptSeq (sequence number per instrument update) for this instrument. Can be used to synchronize the snapshot with the incremental feed if the client is only interested in a subset of the channel's instruments.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::optional;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {28};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::RptSeq;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::RptSeq;
};

template<>
class message_traits<::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30>
{
public:
    static constexpr const char* name() noexcept
    {
        return "SnapshotFullRefresh_Header_30";
    }

    static constexpr const char* description() noexcept
    {
        return "Header for the snapshot of a single instrument";
    }

    static constexpr message_id_t id() noexcept
    {
        return 30;
    }

    static constexpr block_length_t block_length() noexcept
    {
        return 32;
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
    using value_type = ::bovespa_mbo_sbe::messages::SnapshotFullRefresh_Header_30<Byte>;

    using schema_tag = ::bovespa_mbo_sbe::schema;
    static constexpr ::std::size_t size_bytes() noexcept
    {
        return ::sbepp::composite_traits<
            ::sbepp::schema_traits<schema_tag>::header_type_tag>::size_bytes()
            + block_length();
    }

};

template<typename Byte>
struct traits_tag<::bovespa_mbo_sbe::messages::SnapshotFullRefresh_Header_30<Byte>>
{
    using type = ::bovespa_mbo_sbe::schema::messages::SnapshotFullRefresh_Header_30;
};


}  // namespace sbepp

SBEPP_WARNINGS_ON();
