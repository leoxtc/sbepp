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


class type_87
    : public ::sbepp::detail::required_base<::std::uint16_t, type_87>
{
public:
    using ::sbepp::detail::required_base<
        ::std::uint16_t, type_87>::required_base;

    static constexpr value_type min_value() noexcept
    {
        return {0};
    }

    static constexpr value_type max_value() noexcept
    {
        return {65534};
    }
};

class type_88
    : public ::sbepp::detail::required_base<::std::uint8_t, type_88>
{
public:
    using ::sbepp::detail::required_base<
        ::std::uint8_t, type_88>::required_base;

    static constexpr value_type min_value() noexcept
    {
        return {0};
    }

    static constexpr value_type max_value() noexcept
    {
        return {254};
    }
};


template<typename Byte>
class composite_16 : public ::sbepp::detail::composite_base<Byte>
{
public:
    using ::sbepp::detail::composite_base<Byte>::composite_base;
    using ::sbepp::detail::composite_base<Byte>::operator();

    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::detail::types::type_87 blockLength() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::detail::types::type_87, ::bovespa_mbo_sbe::detail::types::type_87::value_type, ::sbepp::endian::little>(*this, 0);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void blockLength(::bovespa_mbo_sbe::detail::types::type_87 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 0, v.value());
    }
    SBEPP_CPP20_CONSTEXPR ::bovespa_mbo_sbe::detail::types::type_88 numInGroup() const noexcept
    {
        return ::sbepp::detail::get_value<
            ::bovespa_mbo_sbe::detail::types::type_88, ::bovespa_mbo_sbe::detail::types::type_88::value_type, ::sbepp::endian::little>(*this, 2);
    }

    template<
        typename T = void,
        typename = ::sbepp::detail::enable_if_writable_t<Byte, T>>
    SBEPP_CPP20_CONSTEXPR void numInGroup(::bovespa_mbo_sbe::detail::types::type_88 v) const noexcept
    {
        ::sbepp::detail::set_value<::sbepp::endian::little>(*this, 2, v.value());
    }


    constexpr std::size_t
        operator()(::sbepp::detail::size_bytes_tag) const noexcept
    {
        return 3;
    }

    template<typename Visitor, typename Cursor>
    constexpr bool operator()(
        ::sbepp::detail::visit_tag, Visitor& v, Cursor&) const
    {
        return v.template on_composite(*this, ::bovespa_mbo_sbe::schema::types::GroupSizeEncoding{});
    }


    template<typename Visitor, typename Cursor>
    constexpr bool operator()(
        ::sbepp::detail::visit_children_tag, Visitor& v, Cursor&) const
    {
        return v.template on_type(this->blockLength(), ::bovespa_mbo_sbe::schema::types::GroupSizeEncoding::blockLength{})
||v.template on_type(this->numInGroup(), ::bovespa_mbo_sbe::schema::types::GroupSizeEncoding::numInGroup{});
    }

};

} // namespace types
} // namespace detail

namespace types
{

    template<typename Byte>
    using GroupSizeEncoding = ::bovespa_mbo_sbe::detail::types::composite_16<Byte>;

} // namespace types
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class type_traits<::bovespa_mbo_sbe::schema::types::GroupSizeEncoding::blockLength>
{
public:
    static constexpr const char* name() noexcept
    {
        return "blockLength";
    }

    static constexpr const char* description() noexcept
    {
        return "Root block length.";
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

    
    using value_type = ::bovespa_mbo_sbe::detail::types::type_87;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::detail::types::type_87>
{
    using type = ::bovespa_mbo_sbe::schema::types::GroupSizeEncoding::blockLength;
};


template<>
class type_traits<::bovespa_mbo_sbe::schema::types::GroupSizeEncoding::numInGroup>
{
public:
    static constexpr const char* name() noexcept
    {
        return "numInGroup";
    }

    static constexpr const char* description() noexcept
    {
        return "A counter representing the number of entries in a repeating group.";
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
        return {2};
    }

    
    static constexpr const char* semantic_type() noexcept
    {
        return "NumInGroup";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    static constexpr const char* character_encoding() noexcept
    {
        return "";
    }

    
    using value_type = ::bovespa_mbo_sbe::detail::types::type_88;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::detail::types::type_88>
{
    using type = ::bovespa_mbo_sbe::schema::types::GroupSizeEncoding::numInGroup;
};


template<>
class composite_traits<::bovespa_mbo_sbe::schema::types::GroupSizeEncoding>
{
public:
    static constexpr const char* name() noexcept
    {
        return "GroupSizeEncoding";
    }

    static constexpr const char* description() noexcept
    {
        return "Repeating group dimensions.";
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
    using value_type = ::bovespa_mbo_sbe::types::GroupSizeEncoding<Byte>;


    static constexpr std::size_t size_bytes() noexcept
    {
        return 3;
    }
};

template<typename Byte>
struct traits_tag<::bovespa_mbo_sbe::types::GroupSizeEncoding<Byte>>
{
    using type = ::bovespa_mbo_sbe::schema::types::GroupSizeEncoding;
};


}  // namespace sbepp

SBEPP_WARNINGS_ON();
