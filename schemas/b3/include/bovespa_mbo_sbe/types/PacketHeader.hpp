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


class type_38
    : public ::sbepp::detail::required_base<::std::uint8_t, type_38>
{
public:
    using ::sbepp::detail::required_base<
        ::std::uint8_t, type_38>::required_base;

    static constexpr value_type min_value() noexcept
    {
        return {0};
    }

    static constexpr value_type max_value() noexcept
    {
        return {254};
    }
};

class type_39
    : public ::sbepp::detail::required_base<::std::uint8_t, type_39>
{
public:
    using ::sbepp::detail::required_base<
        ::std::uint8_t, type_39>::required_base;

    static constexpr value_type min_value() noexcept
    {
        return {0};
    }

    static constexpr value_type max_value() noexcept
    {
        return {254};
    }
};

class type_40
    : public ::sbepp::detail::required_base<::std::uint16_t, type_40>
{
public:
    using ::sbepp::detail::required_base<
        ::std::uint16_t, type_40>::required_base;

    static constexpr value_type min_value() noexcept
    {
        return {0};
    }

    static constexpr value_type max_value() noexcept
    {
        return {65534};
    }
};

class type_41
    : public ::sbepp::detail::required_base<::std::uint32_t, type_41>
{
public:
    using ::sbepp::detail::required_base<
        ::std::uint32_t, type_41>::required_base;

    static constexpr value_type min_value() noexcept
    {
        return {0};
    }

    static constexpr value_type max_value() noexcept
    {
        return {4294967294};
    }
};

class type_42
    : public ::sbepp::detail::required_base<::std::uint64_t, type_42>
{
public:
    using ::sbepp::detail::required_base<
        ::std::uint64_t, type_42>::required_base;

    static constexpr value_type min_value() noexcept
    {
        return {0};
    }

    static constexpr value_type max_value() noexcept
    {
        return {18446744073709551614UL};
    }
};


template<typename Byte>
class composite_3 : public ::sbepp::detail::composite_base<Byte>
{
public:
    using ::sbepp::detail::composite_base<Byte>::composite_base;
    using ::sbepp::detail::composite_base<Byte>::operator();

    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::detail::types::type_38 channelNumber() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::detail::types::type_38, ::bovespa_mbo_sbe::detail::types::type_38::value_type, ::sbepp::endian::little>(*this, 0);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void channelNumber(::bovespa_mbo_sbe::detail::types::type_38 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 0, v.value());
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::detail::types::type_39 reserved() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::detail::types::type_39, ::bovespa_mbo_sbe::detail::types::type_39::value_type, ::sbepp::endian::little>(*this, 1);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void reserved(::bovespa_mbo_sbe::detail::types::type_39 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 1, v.value());
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::detail::types::type_40 sequenceVersion() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::detail::types::type_40, ::bovespa_mbo_sbe::detail::types::type_40::value_type, ::sbepp::endian::little>(*this, 2);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void sequenceVersion(::bovespa_mbo_sbe::detail::types::type_40 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 2, v.value());
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::detail::types::type_41 sequenceNumber() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::detail::types::type_41, ::bovespa_mbo_sbe::detail::types::type_41::value_type, ::sbepp::endian::little>(*this, 4);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void sequenceNumber(::bovespa_mbo_sbe::detail::types::type_41 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 4, v.value());
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::detail::types::type_42 sendingTime() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::detail::types::type_42, ::bovespa_mbo_sbe::detail::types::type_42::value_type, ::sbepp::endian::little>(*this, 8);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void sendingTime(::bovespa_mbo_sbe::detail::types::type_42 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 8, v.value());
    }


    constexpr std::size_t
        operator()(::sbepp::detail::size_bytes_tag) const noexcept
    {
        return 16;
    }

    template<typename Visitor, typename Cursor>
    constexpr bool operator()(
        ::sbepp::detail::visit_tag, Visitor& v, Cursor&) const
    {
        return v.template on_composite(*this, ::bovespa_mbo_sbe::schema::types::PacketHeader{});
    }


    template<typename Visitor, typename Cursor>
    constexpr bool operator()(
        ::sbepp::detail::visit_children_tag, Visitor& v, Cursor&) const
    {
        return v.template on_type(this->channelNumber(), ::bovespa_mbo_sbe::schema::types::PacketHeader::channelNumber{})
||v.template on_type(this->reserved(), ::bovespa_mbo_sbe::schema::types::PacketHeader::reserved{})
||v.template on_type(this->sequenceVersion(), ::bovespa_mbo_sbe::schema::types::PacketHeader::sequenceVersion{})
||v.template on_type(this->sequenceNumber(), ::bovespa_mbo_sbe::schema::types::PacketHeader::sequenceNumber{})
||v.template on_type(this->sendingTime(), ::bovespa_mbo_sbe::schema::types::PacketHeader::sendingTime{});
    }

};

} // namespace types
} // namespace detail

