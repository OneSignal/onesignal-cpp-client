/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.0.2
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOneSignalAPIClient/model/PlayerNotificationTarget.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



PlayerNotificationTarget::PlayerNotificationTarget()
{
    m_Include_player_idsIsSet = false;
    m_Include_external_user_idsIsSet = false;
    m_Include_email_tokensIsSet = false;
    m_Include_phone_numbersIsSet = false;
    m_Include_ios_tokensIsSet = false;
    m_Include_wp_wns_urisIsSet = false;
    m_Include_amazon_reg_idsIsSet = false;
    m_Include_chrome_reg_idsIsSet = false;
    m_Include_chrome_web_reg_idsIsSet = false;
    m_Include_android_reg_idsIsSet = false;
}

PlayerNotificationTarget::~PlayerNotificationTarget()
{
}

void PlayerNotificationTarget::validate()
{
    // TODO: implement validation
}

web::json::value PlayerNotificationTarget::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Include_player_idsIsSet)
    {
        val[utility::conversions::to_string_t(U("include_player_ids"))] = ModelBase::toJson(m_Include_player_ids);
    }
    if(m_Include_external_user_idsIsSet)
    {
        val[utility::conversions::to_string_t(U("include_external_user_ids"))] = ModelBase::toJson(m_Include_external_user_ids);
    }
    if(m_Include_email_tokensIsSet)
    {
        val[utility::conversions::to_string_t(U("include_email_tokens"))] = ModelBase::toJson(m_Include_email_tokens);
    }
    if(m_Include_phone_numbersIsSet)
    {
        val[utility::conversions::to_string_t(U("include_phone_numbers"))] = ModelBase::toJson(m_Include_phone_numbers);
    }
    if(m_Include_ios_tokensIsSet)
    {
        val[utility::conversions::to_string_t(U("include_ios_tokens"))] = ModelBase::toJson(m_Include_ios_tokens);
    }
    if(m_Include_wp_wns_urisIsSet)
    {
        val[utility::conversions::to_string_t(U("include_wp_wns_uris"))] = ModelBase::toJson(m_Include_wp_wns_uris);
    }
    if(m_Include_amazon_reg_idsIsSet)
    {
        val[utility::conversions::to_string_t(U("include_amazon_reg_ids"))] = ModelBase::toJson(m_Include_amazon_reg_ids);
    }
    if(m_Include_chrome_reg_idsIsSet)
    {
        val[utility::conversions::to_string_t(U("include_chrome_reg_ids"))] = ModelBase::toJson(m_Include_chrome_reg_ids);
    }
    if(m_Include_chrome_web_reg_idsIsSet)
    {
        val[utility::conversions::to_string_t(U("include_chrome_web_reg_ids"))] = ModelBase::toJson(m_Include_chrome_web_reg_ids);
    }
    if(m_Include_android_reg_idsIsSet)
    {
        val[utility::conversions::to_string_t(U("include_android_reg_ids"))] = ModelBase::toJson(m_Include_android_reg_ids);
    }

    return val;
}

bool PlayerNotificationTarget::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("include_player_ids"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_player_ids")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludePlayerIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludePlayerIds);
            setIncludePlayerIds(refVal_setIncludePlayerIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_external_user_ids"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_external_user_ids")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeExternalUserIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeExternalUserIds);
            setIncludeExternalUserIds(refVal_setIncludeExternalUserIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_email_tokens"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_email_tokens")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeEmailTokens;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeEmailTokens);
            setIncludeEmailTokens(refVal_setIncludeEmailTokens);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_phone_numbers"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_phone_numbers")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludePhoneNumbers;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludePhoneNumbers);
            setIncludePhoneNumbers(refVal_setIncludePhoneNumbers);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_ios_tokens"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_ios_tokens")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeIosTokens;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeIosTokens);
            setIncludeIosTokens(refVal_setIncludeIosTokens);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_wp_wns_uris"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_wp_wns_uris")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeWpWnsUris;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeWpWnsUris);
            setIncludeWpWnsUris(refVal_setIncludeWpWnsUris);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_amazon_reg_ids"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_amazon_reg_ids")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeAmazonRegIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeAmazonRegIds);
            setIncludeAmazonRegIds(refVal_setIncludeAmazonRegIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_chrome_reg_ids"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_chrome_reg_ids")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeChromeRegIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeChromeRegIds);
            setIncludeChromeRegIds(refVal_setIncludeChromeRegIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_chrome_web_reg_ids"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_chrome_web_reg_ids")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeChromeWebRegIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeChromeWebRegIds);
            setIncludeChromeWebRegIds(refVal_setIncludeChromeWebRegIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_android_reg_ids"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_android_reg_ids")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeAndroidRegIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeAndroidRegIds);
            setIncludeAndroidRegIds(refVal_setIncludeAndroidRegIds);
        }
    }
    return ok;
}

