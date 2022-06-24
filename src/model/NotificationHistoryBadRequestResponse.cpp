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



#include "CppRestOneSignalAPIClient/model/NotificationHistoryBadRequestResponse.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



NotificationHistoryBadRequestResponse::NotificationHistoryBadRequestResponse()
{
    m_Success = utility::conversions::to_string_t("");
    m_SuccessIsSet = false;
    m_ErrorsIsSet = false;
}

NotificationHistoryBadRequestResponse::~NotificationHistoryBadRequestResponse()
{
}

void NotificationHistoryBadRequestResponse::validate()
{
    // TODO: implement validation
}

web::json::value NotificationHistoryBadRequestResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SuccessIsSet)
    {
        val[utility::conversions::to_string_t(U("success"))] = ModelBase::toJson(m_Success);
    }
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }

    return val;
}

bool NotificationHistoryBadRequestResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("success"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("success")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSuccess;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSuccess);
            setSuccess(refVal_setSuccess);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setErrors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrors);
            setErrors(refVal_setErrors);
        }
    }
    return ok;
}

void NotificationHistoryBadRequestResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errors")), m_Errors));
    }
}

bool NotificationHistoryBadRequestResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("success"))))
    {
        utility::string_t refVal_setSuccess;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("success"))), refVal_setSuccess );
        setSuccess(refVal_setSuccess);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::vector<utility::string_t> refVal_setErrors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_setErrors );
        setErrors(refVal_setErrors);
    }
    return ok;
}

utility::string_t NotificationHistoryBadRequestResponse::getSuccess() const
{
    return m_Success;
}

void NotificationHistoryBadRequestResponse::setSuccess(const utility::string_t& value)
{
    m_Success = value;
    m_SuccessIsSet = true;
}

bool NotificationHistoryBadRequestResponse::successIsSet() const
{
    return m_SuccessIsSet;
}

void NotificationHistoryBadRequestResponse::unsetSuccess()
{
    m_SuccessIsSet = false;
}
std::vector<utility::string_t>& NotificationHistoryBadRequestResponse::getErrors()
{
    return m_Errors;
}

void NotificationHistoryBadRequestResponse::setErrors(const std::vector<utility::string_t>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool NotificationHistoryBadRequestResponse::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void NotificationHistoryBadRequestResponse::unsetErrors()
{
    m_ErrorsIsSet = false;
}
}
}
}
}