namespace types
{

    template<typename Byte>
    using PacketHeader = ::bovespa_mbo_sbe::detail::types::composite_3<Byte>;

} // namespace types
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class type_traits<::bovespa_mbo_sbe::schema::types::PacketHeader::channelNumber>
{
public:
    static constexpr const char* name() noexcept
    {
        return "channelNumber";
    }

    static constexpr const char* description() noexcept
    {
        return "Channel number.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }

    using primitive_type = ::std::uint8_t;
    
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
    
    static constexpr offset_t offset() noexcept
    {
        return {0};
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

    
    using value_type = ::bovespa_mbo_sbe::detail::types::type_38;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::detail::types::type_38>
{
    using type = ::bovespa_mbo_sbe::schema::types::PacketHeader::channelNumber;
};


template<>
class type_traits<::bovespa_mbo_sbe::schema::types::PacketHeader::reserved>
{
public:
    static constexpr const char* name() noexcept
    {
        return "reserved";
    }

    static constexpr const char* description() noexcept
    {
        return "Reserved.";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }

    using primitive_type = ::std::uint8_t;
    
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
    
    static constexpr offset_t offset() noexcept
    {
        return {1};
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

    
    using value_type = ::bovespa_mbo_sbe::detail::types::type_39;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::detail::types::type_39>
{
    using type = ::bovespa_mbo_sbe::schema::types::PacketHeader::reserved;
};


template<>
class type_traits<::bovespa_mbo_sbe::schema::types::PacketHeader::sequenceVersion>
{
public:
    static constexpr const char* name() noexcept
    {
        return "sequenceVersion";
    }

    static constexpr const char* description() noexcept
    {
        return "Sequence version (incremented weekly or when market data engine failover happens).";
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
    
    static constexpr offset_t offset() noexcept
    {
        return {2};
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

    
    using value_type = ::bovespa_mbo_sbe::detail::types::type_40;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::detail::types::type_40>
{
    using type = ::bovespa_mbo_sbe::schema::types::PacketHeader::sequenceVersion;
};


template<>
class type_traits<::bovespa_mbo_sbe::schema::types::PacketHeader::sequenceNumber>
{
public:
    static constexpr const char* name() noexcept
    {
        return "sequenceNumber";
    }

    static constexpr const char* description() noexcept
    {
        return "Packet sequence number (reset to 1 when sequenceVersion increments).";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
    }

    using primitive_type = ::std::uint32_t;
    
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
    
    static constexpr offset_t offset() noexcept
    {
        return {4};
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

    
    using value_type = ::bovespa_mbo_sbe::detail::types::type_41;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::detail::types::type_41>
{
    using type = ::bovespa_mbo_sbe::schema::types::PacketHeader::sequenceNumber;
};


template<>
class type_traits<::bovespa_mbo_sbe::schema::types::PacketHeader::sendingTime>
{
public:
    static constexpr const char* name() noexcept
    {
        return "sendingTime";
    }

    static constexpr const char* description() noexcept
    {
        return "Sending Time as number of nanoseconds since epoch (1970-01-01 00:00:00 UTC).";
    }

    static constexpr field_presence presence() noexcept
    {
        return ::sbepp::field_presence::required;
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

    
    static constexpr length_t length() noexcept
    {
        return 1;
    }
    
    static constexpr offset_t offset() noexcept
    {
        return {8};
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

    
    using value_type = ::bovespa_mbo_sbe::detail::types::type_42;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::detail::types::type_42>
{
    using type = ::bovespa_mbo_sbe::schema::types::PacketHeader::sendingTime;
};


template<>
class composite_traits<::bovespa_mbo_sbe::schema::types::PacketHeader>
{
public:
    static constexpr const char* name() noexcept
    {
        return "PacketHeader";
    }

    static constexpr const char* description() noexcept
    {
        return "Packet header.";
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
    using value_type = ::bovespa_mbo_sbe::types::PacketHeader<Byte>;


    static constexpr std::size_t size_bytes() noexcept
    {
        return 16;
    }
};

template<typename Byte>
struct traits_tag<::bovespa_mbo_sbe::types::PacketHeader<Byte>>
{
    using type = ::bovespa_mbo_sbe::schema::types::PacketHeader;
};


}  // namespace sbepp

SBEPP_WARNINGS_ON();
