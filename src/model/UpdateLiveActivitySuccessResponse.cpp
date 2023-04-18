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



#include "CppRestOneSignalAPIClient/model/UpdateLiveActivitySuccessResponse.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



UpdateLiveActivitySuccessResponse::UpdateLiveActivitySuccessResponse()
{
    m_Notification_id = utility::conversions::to_string_t("");
    m_Notification_idIsSet = false;
    m_ErrorsIsSet = false;
}

UpdateLiveActivitySuccessResponse::~UpdateLiveActivitySuccessResponse()
{
}

void UpdateLiveActivitySuccessResponse::validate()
{
    // TODO: implement validation
}

web::json::value UpdateLiveActivitySuccessResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Notification_idIsSet)
    {
        val[utility::conversions::to_string_t(U("notification_id"))] = ModelBase::toJson(m_Notification_id);
    }
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }

    return val;
}

bool UpdateLiveActivitySuccessResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("notification_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("notification_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setNotificationId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNotificationId);
            setNotificationId(refVal_setNotificationId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Notification200Errors> refVal_setErrors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrors);
            setErrors(refVal_setErrors);
        }
    }
    return ok;
}

void UpdateLiveActivitySuccessResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Notification_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("notification_id")), m_Notification_id));
    }
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errors")), m_Errors));
    }
}

bool UpdateLiveActivitySuccessResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("notification_id"))))
    {
        utility::string_t refVal_setNotificationId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("notification_id"))), refVal_setNotificationId );
        setNotificationId(refVal_setNotificationId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::shared_ptr<Notification200Errors> refVal_setErrors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_setErrors );
        setErrors(refVal_setErrors);
    }
    return ok;
}

utility::string_t UpdateLiveActivitySuccessResponse::getNotificationId() const
{
    return m_Notification_id;
}

void UpdateLiveActivitySuccessResponse::setNotificationId(const utility::string_t& value)
{
    m_Notification_id = value;
    m_Notification_idIsSet = true;
}

bool UpdateLiveActivitySuccessResponse::notificationIdIsSet() const
{
    return m_Notification_idIsSet;
}

void UpdateLiveActivitySuccessResponse::unsetNotification_id()
{
    m_Notification_idIsSet = false;
}
std::shared_ptr<Notification200Errors> UpdateLiveActivitySuccessResponse::getErrors() const
{
    return m_Errors;
}

void UpdateLiveActivitySuccessResponse::setErrors(const std::shared_ptr<Notification200Errors>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool UpdateLiveActivitySuccessResponse::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void UpdateLiveActivitySuccessResponse::unsetErrors()
{
    m_ErrorsIsSet = false;
}
}
}
}
}


