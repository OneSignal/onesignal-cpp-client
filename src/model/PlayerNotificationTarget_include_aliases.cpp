/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOneSignalAPIClient/model/PlayerNotificationTarget_include_aliases.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



PlayerNotificationTarget_include_aliases::PlayerNotificationTarget_include_aliases()
{
    m_Alias_labelIsSet = false;
}

PlayerNotificationTarget_include_aliases::~PlayerNotificationTarget_include_aliases()
{
}

void PlayerNotificationTarget_include_aliases::validate()
{
    // TODO: implement validation
}

web::json::value PlayerNotificationTarget_include_aliases::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Alias_labelIsSet)
    {
        val[utility::conversions::to_string_t(U("alias_label"))] = ModelBase::toJson(m_Alias_label);
    }

    return val;
}

bool PlayerNotificationTarget_include_aliases::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("alias_label"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("alias_label")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setAliasLabel;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAliasLabel);
            setAliasLabel(refVal_setAliasLabel);
        }
    }
    return ok;
}

void PlayerNotificationTarget_include_aliases::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Alias_labelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("alias_label")), m_Alias_label));
    }
}

bool PlayerNotificationTarget_include_aliases::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("alias_label"))))
    {
        std::vector<utility::string_t> refVal_setAliasLabel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("alias_label"))), refVal_setAliasLabel );
        setAliasLabel(refVal_setAliasLabel);
    }
    return ok;
}

std::vector<utility::string_t>& PlayerNotificationTarget_include_aliases::getAliasLabel()
{
    return m_Alias_label;
}

void PlayerNotificationTarget_include_aliases::setAliasLabel(const std::vector<utility::string_t>& value)
{
    m_Alias_label = value;
    m_Alias_labelIsSet = true;
}

bool PlayerNotificationTarget_include_aliases::aliasLabelIsSet() const
{
    return m_Alias_labelIsSet;
}

void PlayerNotificationTarget_include_aliases::unsetAlias_label()
{
    m_Alias_labelIsSet = false;
}
}
}
}
}


