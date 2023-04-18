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



#include "CppRestOneSignalAPIClient/model/DeletePlayerNotFoundResponse.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



DeletePlayerNotFoundResponse::DeletePlayerNotFoundResponse()
{
    m_Success = false;
    m_SuccessIsSet = false;
}

DeletePlayerNotFoundResponse::~DeletePlayerNotFoundResponse()
{
}

void DeletePlayerNotFoundResponse::validate()
{
    // TODO: implement validation
}

web::json::value DeletePlayerNotFoundResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SuccessIsSet)
    {
        val[utility::conversions::to_string_t(U("success"))] = ModelBase::toJson(m_Success);
    }

    return val;
}

bool DeletePlayerNotFoundResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("success"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("success")));
        if(!fieldValue.is_null())
        {
            bool refVal_setSuccess;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSuccess);
            setSuccess(refVal_setSuccess);
        }
    }
    return ok;
}

void DeletePlayerNotFoundResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_SuccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("success")), m_Success));
    }
}

bool DeletePlayerNotFoundResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("success"))))
    {
        bool refVal_setSuccess;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("success"))), refVal_setSuccess );
        setSuccess(refVal_setSuccess);
    }
    return ok;
}

bool DeletePlayerNotFoundResponse::isSuccess() const
{
    return m_Success;
}

void DeletePlayerNotFoundResponse::setSuccess(bool value)
{
    m_Success = value;
    m_SuccessIsSet = true;
}

bool DeletePlayerNotFoundResponse::successIsSet() const
{
    return m_SuccessIsSet;
}

void DeletePlayerNotFoundResponse::unsetSuccess()
{
    m_SuccessIsSet = false;
}
}
}
}
}


