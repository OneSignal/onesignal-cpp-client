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



#include "CppRestOneSignalAPIClient/model/Notification200Errors.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



Notification200Errors::Notification200Errors()
{
    m_Invalid_external_user_idsIsSet = false;
    m_Invalid_player_idsIsSet = false;
}

Notification200Errors::~Notification200Errors()
{
}

void Notification200Errors::validate()
{
    // TODO: implement validation
}

web::json::value Notification200Errors::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Invalid_external_user_idsIsSet)
    {
        val[utility::conversions::to_string_t(U("invalid_external_user_ids"))] = ModelBase::toJson(m_Invalid_external_user_ids);
    }
    if(m_Invalid_player_idsIsSet)
    {
        val[utility::conversions::to_string_t(U("invalid_player_ids"))] = ModelBase::toJson(m_Invalid_player_ids);
    }

    return val;
}

bool Notification200Errors::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("invalid_external_user_ids"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("invalid_external_user_ids")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setInvalidExternalUserIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInvalidExternalUserIds);
            setInvalidExternalUserIds(refVal_setInvalidExternalUserIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("invalid_player_ids"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("invalid_player_ids")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setInvalidPlayerIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInvalidPlayerIds);
            setInvalidPlayerIds(refVal_setInvalidPlayerIds);
        }
    }
    return ok;
}

void Notification200Errors::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Invalid_external_user_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("invalid_external_user_ids")), m_Invalid_external_user_ids));
    }
    if(m_Invalid_player_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("invalid_player_ids")), m_Invalid_player_ids));
    }
}

bool Notification200Errors::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("invalid_external_user_ids"))))
    {
        std::vector<utility::string_t> refVal_setInvalidExternalUserIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("invalid_external_user_ids"))), refVal_setInvalidExternalUserIds );
        setInvalidExternalUserIds(refVal_setInvalidExternalUserIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("invalid_player_ids"))))
    {
        std::vector<utility::string_t> refVal_setInvalidPlayerIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("invalid_player_ids"))), refVal_setInvalidPlayerIds );
        setInvalidPlayerIds(refVal_setInvalidPlayerIds);
    }
    return ok;
}

std::vector<utility::string_t>& Notification200Errors::getInvalidExternalUserIds()
{
    return m_Invalid_external_user_ids;
}

void Notification200Errors::setInvalidExternalUserIds(const std::vector<utility::string_t>& value)
{
    m_Invalid_external_user_ids = value;
    m_Invalid_external_user_idsIsSet = true;
}

bool Notification200Errors::invalidExternalUserIdsIsSet() const
{
    return m_Invalid_external_user_idsIsSet;
}

void Notification200Errors::unsetInvalid_external_user_ids()
{
    m_Invalid_external_user_idsIsSet = false;
}
std::vector<utility::string_t>& Notification200Errors::getInvalidPlayerIds()
{
    return m_Invalid_player_ids;
}

void Notification200Errors::setInvalidPlayerIds(const std::vector<utility::string_t>& value)
{
    m_Invalid_player_ids = value;
    m_Invalid_player_idsIsSet = true;
}

bool Notification200Errors::invalidPlayerIdsIsSet() const
{
    return m_Invalid_player_idsIsSet;
}

void Notification200Errors::unsetInvalid_player_ids()
{
    m_Invalid_player_idsIsSet = false;
}
}
}
}
}


