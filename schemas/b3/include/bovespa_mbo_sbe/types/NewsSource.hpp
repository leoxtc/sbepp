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

enum class enum_32 : ::std::uint8_t
{
    OTHER = 0,
    DCM = 1,
    BBMNET = 2,
    MARKET_SURVEILLANCE = 3,
    INTERNET = 4,
    DPR_VE = 5,
    MKT_OPS_FX_AGENCY = 19,
    MKT_OPS_DERIVATIVES_AGENCY = 20,
    OVER_THE_COUNTER_NEWS_AGENCY = 11,
    ELECTRONIC_PURCHASE_EXCHANGE = 13,
    CBLC_NEWS_AGENCY = 14,
    BOVESPA_INDEX_AGENCY = 15,
    BOVESPA_INSTITUTIONAL_AGENCY = 16,
    MKT_OPS_EQUITIES_AGENCY = 17,
    BOVESPA_COMPANIES_AGENCY = 18
};

template<typename Visitor>
SBEPP_CPP14_CONSTEXPR void tag_invoke(
    ::sbepp::detail::visit_tag, enum_32 e, Visitor& visitor) noexcept
{
    switch(e)
    {
    case enum_32::OTHER:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::OTHER{});
        break;
    case enum_32::DCM:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::DCM{});
        break;
    case enum_32::BBMNET:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::BBMNET{});
        break;
    case enum_32::MARKET_SURVEILLANCE:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::MARKET_SURVEILLANCE{});
        break;
    case enum_32::INTERNET:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::INTERNET{});
        break;
    case enum_32::DPR_VE:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::DPR_VE{});
        break;
    case enum_32::MKT_OPS_FX_AGENCY:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::MKT_OPS_FX_AGENCY{});
        break;
    case enum_32::MKT_OPS_DERIVATIVES_AGENCY:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::MKT_OPS_DERIVATIVES_AGENCY{});
        break;
    case enum_32::OVER_THE_COUNTER_NEWS_AGENCY:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::OVER_THE_COUNTER_NEWS_AGENCY{});
        break;
    case enum_32::ELECTRONIC_PURCHASE_EXCHANGE:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::ELECTRONIC_PURCHASE_EXCHANGE{});
        break;
    case enum_32::CBLC_NEWS_AGENCY:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::CBLC_NEWS_AGENCY{});
        break;
    case enum_32::BOVESPA_INDEX_AGENCY:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::BOVESPA_INDEX_AGENCY{});
        break;
    case enum_32::BOVESPA_INSTITUTIONAL_AGENCY:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::BOVESPA_INSTITUTIONAL_AGENCY{});
        break;
    case enum_32::MKT_OPS_EQUITIES_AGENCY:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::MKT_OPS_EQUITIES_AGENCY{});
        break;
    case enum_32::BOVESPA_COMPANIES_AGENCY:
        visitor.on_enum_value(e, ::bovespa_mbo_sbe::schema::types::NewsSource::BOVESPA_COMPANIES_AGENCY{});
        break;
    default:
        visitor.on_enum_value(e, ::sbepp::unknown_enum_value_tag{});
    }
}


} // namespace types
} // namespace detail

namespace types
{
using NewsSource = ::bovespa_mbo_sbe::detail::types::enum_32;
} // namespace types
} // namespace bovespa_mbo_sbe

namespace sbepp
{

template<>
class enum_traits<::bovespa_mbo_sbe::schema::types::NewsSource>
{
public:
    static constexpr const char* name() noexcept
    {
        return "NewsSource";
    }

    static constexpr const char* description() noexcept
    {
        return "Source for the news.";
    }

