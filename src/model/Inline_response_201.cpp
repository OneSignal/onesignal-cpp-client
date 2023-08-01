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



#include "CppRestOneSignalAPIClient/model/Inline_response_201.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



Inline_response_201::Inline_response_201()
{
    m_SubscriptionIsSet = false;
}

Inline_response_201::~Inline_response_201()
{
}

void Inline_response_201::validate()
{
    // TODO: implement validation
}

web::json::value Inline_response_201::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SubscriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("subscription"))] = ModelBase::toJson(m_Subscription);
    }

    return val;
}

bool Inline_response_201::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("subscription"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subscription")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SubscriptionObject> refVal_setSubscription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubscription);
            setSubscription(refVal_setSubscription);
        }
    }
    return ok;
}

void Inline_response_201::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_SubscriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscription")), m_Subscription));
    }
}

bool Inline_response_201::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("subscription"))))
    {
        std::shared_ptr<SubscriptionObject> refVal_setSubscription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscription"))), refVal_setSubscription );
        setSubscription(refVal_setSubscription);
    }
    return ok;
}

std::shared_ptr<SubscriptionObject> Inline_response_201::getSubscription() const
{
    return m_Subscription;
}

void Inline_response_201::setSubscription(const std::shared_ptr<SubscriptionObject>& value)
{
    m_Subscription = value;
    m_SubscriptionIsSet = true;
}

bool Inline_response_201::subscriptionIsSet() const
{
    return m_SubscriptionIsSet;
}

void Inline_response_201::unsetSubscription()
{
    m_SubscriptionIsSet = false;
}
}
}
}
}


