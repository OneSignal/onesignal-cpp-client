/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOneSignalAPIClient/model/User_subscription_options.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



User_subscription_options::User_subscription_options()
{
    m_Retain_previous_owner = false;
    m_Retain_previous_ownerIsSet = false;
}

User_subscription_options::~User_subscription_options()
{
}

void User_subscription_options::validate()
{
    // TODO: implement validation
}

web::json::value User_subscription_options::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Retain_previous_ownerIsSet)
    {
        val[utility::conversions::to_string_t(U("retain_previous_owner"))] = ModelBase::toJson(m_Retain_previous_owner);
    }

    return val;
}

bool User_subscription_options::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("retain_previous_owner"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("retain_previous_owner")));
        if(!fieldValue.is_null())
        {
            bool refVal_setRetainPreviousOwner;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRetainPreviousOwner);
            setRetainPreviousOwner(refVal_setRetainPreviousOwner);
        }
    }
    return ok;
}

void User_subscription_options::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Retain_previous_ownerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("retain_previous_owner")), m_Retain_previous_owner));
    }
}

bool User_subscription_options::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("retain_previous_owner"))))
    {
        bool refVal_setRetainPreviousOwner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("retain_previous_owner"))), refVal_setRetainPreviousOwner );
        setRetainPreviousOwner(refVal_setRetainPreviousOwner);
    }
    return ok;
}

bool User_subscription_options::isRetainPreviousOwner() const
{
    return m_Retain_previous_owner;
}

void User_subscription_options::setRetainPreviousOwner(bool value)
{
    m_Retain_previous_owner = value;
    m_Retain_previous_ownerIsSet = true;
}

bool User_subscription_options::retainPreviousOwnerIsSet() const
{
    return m_Retain_previous_ownerIsSet;
}

void User_subscription_options::unsetRetain_previous_owner()
{
    m_Retain_previous_ownerIsSet = false;
}
}
}
}
}