    using encoding_type = ::std::uint8_t;
    
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    
    using value_type = ::bovespa_mbo_sbe::types::NewsSource;
};

template<>
struct traits_tag<::bovespa_mbo_sbe::types::NewsSource>
{
    using type = ::bovespa_mbo_sbe::schema::types::NewsSource;
};


template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::OTHER>
{
public:
    static constexpr const char* name() noexcept
    {
        return "OTHER";
    }

    static constexpr const char* description() noexcept
    {
        return "Other news source.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::OTHER;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::DCM>
{
public:
    static constexpr const char* name() noexcept
    {
        return "DCM";
    }

    static constexpr const char* description() noexcept
    {
        return "DCM.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::DCM;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::BBMNET>
{
public:
    static constexpr const char* name() noexcept
    {
        return "BBMNET";
    }

    static constexpr const char* description() noexcept
    {
        return "BBMNet.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::BBMNET;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::MARKET_SURVEILLANCE>
{
public:
    static constexpr const char* name() noexcept
    {
        return "MARKET_SURVEILLANCE";
    }

    static constexpr const char* description() noexcept
    {
        return "MarketSurveillance.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::MARKET_SURVEILLANCE;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::INTERNET>
{
public:
    static constexpr const char* name() noexcept
    {
        return "INTERNET";
    }

    static constexpr const char* description() noexcept
    {
        return "Internet.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::INTERNET;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::DPR_VE>
{
public:
    static constexpr const char* name() noexcept
    {
        return "DPR_VE";
    }

    static constexpr const char* description() noexcept
    {
        return "DPR-VE.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::DPR_VE;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::MKT_OPS_FX_AGENCY>
{
public:
    static constexpr const char* name() noexcept
    {
        return "MKT_OPS_FX_AGENCY";
    }

    static constexpr const char* description() noexcept
    {
        return "Mkt Ops FX Agency.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::MKT_OPS_FX_AGENCY;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::MKT_OPS_DERIVATIVES_AGENCY>
{
public:
    static constexpr const char* name() noexcept
    {
        return "MKT_OPS_DERIVATIVES_AGENCY";
    }

    static constexpr const char* description() noexcept
    {
        return "Mkt Ops Derivatives Agency.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::MKT_OPS_DERIVATIVES_AGENCY;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::OVER_THE_COUNTER_NEWS_AGENCY>
{
public:
    static constexpr const char* name() noexcept
    {
        return "OVER_THE_COUNTER_NEWS_AGENCY";
    }

    static constexpr const char* description() noexcept
    {
        return "Over-the-counter News Agency.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::OVER_THE_COUNTER_NEWS_AGENCY;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::ELECTRONIC_PURCHASE_EXCHANGE>
{
public:
    static constexpr const char* name() noexcept
    {
        return "ELECTRONIC_PURCHASE_EXCHANGE";
    }

    static constexpr const char* description() noexcept
    {
        return "Electronic Purchase Exchange.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::ELECTRONIC_PURCHASE_EXCHANGE;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::CBLC_NEWS_AGENCY>
{
public:
    static constexpr const char* name() noexcept
    {
        return "CBLC_NEWS_AGENCY";
    }

    static constexpr const char* description() noexcept
    {
        return "CBLC News Agency.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::CBLC_NEWS_AGENCY;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::BOVESPA_INDEX_AGENCY>
{
public:
    static constexpr const char* name() noexcept
    {
        return "BOVESPA_INDEX_AGENCY";
    }

    static constexpr const char* description() noexcept
    {
        return "BOVESPA – Index Agency.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::BOVESPA_INDEX_AGENCY;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::BOVESPA_INSTITUTIONAL_AGENCY>
{
public:
    static constexpr const char* name() noexcept
    {
        return "BOVESPA_INSTITUTIONAL_AGENCY";
    }

    static constexpr const char* description() noexcept
    {
        return "BOVESPA – Institutional Agency.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::BOVESPA_INSTITUTIONAL_AGENCY;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::MKT_OPS_EQUITIES_AGENCY>
{
public:
    static constexpr const char* name() noexcept
    {
        return "MKT_OPS_EQUITIES_AGENCY";
    }

    static constexpr const char* description() noexcept
    {
        return "Mkt Ops Equities Agency.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::MKT_OPS_EQUITIES_AGENCY;
    }
};

template<>
class enum_value_traits<::bovespa_mbo_sbe::schema::types::NewsSource::BOVESPA_COMPANIES_AGENCY>
{
public:
    static constexpr const char* name() noexcept
    {
        return "BOVESPA_COMPANIES_AGENCY";
    }

    static constexpr const char* description() noexcept
    {
        return "BOVESPA – Companies Agency.";
    }
    
    static constexpr version_t since_version() noexcept
    {
        return 0;
    }

    

    static constexpr ::bovespa_mbo_sbe::types::NewsSource value() noexcept
    {
        return ::bovespa_mbo_sbe::types::NewsSource::BOVESPA_COMPANIES_AGENCY;
    }
};

}  // namespace sbepp

SBEPP_WARNINGS_ON();