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

class set_1 : public ::sbepp::detail::bitset_base<::std::uint16_t>
{
public:
    using ::sbepp::detail::bitset_base<::std::uint16_t>::bitset_base;
    using ::sbepp::detail::bitset_base<::std::uint16_t>::operator();

    
    constexpr bool OpeningPrice() const noexcept
    {
        return (*this)(::sbepp::detail::get_bit_tag{}, 0);
    }

    SBEPP_CPP14_CONSTEXPR set_1& OpeningPrice(const bool v) noexcept
    {
        (*this)(::sbepp::detail::set_bit_tag{}, 0, v);
        return *this;
    }

    constexpr bool Crossed() const noexcept
    {
        return (*this)(::sbepp::detail::get_bit_tag{}, 1);
    }

    SBEPP_CPP14_CONSTEXPR set_1& Crossed(const bool v) noexcept
    {
        (*this)(::sbepp::detail::set_bit_tag{}, 1, v);
        return *this;
    }

    constexpr bool LastTradeAtTheSamePrice() const noexcept
    {
        return (*this)(::sbepp::detail::get_bit_tag{}, 2);
    }

    SBEPP_CPP14_CONSTEXPR set_1& LastTradeAtTheSamePrice(const bool v) noexcept
    {
        (*this)(::sbepp::detail::set_bit_tag{}, 2, v);
        return *this;
    }

    constexpr bool OutOfSequence() const noexcept
    {
        return (*this)(::sbepp::detail::get_bit_tag{}, 3);
    }

    SBEPP_CPP14_CONSTEXPR set_1& OutOfSequence(const bool v) noexcept
    {
        (*this)(::sbepp::detail::set_bit_tag{}, 3, v);
        return *this;
    }

    constexpr bool TradeOnBehalf() const noexcept
    {
        return (*this)(::sbepp::detail::get_bit_tag{}, 6);
    }

    SBEPP_CPP14_CONSTEXPR set_1& TradeOnBehalf(const bool v) noexcept
    {
        (*this)(::sbepp::detail::set_bit_tag{}, 6, v);
        return *this;
    }

    constexpr bool RegularTrade() const noexcept
    {
        return (*this)(::sbepp::detail::get_bit_tag{}, 13);
    }

    SBEPP_CPP14_CONSTEXPR set_1& RegularTrade(const bool v) noexcept
    {
        (*this)(::sbepp::detail::set_bit_tag{}, 13, v);
        return *this;
    }

    constexpr bool BlockTrade() const noexcept
    {
        return (*this)(::sbepp::detail::get_bit_tag{}, 14);
    }

    SBEPP_CPP14_CONSTEXPR set_1& BlockTrade(const bool v) noexcept
    {
        (*this)(::sbepp::detail::set_bit_tag{}, 14, v);
        return *this;
    }

    template<typename Visitor>
SBEPP_CPP14_CONSTEXPR Visitor&& operator()(
    ::sbepp::detail::visit_set_tag, Visitor&& visitor) const noexcept
{
    visitor(this->OpeningPrice(), "OpeningPrice");
    visitor(this->Crossed(), "Crossed");
    visitor(this->LastTradeAtTheSamePrice(), "LastTradeAtTheSamePrice");
    visitor(this->OutOfSequence(), "OutOfSequence");
    visitor(this->TradeOnBehalf(), "TradeOnBehalf");
    visitor(this->RegularTrade(), "RegularTrade");
    visitor(this->BlockTrade(), "BlockTrade");
    return std::forward<Visitor>(visitor);
}

    
template<typename Visitor>
SBEPP_CPP14_CONSTEXPR void operator()(
    ::sbepp::detail::visit_tag, Visitor& visitor) const noexcept
{
    visitor.on_set_choice(this->OpeningPrice(), ::bovespa_mbo_sbe::schema::types::TradeCondition::OpeningPrice{});
    visitor.on_set_choice(this->Crossed(), ::bovespa_mbo_sbe::schema::types::TradeCondition::Crossed{});
    visitor.on_set_choice(this->LastTradeAtTheSamePrice(), ::bovespa_mbo_sbe::schema::types::TradeCondition::LastTradeAtTheSamePrice{});
    visitor.on_set_choice(this->OutOfSequence(), ::bovespa_mbo_sbe::schema::types::TradeCondition::OutOfSequence{});
    visitor.on_set_choice(this->TradeOnBehalf(), ::bovespa_mbo_sbe::schema::types::TradeCondition::TradeOnBehalf{});
    visitor.on_set_choice(this->RegularTrade(), ::bovespa_mbo_sbe::schema::types::TradeCondition::RegularTrade{});
    visitor.on_set_choice(this->BlockTrade(), ::bovespa_mbo_sbe::schema::types::TradeCondition::BlockTrade{});
}

};

} // namespace types
} // namespace detail

