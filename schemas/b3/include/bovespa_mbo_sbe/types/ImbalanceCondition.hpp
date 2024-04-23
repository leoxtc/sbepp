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

class set_3 : public ::sbepp::detail::bitset_base<::std::uint16_t>
{
public:
    using ::sbepp::detail::bitset_base<::std::uint16_t>::bitset_base;
    using ::sbepp::detail::bitset_base<::std::uint16_t>::operator();

    
    constexpr bool ImbalanceMoreBuyers() const noexcept
    {
        return (*this)(::sbepp::detail::get_bit_tag{}, 8);
    }

    SBEPP_CPP14_CONSTEXPR set_3& ImbalanceMoreBuyers(const bool v) noexcept
    {
        (*this)(::sbepp::detail::set_bit_tag{}, 8, v);
        return *this;
    }

    constexpr bool ImbalanceMoreSellers() const noexcept
    {
        return (*this)(::sbepp::detail::get_bit_tag{}, 9);
    }

    SBEPP_CPP14_CONSTEXPR set_3& ImbalanceMoreSellers(const bool v) noexcept
    {
        (*this)(::sbepp::detail::set_bit_tag{}, 9, v);
        return *this;
    }

    template<typename Visitor>
SBEPP_CPP14_CONSTEXPR Visitor&& operator()(
    ::sbepp::detail::visit_set_tag, Visitor&& visitor) const noexcept
{
    visitor(this->ImbalanceMoreBuyers(), "ImbalanceMoreBuyers");
    visitor(this->ImbalanceMoreSellers(), "ImbalanceMoreSellers");
    return std::forward<Visitor>(visitor);
}

    
template<typename Visitor>
SBEPP_CPP14_CONSTEXPR void operator()(
    ::sbepp::detail::visit_tag, Visitor& visitor) const noexcept
{
    visitor.on_set_choice(this->ImbalanceMoreBuyers(), ::bovespa_mbo_sbe::schema::types::ImbalanceCondition::ImbalanceMoreBuyers{});
    visitor.on_set_choice(this->ImbalanceMoreSellers(), ::bovespa_mbo_sbe::schema::types::ImbalanceCondition::ImbalanceMoreSellers{});
}

};

} // namespace types
} // namespace detail

namespace types
{
using ImbalanceCondition = ::bovespa_mbo_sbe::detail::types::set_3;
} // namespace types
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class set_traits<::bovespa_mbo_sbe::schema::types::ImbalanceCondition>
{
public:
    static constexpr const char* name() noexcept
    {
        return "ImbalanceCondition";
    }

    static constexpr const char* description() noexcept
    {
        return "Set of conditions describing an imbalance.";
    }

    using encoding_type = ::std::uint16_t;
    
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::ImbalanceCondition;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::types::ImbalanceCondition>
{
    using type = ::bovespa_mbo_sbe::schema::types::ImbalanceCondition;
};


template<>
class set_choice_traits<::bovespa_mbo_sbe::schema::types::ImbalanceCondition::ImbalanceMoreBuyers>
{
public:
    static constexpr const char* name() noexcept
    {
        return "ImbalanceMoreBuyers";
    }

    static constexpr const char* description() noexcept
    {
        return "1=Imbalance more buyers (P), 0=Not.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr choice_index_t index() noexcept
    {
        return 8;
    }
};

template<>
class set_choice_traits<::bovespa_mbo_sbe::schema::types::ImbalanceCondition::ImbalanceMoreSellers>
{
public:
    static constexpr const char* name() noexcept
    {
        return "ImbalanceMoreSellers";
    }

    static constexpr const char* description() noexcept
    {
        return "1=Imbalance more sellers (Q), 0=Not.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr choice_index_t index() noexcept
    {
        return 9;
    }
};

}  // namespace sbepp

SBEPP_WARNINGS_ON();