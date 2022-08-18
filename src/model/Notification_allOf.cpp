/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.0.1
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOneSignalAPIClient/model/Notification_allOf.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



Notification_allOf::Notification_allOf()
{
    m_Send_after = utility::datetime();
    m_Send_afterIsSet = false;
}

Notification_allOf::~Notification_allOf()
{
}

void Notification_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Notification_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Send_afterIsSet)
    {
        val[utility::conversions::to_string_t(U("send_after"))] = ModelBase::toJson(m_Send_after);
    }

    return val;
}

bool Notification_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("send_after"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("send_after")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setSendAfter;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSendAfter);
            setSendAfter(refVal_setSendAfter);
        }
    }
    return ok;
}

void Notification_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Send_afterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("send_after")), m_Send_after));
    }
}

bool Notification_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("send_after"))))
    {
        utility::datetime refVal_setSendAfter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("send_after"))), refVal_setSendAfter );
        setSendAfter(refVal_setSendAfter);
    }
    return ok;
}

utility::datetime Notification_allOf::getSendAfter() const
{
    return m_Send_after;
}

void Notification_allOf::setSendAfter(const utility::datetime& value)
{
    m_Send_after = value;
    m_Send_afterIsSet = true;
}

bool Notification_allOf::sendAfterIsSet() const
{
    return m_Send_afterIsSet;
}

void Notification_allOf::unsetSend_after()
{
    m_Send_afterIsSet = false;
}
}
}
}
}