namespace types
{
using TradeCondition = ::bovespa_mbo_sbe::detail::types::set_1;
} // namespace types
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class set_traits<::bovespa_mbo_sbe::schema::types::TradeCondition>
{
public:
    static constexpr const char* name() noexcept
    {
        return "TradeCondition";
    }

    static constexpr const char* description() noexcept
    {
        return "Set of conditions describing a trade.";
    }

    using encoding_type = ::std::uint16_t;
    
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::TradeCondition;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::types::TradeCondition>
{
    using type = ::bovespa_mbo_sbe::schema::types::TradeCondition;
};


template<>
class set_choice_traits<::bovespa_mbo_sbe::schema::types::TradeCondition::OpeningPrice>
{
public:
    static constexpr const char* name() noexcept
    {
        return "OpeningPrice";
    }

    static constexpr const char* description() noexcept
    {
        return "1=Opening Price (R), 0=Not.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr choice_index_t index() noexcept
    {
        return 0;
    }
};

template<>
class set_choice_traits<::bovespa_mbo_sbe::schema::types::TradeCondition::Crossed>
{
public:
    static constexpr const char* name() noexcept
    {
        return "Crossed";
    }

    static constexpr const char* description() noexcept
    {
        return "1=Crossed (X), 0=Not.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr choice_index_t index() noexcept
    {
        return 1;
    }
};

template<>
class set_choice_traits<::bovespa_mbo_sbe::schema::types::TradeCondition::LastTradeAtTheSamePrice>
{
public:
    static constexpr const char* name() noexcept
    {
        return "LastTradeAtTheSamePrice";
    }

    static constexpr const char* description() noexcept
    {
        return "1=Last Trade at the Same Price (L), 0=Not.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr choice_index_t index() noexcept
    {
        return 2;
    }
};

template<>
class set_choice_traits<::bovespa_mbo_sbe::schema::types::TradeCondition::OutOfSequence>
{
public:
    static constexpr const char* name() noexcept
    {
        return "OutOfSequence";
    }

    static constexpr const char* description() noexcept
    {
        return "1=Out of sequence (Not last trade), 0=Last trade.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr choice_index_t index() noexcept
    {
        return 3;
    }
};

template<>
class set_choice_traits<::bovespa_mbo_sbe::schema::types::TradeCondition::TradeOnBehalf>
{
public:
    static constexpr const char* name() noexcept
    {
        return "TradeOnBehalf";
    }

    static constexpr const char* description() noexcept
    {
        return "1=Marketplace Entered Trade (Trade on behalf) (2), 0=Not.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr choice_index_t index() noexcept
    {
        return 6;
    }
};

template<>
class set_choice_traits<::bovespa_mbo_sbe::schema::types::TradeCondition::RegularTrade>
{
public:
    static constexpr const char* name() noexcept
    {
        return "RegularTrade";
    }

    static constexpr const char* description() noexcept
    {
        return "1=Regular Trade, 0=Special trade type (see TrdSubType enum).";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr choice_index_t index() noexcept
    {
        return 13;
    }
};

template<>
class set_choice_traits<::bovespa_mbo_sbe::schema::types::TradeCondition::BlockTrade>
{
public:
    static constexpr const char* name() noexcept
    {
        return "BlockTrade";
    }

    static constexpr const char* description() noexcept
    {
        return "1=Block Trade (see TrdSubType enum for details), 0=Not.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr choice_index_t index() noexcept
    {
        return 14;
    }
};

}  // namespace sbepp

SBEPP_WARNINGS_ON();