void PlayerNotificationTarget::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Include_player_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_player_ids")), m_Include_player_ids));
    }
    if(m_Include_external_user_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_external_user_ids")), m_Include_external_user_ids));
    }
    if(m_Include_email_tokensIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_email_tokens")), m_Include_email_tokens));
    }
    if(m_Include_phone_numbersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_phone_numbers")), m_Include_phone_numbers));
    }
    if(m_Include_ios_tokensIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_ios_tokens")), m_Include_ios_tokens));
    }
    if(m_Include_wp_wns_urisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_wp_wns_uris")), m_Include_wp_wns_uris));
    }
    if(m_Include_amazon_reg_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_amazon_reg_ids")), m_Include_amazon_reg_ids));
    }
    if(m_Include_chrome_reg_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_chrome_reg_ids")), m_Include_chrome_reg_ids));
    }
    if(m_Include_chrome_web_reg_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_chrome_web_reg_ids")), m_Include_chrome_web_reg_ids));
    }
    if(m_Include_android_reg_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_android_reg_ids")), m_Include_android_reg_ids));
    }
}

bool PlayerNotificationTarget::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("include_player_ids"))))
    {
        std::vector<utility::string_t> refVal_setIncludePlayerIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_player_ids"))), refVal_setIncludePlayerIds );
        setIncludePlayerIds(refVal_setIncludePlayerIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_external_user_ids"))))
    {
        std::vector<utility::string_t> refVal_setIncludeExternalUserIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_external_user_ids"))), refVal_setIncludeExternalUserIds );
        setIncludeExternalUserIds(refVal_setIncludeExternalUserIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_email_tokens"))))
    {
        std::vector<utility::string_t> refVal_setIncludeEmailTokens;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_email_tokens"))), refVal_setIncludeEmailTokens );
        setIncludeEmailTokens(refVal_setIncludeEmailTokens);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_phone_numbers"))))
    {
        std::vector<utility::string_t> refVal_setIncludePhoneNumbers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_phone_numbers"))), refVal_setIncludePhoneNumbers );
        setIncludePhoneNumbers(refVal_setIncludePhoneNumbers);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_ios_tokens"))))
    {
        std::vector<utility::string_t> refVal_setIncludeIosTokens;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_ios_tokens"))), refVal_setIncludeIosTokens );
        setIncludeIosTokens(refVal_setIncludeIosTokens);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_wp_wns_uris"))))
    {
        std::vector<utility::string_t> refVal_setIncludeWpWnsUris;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_wp_wns_uris"))), refVal_setIncludeWpWnsUris );
        setIncludeWpWnsUris(refVal_setIncludeWpWnsUris);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_amazon_reg_ids"))))
    {
        std::vector<utility::string_t> refVal_setIncludeAmazonRegIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_amazon_reg_ids"))), refVal_setIncludeAmazonRegIds );
        setIncludeAmazonRegIds(refVal_setIncludeAmazonRegIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_chrome_reg_ids"))))
    {
        std::vector<utility::string_t> refVal_setIncludeChromeRegIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_chrome_reg_ids"))), refVal_setIncludeChromeRegIds );
        setIncludeChromeRegIds(refVal_setIncludeChromeRegIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_chrome_web_reg_ids"))))
    {
        std::vector<utility::string_t> refVal_setIncludeChromeWebRegIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_chrome_web_reg_ids"))), refVal_setIncludeChromeWebRegIds );
        setIncludeChromeWebRegIds(refVal_setIncludeChromeWebRegIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_android_reg_ids"))))
    {
        std::vector<utility::string_t> refVal_setIncludeAndroidRegIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_android_reg_ids"))), refVal_setIncludeAndroidRegIds );
        setIncludeAndroidRegIds(refVal_setIncludeAndroidRegIds);
    }
    return ok;
}

std::vector<utility::string_t>& PlayerNotificationTarget::getIncludePlayerIds()
{
    return m_Include_player_ids;
}

void PlayerNotificationTarget::setIncludePlayerIds(const std::vector<utility::string_t>& value)
{
    m_Include_player_ids = value;
    m_Include_player_idsIsSet = true;
}

bool PlayerNotificationTarget::includePlayerIdsIsSet() const
{
    return m_Include_player_idsIsSet;
}

void PlayerNotificationTarget::unsetInclude_player_ids()
{
    m_Include_player_idsIsSet = false;
}
std::vector<utility::string_t>& PlayerNotificationTarget::getIncludeExternalUserIds()
{
    return m_Include_external_user_ids;
}

void PlayerNotificationTarget::setIncludeExternalUserIds(const std::vector<utility::string_t>& value)
{
    m_Include_external_user_ids = value;
    m_Include_external_user_idsIsSet = true;
}

bool PlayerNotificationTarget::includeExternalUserIdsIsSet() const
{
    return m_Include_external_user_idsIsSet;
}

void PlayerNotificationTarget::unsetInclude_external_user_ids()
{
    m_Include_external_user_idsIsSet = false;
}
std::vector<utility::string_t>& PlayerNotificationTarget::getIncludeEmailTokens()
{
    return m_Include_email_tokens;
}

void PlayerNotificationTarget::setIncludeEmailTokens(const std::vector<utility::string_t>& value)
{
    m_Include_email_tokens = value;
    m_Include_email_tokensIsSet = true;
}

bool PlayerNotificationTarget::includeEmailTokensIsSet() const
{
    return m_Include_email_tokensIsSet;
}

void PlayerNotificationTarget::unsetInclude_email_tokens()
{
    m_Include_email_tokensIsSet = false;
}
std::vector<utility::string_t>& PlayerNotificationTarget::getIncludePhoneNumbers()
{
    return m_Include_phone_numbers;
}

void PlayerNotificationTarget::setIncludePhoneNumbers(const std::vector<utility::string_t>& value)
{
    m_Include_phone_numbers = value;
    m_Include_phone_numbersIsSet = true;
}

bool PlayerNotificationTarget::includePhoneNumbersIsSet() const
{
    return m_Include_phone_numbersIsSet;
}

void PlayerNotificationTarget::unsetInclude_phone_numbers()
{
    m_Include_phone_numbersIsSet = false;
}
std::vector<utility::string_t>& PlayerNotificationTarget::getIncludeIosTokens()
{
    return m_Include_ios_tokens;
}

void PlayerNotificationTarget::setIncludeIosTokens(const std::vector<utility::string_t>& value)
{
    m_Include_ios_tokens = value;
    m_Include_ios_tokensIsSet = true;
}

bool PlayerNotificationTarget::includeIosTokensIsSet() const
{
    return m_Include_ios_tokensIsSet;
}

void PlayerNotificationTarget::unsetInclude_ios_tokens()
{
    m_Include_ios_tokensIsSet = false;
}
std::vector<utility::string_t>& PlayerNotificationTarget::getIncludeWpWnsUris()
{
    return m_Include_wp_wns_uris;
}

void PlayerNotificationTarget::setIncludeWpWnsUris(const std::vector<utility::string_t>& value)
{
    m_Include_wp_wns_uris = value;
    m_Include_wp_wns_urisIsSet = true;
}

bool PlayerNotificationTarget::includeWpWnsUrisIsSet() const
{
    return m_Include_wp_wns_urisIsSet;
}

void PlayerNotificationTarget::unsetInclude_wp_wns_uris()
{
    m_Include_wp_wns_urisIsSet = false;
}
std::vector<utility::string_t>& PlayerNotificationTarget::getIncludeAmazonRegIds()
{
    return m_Include_amazon_reg_ids;
}

void PlayerNotificationTarget::setIncludeAmazonRegIds(const std::vector<utility::string_t>& value)
{
    m_Include_amazon_reg_ids = value;
    m_Include_amazon_reg_idsIsSet = true;
}

bool PlayerNotificationTarget::includeAmazonRegIdsIsSet() const
{
    return m_Include_amazon_reg_idsIsSet;
}

void PlayerNotificationTarget::unsetInclude_amazon_reg_ids()
{
    m_Include_amazon_reg_idsIsSet = false;
}
std::vector<utility::string_t>& PlayerNotificationTarget::getIncludeChromeRegIds()
{
    return m_Include_chrome_reg_ids;
}

void PlayerNotificationTarget::setIncludeChromeRegIds(const std::vector<utility::string_t>& value)
{
    m_Include_chrome_reg_ids = value;
    m_Include_chrome_reg_idsIsSet = true;
}

bool PlayerNotificationTarget::includeChromeRegIdsIsSet() const
{
    return m_Include_chrome_reg_idsIsSet;
}

void PlayerNotificationTarget::unsetInclude_chrome_reg_ids()
{
    m_Include_chrome_reg_idsIsSet = false;
}
std::vector<utility::string_t>& PlayerNotificationTarget::getIncludeChromeWebRegIds()
{
    return m_Include_chrome_web_reg_ids;
}

void PlayerNotificationTarget::setIncludeChromeWebRegIds(const std::vector<utility::string_t>& value)
{
    m_Include_chrome_web_reg_ids = value;
    m_Include_chrome_web_reg_idsIsSet = true;
}

bool PlayerNotificationTarget::includeChromeWebRegIdsIsSet() const
{
    return m_Include_chrome_web_reg_idsIsSet;
}

void PlayerNotificationTarget::unsetInclude_chrome_web_reg_ids()
{
    m_Include_chrome_web_reg_idsIsSet = false;
}
std::vector<utility::string_t>& PlayerNotificationTarget::getIncludeAndroidRegIds()
{
    return m_Include_android_reg_ids;
}

void PlayerNotificationTarget::setIncludeAndroidRegIds(const std::vector<utility::string_t>& value)
{
    m_Include_android_reg_ids = value;
    m_Include_android_reg_idsIsSet = true;
}

bool PlayerNotificationTarget::includeAndroidRegIdsIsSet() const
{
    return m_Include_android_reg_idsIsSet;
}

void PlayerNotificationTarget::unsetInclude_android_reg_ids()
{
    m_Include_android_reg_idsIsSet = false;
}
}
}
}
}


