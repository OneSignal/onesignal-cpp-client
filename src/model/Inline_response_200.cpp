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



#include "CppRestOneSignalAPIClient/model/Inline_response_200.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



Inline_response_200::Inline_response_200()
{
    m_IdentityIsSet = false;
}

Inline_response_200::~Inline_response_200()
{
}

void Inline_response_200::validate()
{
    // TODO: implement validation
}

web::json::value Inline_response_200::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdentityIsSet)
    {
        val[utility::conversions::to_string_t(U("identity"))] = ModelBase::toJson(m_Identity);
    }

    return val;
}

bool Inline_response_200::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("identity"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("identity")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_setIdentity;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIdentity);
            setIdentity(refVal_setIdentity);
        }
    }
    return ok;
}

void Inline_response_200::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdentityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("identity")), m_Identity));
    }
}

bool Inline_response_200::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("identity"))))
    {
        std::map<utility::string_t, utility::string_t> refVal_setIdentity;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("identity"))), refVal_setIdentity );
        setIdentity(refVal_setIdentity);
    }
    return ok;
}

std::map<utility::string_t, utility::string_t>& Inline_response_200::getIdentity()
{
    return m_Identity;
}

void Inline_response_200::setIdentity(const std::map<utility::string_t, utility::string_t>& value)
{
    m_Identity = value;
    m_IdentityIsSet = true;
}

bool Inline_response_200::identityIsSet() const
{
    return m_IdentityIsSet;
}

void Inline_response_200::unsetIdentity()
{
    m_IdentityIsSet = false;
}
}
}
}
}


