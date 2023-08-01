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



#include "CppRestOneSignalAPIClient/model/UpdateLiveActivityRequest.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



UpdateLiveActivityRequest::UpdateLiveActivityRequest()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Event = utility::conversions::to_string_t("");
    m_EventIsSet = false;
    m_Event_updatesIsSet = false;
    m_Dismiss_at = 0.0;
    m_Dismiss_atIsSet = false;
}

UpdateLiveActivityRequest::~UpdateLiveActivityRequest()
{
}

void UpdateLiveActivityRequest::validate()
{
    // TODO: implement validation
}

web::json::value UpdateLiveActivityRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_EventIsSet)
    {
        val[utility::conversions::to_string_t(U("event"))] = ModelBase::toJson(m_Event);
    }
    if(m_Event_updatesIsSet)
    {
        val[utility::conversions::to_string_t(U("event_updates"))] = ModelBase::toJson(m_Event_updates);
    }
    if(m_Dismiss_atIsSet)
    {
        val[utility::conversions::to_string_t(U("dismiss_at"))] = ModelBase::toJson(m_Dismiss_at);
    }

    return val;
}

bool UpdateLiveActivityRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("event"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("event")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEvent;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEvent);
            setEvent(refVal_setEvent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("event_updates"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("event_updates")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setEventUpdates;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEventUpdates);
            setEventUpdates(refVal_setEventUpdates);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("dismiss_at"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("dismiss_at")));
        if(!fieldValue.is_null())
        {
            double refVal_setDismissAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDismissAt);
            setDismissAt(refVal_setDismissAt);
        }
    }
    return ok;
}

void UpdateLiveActivityRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_EventIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("event")), m_Event));
    }
    if(m_Event_updatesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("event_updates")), m_Event_updates));
    }
    if(m_Dismiss_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("dismiss_at")), m_Dismiss_at));
    }
}

bool UpdateLiveActivityRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("event"))))
    {
        utility::string_t refVal_setEvent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("event"))), refVal_setEvent );
        setEvent(refVal_setEvent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("event_updates"))))
    {
        std::shared_ptr<Object> refVal_setEventUpdates;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("event_updates"))), refVal_setEventUpdates );
        setEventUpdates(refVal_setEventUpdates);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("dismiss_at"))))
    {
        double refVal_setDismissAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("dismiss_at"))), refVal_setDismissAt );
        setDismissAt(refVal_setDismissAt);
    }
    return ok;
}

utility::string_t UpdateLiveActivityRequest::getName() const
{
    return m_Name;
}

void UpdateLiveActivityRequest::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool UpdateLiveActivityRequest::nameIsSet() const
{
    return m_NameIsSet;
}

void UpdateLiveActivityRequest::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t UpdateLiveActivityRequest::getEvent() const
{
    return m_Event;
}

void UpdateLiveActivityRequest::setEvent(const utility::string_t& value)
{
    m_Event = value;
    m_EventIsSet = true;
}

bool UpdateLiveActivityRequest::eventIsSet() const
{
    return m_EventIsSet;
}

void UpdateLiveActivityRequest::unsetEvent()
{
    m_EventIsSet = false;
}
std::shared_ptr<Object> UpdateLiveActivityRequest::getEventUpdates() const
{
    return m_Event_updates;
}

void UpdateLiveActivityRequest::setEventUpdates(const std::shared_ptr<Object>& value)
{
    m_Event_updates = value;
    m_Event_updatesIsSet = true;
}

bool UpdateLiveActivityRequest::eventUpdatesIsSet() const
{
    return m_Event_updatesIsSet;
}

void UpdateLiveActivityRequest::unsetEvent_updates()
{
    m_Event_updatesIsSet = false;
}
double UpdateLiveActivityRequest::getDismissAt() const
{
    return m_Dismiss_at;
}

void UpdateLiveActivityRequest::setDismissAt(double value)
{
    m_Dismiss_at = value;
    m_Dismiss_atIsSet = true;
}

bool UpdateLiveActivityRequest::dismissAtIsSet() const
{
    return m_Dismiss_atIsSet;
}

void UpdateLiveActivityRequest::unsetDismiss_at()
{
    m_Dismiss_atIsSet = false;
}
}
}
}
}


