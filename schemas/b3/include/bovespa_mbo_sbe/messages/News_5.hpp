// SPDX-License-Identifier: MIT
// Copyright (c) 2023, Oleksandr Koval

// This file was generated by sbeppc 1.3.0
#pragma once

#include <sbepp/sbepp.hpp>

SBEPP_WARNINGS_OFF();

#include "../schema/schema.hpp"
#include "../types/messageHeader.hpp"
#include "../types/VarString.hpp"
#include "../types/UInt32.hpp"
#include "../types/UTCTimestampNanos.hpp"
#include "../types/NewsID.hpp"
#include "../types/UInt16.hpp"
#include "../types/LanguageCode.hpp"
#include "../types/MatchEventIndicator.hpp"
#include "../types/SecurityExchangeBVMF.hpp"
#include "../types/SecurityIDSource.hpp"
#include "../types/SecurityIDOptional.hpp"
#include "../types/NewsSource.hpp"
#include "../types/ApplVerID.hpp"
#include "../types/MessageType.hpp"


namespace bovespa_mbo_sbe
{
namespace detail
{
namespace messages
{



template<typename Byte>
class message_9 : public ::sbepp::detail::message_base<
    Byte, ::bovespa_mbo_sbe::types::messageHeader<Byte>>
{
public:
    using ::sbepp::detail::message_base<
        Byte, ::bovespa_mbo_sbe::types::messageHeader<Byte>>::message_base;
    using ::sbepp::detail::message_base<
        Byte, ::bovespa_mbo_sbe::types::messageHeader<Byte>>::operator();

    static constexpr ::bovespa_mbo_sbe::types::MessageType messageType() noexcept
    {
        return ::bovespa_mbo_sbe::types::MessageType{::bovespa_mbo_sbe::detail::types::enum_8::News};
    }
    static constexpr ::bovespa_mbo_sbe::types::ApplVerID applVerID() noexcept
    {
        return ::bovespa_mbo_sbe::types::ApplVerID{::bovespa_mbo_sbe::detail::types::enum_6::FIX50SP2};
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::SecurityIDOptional securityID() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::SecurityIDOptional, ::bovespa_mbo_sbe::types::SecurityIDOptional::value_type, ::sbepp::endian::little>(*this, 8);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void securityID(::bovespa_mbo_sbe::types::SecurityIDOptional v) const noexcept
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
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::NewsSource newsSource() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::NewsSource, ::bovespa_mbo_sbe::types::NewsSource, ::sbepp::endian::little>(*this, 17);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void newsSource(::bovespa_mbo_sbe::types::NewsSource v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 17, v);
    }
    constexpr ::bovespa_mbo_sbe::types::LanguageCode<Byte> languageCode() const noexcept
    {
        return ::sbepp::detail::get_static_field_view<::bovespa_mbo_sbe::types::LanguageCode<Byte>>(
            *this, 18);
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::UInt16 partCount() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::UInt16, ::bovespa_mbo_sbe::types::UInt16::value_type, ::sbepp::endian::little>(*this, 20);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void partCount(::bovespa_mbo_sbe::types::UInt16 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 20, v.value());
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::UInt16 partNumber() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::UInt16, ::bovespa_mbo_sbe::types::UInt16::value_type, ::sbepp::endian::little>(*this, 22);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void partNumber(::bovespa_mbo_sbe::types::UInt16 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 22, v.value());
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::NewsID newsID() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::NewsID, ::bovespa_mbo_sbe::types::NewsID::value_type, ::sbepp::endian::little>(*this, 24);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void newsID(::bovespa_mbo_sbe::types::NewsID v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 24, v.value());
    }
    constexpr ::bovespa_mbo_sbe::types::UTCTimestampNanos<Byte> origTime() const noexcept
    {
        return ::sbepp::detail::get_static_field_view<::bovespa_mbo_sbe::types::UTCTimestampNanos<Byte>>(
            *this, 32);
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::types::UInt32 totalTextLength() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::types::UInt32, ::bovespa_mbo_sbe::types::UInt32::value_type, ::sbepp::endian::little>(*this, 40);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void totalTextLength(::bovespa_mbo_sbe::types::UInt32 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 40, v.value());
    }

    constexpr ::sbepp::detail::dynamic_array_ref<
    Byte, ::std::uint8_t, ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little> headline() const noexcept
    {
        return ::sbepp::detail::get_first_dynamic_field_view<::sbepp::detail::dynamic_array_ref<
    Byte, ::std::uint8_t, ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little>>(
            *this);
    }

    constexpr ::sbepp::detail::dynamic_array_ref<
    Byte, ::std::uint8_t, ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little> text() const noexcept
    {
        return ::sbepp::detail::get_dynamic_field_view<::sbepp::detail::dynamic_array_ref<
    Byte, ::std::uint8_t, ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little>>(
            *this, headline());
    }

    constexpr ::sbepp::detail::dynamic_array_ref<
    Byte, ::std::uint8_t, ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little> uRLLink() const noexcept
    {
        return ::sbepp::detail::get_dynamic_field_view<::sbepp::detail::dynamic_array_ref<
    Byte, ::std::uint8_t, ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little>>(
            *this, text());
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        securityID(Cursor&& c) const noexcept
            -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::SecurityIDOptional>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::SecurityIDOptional, ::std::uint64_t, ::sbepp::endian::little>(
            *this, 0, 8);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void securityID(
        ::bovespa_mbo_sbe::types::SecurityIDOptional v, Cursor&& c) const noexcept
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
        newsSource(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::NewsSource>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::NewsSource, ::bovespa_mbo_sbe::types::NewsSource, ::sbepp::endian::little>(
            *this, 0, 17);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void newsSource(
        ::bovespa_mbo_sbe::types::NewsSource v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 17, v);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        languageCode(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::LanguageCode<
            ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    {
        return c.template get_static_field_view<::bovespa_mbo_sbe::types::LanguageCode<
            ::sbepp::detail::cursor_byte_type_t<Cursor>>>(
                *this, 0, 18);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        partCount(Cursor&& c) const noexcept
            -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::UInt16>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::UInt16, ::std::uint16_t, ::sbepp::endian::little>(
            *this, 0, 20);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void partCount(
        ::bovespa_mbo_sbe::types::UInt16 v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 20, v.value());
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        partNumber(Cursor&& c) const noexcept
            -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::UInt16>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::UInt16, ::std::uint16_t, ::sbepp::endian::little>(
            *this, 0, 22);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void partNumber(
        ::bovespa_mbo_sbe::types::UInt16 v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 22, v.value());
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto
        newsID(Cursor&& c) const noexcept
            -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::NewsID>
    {
        return c.template get_value<::bovespa_mbo_sbe::types::NewsID, ::std::uint64_t, ::sbepp::endian::little>(
            *this, 0, 24);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void newsID(
        ::bovespa_mbo_sbe::types::NewsID v, Cursor&& c) const noexcept
    {
        return c.template set_value<::sbepp::endian::little>(
            *this, 0, 24, v.value());
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR auto origTime(Cursor&& c) const noexcept
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
    SBEPP_CPP20_CONSTEXPR auto totalTextLength(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor, ::bovespa_mbo_sbe::types::UInt32>
    {
        return c.template get_last_value<::bovespa_mbo_sbe::types::UInt32, ::std::uint32_t, ::sbepp::endian::little>(
            *this, 0, 40);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_writeable_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    SBEPP_CPP20_CONSTEXPR void totalTextLength(::bovespa_mbo_sbe::types::UInt32 v, Cursor&& c) const noexcept
    {
        return c.template set_last_value<::sbepp::endian::little>(
            *this, 0, 40, v.value());
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    constexpr auto headline(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor,
            ::sbepp::detail::dynamic_array_ref<
                ::sbepp::detail::cursor_byte_type_t<Cursor>,
                    ::std::uint8_t, ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little>>
    {
        return c.template get_first_data_view<
            ::sbepp::detail::dynamic_array_ref<
                ::sbepp::detail::cursor_byte_type_t<Cursor>,
                    ::std::uint8_t, ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little>>(
                        *this);
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    constexpr auto text(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor,
            ::sbepp::detail::dynamic_array_ref<
                ::sbepp::detail::cursor_byte_type_t<Cursor>,
                    ::std::uint8_t, ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little>>
    {
        return c.template get_data_view<
            ::sbepp::detail::dynamic_array_ref<
                ::sbepp::detail::cursor_byte_type_t<Cursor>, ::std::uint8_t,
                    ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little>>(
                        *this, [this](){return this->text();});
    }

    template<
        typename Cursor,
        typename = ::sbepp::detail::enable_if_cursor_compatible_t<
            Byte, ::sbepp::detail::cursor_byte_type_t<Cursor>>>
    constexpr auto uRLLink(Cursor&& c) const noexcept
        -> ::sbepp::detail::cursor_result_type_t<Cursor,
            ::sbepp::detail::dynamic_array_ref<
                ::sbepp::detail::cursor_byte_type_t<Cursor>,
                    ::std::uint8_t, ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little>>
    {
        return c.template get_data_view<
            ::sbepp::detail::dynamic_array_ref<
                ::sbepp::detail::cursor_byte_type_t<Cursor>, ::std::uint8_t,
                    ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little>>(
                        *this, [this](){return this->uRLLink();});
    }


    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP14_CONSTEXPR ::bovespa_mbo_sbe::types::messageHeader<Byte>
        operator()(::sbepp::detail::fill_message_header_tag) const noexcept
    {
        auto header = operator()(::sbepp::detail::get_header_tag{});
        header.schemaId({2});
        header.templateId({5});
        header.version({8});
        header.blockLength({36});
        
        
        return header;
    }


    SBEPP_CPP20_CONSTEXPR std::size_t operator()(
        ::sbepp::detail::size_bytes_tag) const noexcept
    {
        const auto last = uRLLink();
        return ::sbepp::addressof(last) + ::sbepp::size_bytes(last)
               - (*this)(::sbepp::detail::addressof_tag{});
    }


    template<typename Visitor, typename Cursor>
    SBEPP_CPP14_CONSTEXPR void operator()(
        ::sbepp::detail::visit_tag, Visitor& v, Cursor& c)
    {
        v.template on_message(*this, c, ::bovespa_mbo_sbe::schema::messages::News_5{});
    }


    template<typename Visitor, typename Cursor>
    constexpr bool operator()(
        ::sbepp::detail::visit_children_tag, Visitor& v, Cursor& c) const
    {
        return v.template on_field(this->securityID(c), ::bovespa_mbo_sbe::schema::messages::News_5::securityID{})
||v.template on_field(this->matchEventIndicator(c), ::bovespa_mbo_sbe::schema::messages::News_5::matchEventIndicator{})
||v.template on_field(this->newsSource(c), ::bovespa_mbo_sbe::schema::messages::News_5::newsSource{})
||v.template on_field(this->languageCode(c), ::bovespa_mbo_sbe::schema::messages::News_5::languageCode{})
||v.template on_field(this->partCount(c), ::bovespa_mbo_sbe::schema::messages::News_5::partCount{})
||v.template on_field(this->partNumber(c), ::bovespa_mbo_sbe::schema::messages::News_5::partNumber{})
||v.template on_field(this->newsID(c), ::bovespa_mbo_sbe::schema::messages::News_5::newsID{})
||v.template on_field(this->origTime(c), ::bovespa_mbo_sbe::schema::messages::News_5::origTime{})
||v.template on_field(this->totalTextLength(c), ::bovespa_mbo_sbe::schema::messages::News_5::totalTextLength{})
||v.template on_data(this->headline(c), ::bovespa_mbo_sbe::schema::messages::News_5::headline{})
||v.template on_data(this->text(c), ::bovespa_mbo_sbe::schema::messages::News_5::text{})
||v.template on_data(this->uRLLink(c), ::bovespa_mbo_sbe::schema::messages::News_5::uRLLink{});
    }

};

} // namespace messages
} // namespace detail

namespace messages
{

    template<typename Byte>
    using News_5 = ::bovespa_mbo_sbe::detail::messages::message_9<Byte>;

} // namespace messages
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::News_5::messageType>
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
class field_traits<::bovespa_mbo_sbe::schema::messages::News_5::applVerID>
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
class field_traits<::bovespa_mbo_sbe::schema::messages::News_5::securityID>
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
        return ::sbepp::field_presence::optional;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {0};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::SecurityIDOptional;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::SecurityIDOptional;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::News_5::securityIDSource>
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
class field_traits<::bovespa_mbo_sbe::schema::messages::News_5::securityExchange>
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
class field_traits<::bovespa_mbo_sbe::schema::messages::News_5::matchEventIndicator>
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
class field_traits<::bovespa_mbo_sbe::schema::messages::News_5::newsSource>
{
public:
    static constexpr const char* name() noexcept
    {
        return "newsSource";
    }

    static constexpr member_id_t id() noexcept
    {
        return 6940;
    }

    static constexpr const char* description() noexcept
    {
        return "Source of the News.";
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

    
    using value_type = ::bovespa_mbo_sbe::types::NewsSource;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::NewsSource;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::News_5::languageCode>
{
public:
    static constexpr const char* name() noexcept
    {
        return "languageCode";
    }

    static constexpr member_id_t id() noexcept
    {
        return 1474;
    }

    static constexpr const char* description() noexcept
    {
        return "Indicates the language the news is in. If null, it's 'pt' = Portuguese.";
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

    
    
    template<typename Byte>
    using value_type = ::bovespa_mbo_sbe::types::LanguageCode<Byte>;

    using value_type_tag = ::bovespa_mbo_sbe::schema::types::LanguageCode;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::News_5::partCount>
{
public:
    static constexpr const char* name() noexcept
    {
        return "partCount";
    }

    static constexpr member_id_t id() noexcept
    {
        return 37709;
    }

    static constexpr const char* description() noexcept
    {
        return "Total number of parts for the text of a News message. Usually 1.";
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

    
    using value_type = ::bovespa_mbo_sbe::types::UInt16;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::UInt16;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::News_5::partNumber>
{
public:
    static constexpr const char* name() noexcept
    {
        return "partNumber";
    }

    static constexpr member_id_t id() noexcept
    {
        return 37710;
    }

    static constexpr const char* description() noexcept
    {
        return "Number of the part for this message. Starts from 1.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {14};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::UInt16;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::UInt16;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::News_5::newsID>
{
public:
    static constexpr const char* name() noexcept
    {
        return "newsID";
    }

    static constexpr member_id_t id() noexcept
    {
        return 1472;
    }

    static constexpr const char* description() noexcept
    {
        return "Unique identifier for News message. Included in the News messages sent in the Unified News Channel. Not sent for trading engine News messages.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::optional;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {16};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::NewsID;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::NewsID;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::News_5::origTime>
{
public:
    static constexpr const char* name() noexcept
    {
        return "origTime";
    }

    static constexpr member_id_t id() noexcept
    {
        return 42;
    }

    static constexpr const char* description() noexcept
    {
        return "Time of message origination.";
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

    
    
    template<typename Byte>
    using value_type = ::bovespa_mbo_sbe::types::UTCTimestampNanos<Byte>;

    using value_type_tag = ::bovespa_mbo_sbe::schema::types::UTCTimestampNanos;
};

template<>
class field_traits<::bovespa_mbo_sbe::schema::messages::News_5::totalTextLength>
{
public:
    static constexpr const char* name() noexcept
    {
        return "totalTextLength";
    }

    static constexpr member_id_t id() noexcept
    {
        return 37777;
    }

    static constexpr const char* description() noexcept
    {
        return "Total size, in bytes, for the text of a News message.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {32};
    }


    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::UInt32;
    using value_type_tag = ::bovespa_mbo_sbe::schema::types::UInt32;
};

template<>
class data_traits<::bovespa_mbo_sbe::schema::messages::News_5::headline>
{
public:
    static constexpr const char* name() noexcept
    {
        return "headline";
    }

    static constexpr member_id_t id() noexcept
    {
        return 148;
    }

    static constexpr const char* description() noexcept
    {
        return "The headline of a News message.";
    }

    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    template<typename Byte>
    using value_type = ::sbepp::detail::dynamic_array_ref<
    Byte, ::std::uint8_t, ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little>;

    using length_type = ::bovespa_mbo_sbe::detail::types::type_53;
    using length_type_tag = ::bovespa_mbo_sbe::schema::types::VarString::length;

    static constexpr ::std::size_t size_bytes(
        const length_type::value_type size) noexcept
    {
        return sizeof(size) + size;
    }
};

template<>
class data_traits<::bovespa_mbo_sbe::schema::messages::News_5::text>
{
public:
    static constexpr const char* name() noexcept
    {
        return "text";
    }

    static constexpr member_id_t id() noexcept
    {
        return 58;
    }

    static constexpr const char* description() noexcept
    {
        return "Free format text string.";
    }

    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    template<typename Byte>
    using value_type = ::sbepp::detail::dynamic_array_ref<
    Byte, ::std::uint8_t, ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little>;

    using length_type = ::bovespa_mbo_sbe::detail::types::type_53;
    using length_type_tag = ::bovespa_mbo_sbe::schema::types::VarString::length;

    static constexpr ::std::size_t size_bytes(
        const length_type::value_type size) noexcept
    {
        return sizeof(size) + size;
    }
};

template<>
class data_traits<::bovespa_mbo_sbe::schema::messages::News_5::uRLLink>
{
public:
    static constexpr const char* name() noexcept
    {
        return "uRLLink";
    }

    static constexpr member_id_t id() noexcept
    {
        return 149;
    }

    static constexpr const char* description() noexcept
    {
        return "A URL (Uniform Resource Locator) link to additional information (e.g. http://www.b3.com.br).";
    }

    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    template<typename Byte>
    using value_type = ::sbepp::detail::dynamic_array_ref<
    Byte, ::std::uint8_t, ::bovespa_mbo_sbe::detail::types::type_53, ::sbepp::endian::little>;

    using length_type = ::bovespa_mbo_sbe::detail::types::type_53;
    using length_type_tag = ::bovespa_mbo_sbe::schema::types::VarString::length;

    static constexpr ::std::size_t size_bytes(
        const length_type::value_type size) noexcept
    {
        return sizeof(size) + size;
    }
};

template<>
class message_traits<::bovespa_mbo_sbe::schema::messages::News_5>
{
public:
    static constexpr const char* name() noexcept
    {
        return "News_5";
    }

    static constexpr const char* description() noexcept
    {
        return "Conveys market information of B3 market surveillance notifications and news produced by agencies.";
    }

    static constexpr message_id_t id() noexcept
    {
        return 5;
    }

    static constexpr block_length_t block_length() noexcept
    {
        return 36;
    }

    static constexpr const char* semantic_type() noexcept
    {
        return "B";
    }

    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    
    template<typename Byte>
    using value_type = ::bovespa_mbo_sbe::messages::News_5<Byte>;

    using schema_tag = ::bovespa_mbo_sbe::schema;
    static constexpr ::std::size_t size_bytes(
        const ::std::size_t total_data_size) noexcept
    {
        return ::sbepp::composite_traits<
            ::sbepp::schema_traits<schema_tag>::header_type_tag>::size_bytes()
            + block_length()
+ ::sbepp::data_traits<::bovespa_mbo_sbe::schema::messages::News_5::headline>::size_bytes(0)
+ ::sbepp::data_traits<::bovespa_mbo_sbe::schema::messages::News_5::text>::size_bytes(0)
+ ::sbepp::data_traits<::bovespa_mbo_sbe::schema::messages::News_5::uRLLink>::size_bytes(0)
+ total_data_size;
    }

};

template<typename Byte>
struct traits_tag<::bovespa_mbo_sbe::messages::News_5<Byte>>
{
    using type = ::bovespa_mbo_sbe::schema::messages::News_5;
};


}  // namespace sbepp

SBEPP_WARNINGS_ON();
