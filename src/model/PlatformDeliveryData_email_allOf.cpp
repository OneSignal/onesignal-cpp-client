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



#include "CppRestOneSignalAPIClient/model/PlatformDeliveryData_email_allOf.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



PlatformDeliveryData_email_allOf::PlatformDeliveryData_email_allOf()
{
    m_Opened = 0;
    m_OpenedIsSet = false;
    m_Unique_opens = 0;
    m_Unique_opensIsSet = false;
    m_Clicks = 0;
    m_ClicksIsSet = false;
    m_Unique_clicks = 0;
    m_Unique_clicksIsSet = false;
    m_Bounced = 0;
    m_BouncedIsSet = false;
    m_Reported_spam = 0;
    m_Reported_spamIsSet = false;
    m_Unsubscribed = 0;
    m_UnsubscribedIsSet = false;
}

PlatformDeliveryData_email_allOf::~PlatformDeliveryData_email_allOf()
{
}

void PlatformDeliveryData_email_allOf::validate()
{
    // TODO: implement validation
}

web::json::value PlatformDeliveryData_email_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_OpenedIsSet)
    {
        val[utility::conversions::to_string_t(U("opened"))] = ModelBase::toJson(m_Opened);
    }
    if(m_Unique_opensIsSet)
    {
        val[utility::conversions::to_string_t(U("unique_opens"))] = ModelBase::toJson(m_Unique_opens);
    }
    if(m_ClicksIsSet)
    {
        val[utility::conversions::to_string_t(U("clicks"))] = ModelBase::toJson(m_Clicks);
    }
    if(m_Unique_clicksIsSet)
    {
        val[utility::conversions::to_string_t(U("unique_clicks"))] = ModelBase::toJson(m_Unique_clicks);
    }
    if(m_BouncedIsSet)
    {
        val[utility::conversions::to_string_t(U("bounced"))] = ModelBase::toJson(m_Bounced);
    }
    if(m_Reported_spamIsSet)
    {
        val[utility::conversions::to_string_t(U("reported_spam"))] = ModelBase::toJson(m_Reported_spam);
    }
    if(m_UnsubscribedIsSet)
    {
        val[utility::conversions::to_string_t(U("unsubscribed"))] = ModelBase::toJson(m_Unsubscribed);
    }

    return val;
}

bool PlatformDeliveryData_email_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("opened"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("opened")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setOpened;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOpened);
            setOpened(refVal_setOpened);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("unique_opens"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("unique_opens")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setUniqueOpens;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUniqueOpens);
            setUniqueOpens(refVal_setUniqueOpens);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("clicks"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("clicks")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setClicks;
            ok &= ModelBase::fromJson(fieldValue, refVal_setClicks);
            setClicks(refVal_setClicks);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("unique_clicks"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("unique_clicks")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setUniqueClicks;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUniqueClicks);
            setUniqueClicks(refVal_setUniqueClicks);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bounced"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bounced")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setBounced;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBounced);
            setBounced(refVal_setBounced);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("reported_spam"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("reported_spam")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setReportedSpam;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReportedSpam);
            setReportedSpam(refVal_setReportedSpam);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("unsubscribed"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("unsubscribed")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setUnsubscribed;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUnsubscribed);
            setUnsubscribed(refVal_setUnsubscribed);
        }
    }
    return ok;
}

void PlatformDeliveryData_email_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_OpenedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("opened")), m_Opened));
    }
    if(m_Unique_opensIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("unique_opens")), m_Unique_opens));
    }
    if(m_ClicksIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("clicks")), m_Clicks));
    }
    if(m_Unique_clicksIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("unique_clicks")), m_Unique_clicks));
    }
    if(m_BouncedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bounced")), m_Bounced));
    }
    if(m_Reported_spamIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reported_spam")), m_Reported_spam));
    }
    if(m_UnsubscribedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("unsubscribed")), m_Unsubscribed));
    }
}

bool PlatformDeliveryData_email_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("opened"))))
    {
        int32_t refVal_setOpened;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("opened"))), refVal_setOpened );
        setOpened(refVal_setOpened);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("unique_opens"))))
    {
        int32_t refVal_setUniqueOpens;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("unique_opens"))), refVal_setUniqueOpens );
        setUniqueOpens(refVal_setUniqueOpens);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("clicks"))))
    {
        int32_t refVal_setClicks;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("clicks"))), refVal_setClicks );
        setClicks(refVal_setClicks);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("unique_clicks"))))
    {
        int32_t refVal_setUniqueClicks;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("unique_clicks"))), refVal_setUniqueClicks );
        setUniqueClicks(refVal_setUniqueClicks);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bounced"))))
    {
        int32_t refVal_setBounced;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bounced"))), refVal_setBounced );
        setBounced(refVal_setBounced);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("reported_spam"))))
    {
        int32_t refVal_setReportedSpam;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reported_spam"))), refVal_setReportedSpam );
        setReportedSpam(refVal_setReportedSpam);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("unsubscribed"))))
    {
        int32_t refVal_setUnsubscribed;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("unsubscribed"))), refVal_setUnsubscribed );
        setUnsubscribed(refVal_setUnsubscribed);
    }
    return ok;
}

int32_t PlatformDeliveryData_email_allOf::getOpened() const
{
    return m_Opened;
}

void PlatformDeliveryData_email_allOf::setOpened(int32_t value)
{
    m_Opened = value;
    m_OpenedIsSet = true;
}

bool PlatformDeliveryData_email_allOf::openedIsSet() const
{
    return m_OpenedIsSet;
}

void PlatformDeliveryData_email_allOf::unsetOpened()
{
    m_OpenedIsSet = false;
}
int32_t PlatformDeliveryData_email_allOf::getUniqueOpens() const
{
    return m_Unique_opens;
}

void PlatformDeliveryData_email_allOf::setUniqueOpens(int32_t value)
{
    m_Unique_opens = value;
    m_Unique_opensIsSet = true;
}

bool PlatformDeliveryData_email_allOf::uniqueOpensIsSet() const
{
    return m_Unique_opensIsSet;
}

void PlatformDeliveryData_email_allOf::unsetUnique_opens()
{
    m_Unique_opensIsSet = false;
}
int32_t PlatformDeliveryData_email_allOf::getClicks() const
{
    return m_Clicks;
}

void PlatformDeliveryData_email_allOf::setClicks(int32_t value)
{
    m_Clicks = value;
    m_ClicksIsSet = true;
}

bool PlatformDeliveryData_email_allOf::clicksIsSet() const
{
    return m_ClicksIsSet;
}

void PlatformDeliveryData_email_allOf::unsetClicks()
{
    m_ClicksIsSet = false;
}
int32_t PlatformDeliveryData_email_allOf::getUniqueClicks() const
{
    return m_Unique_clicks;
}

void PlatformDeliveryData_email_allOf::setUniqueClicks(int32_t value)
{
    m_Unique_clicks = value;
    m_Unique_clicksIsSet = true;
}

bool PlatformDeliveryData_email_allOf::uniqueClicksIsSet() const
{
    return m_Unique_clicksIsSet;
}

void PlatformDeliveryData_email_allOf::unsetUnique_clicks()
{
    m_Unique_clicksIsSet = false;
}
int32_t PlatformDeliveryData_email_allOf::getBounced() const
{
    return m_Bounced;
}

void PlatformDeliveryData_email_allOf::setBounced(int32_t value)
{
    m_Bounced = value;
    m_BouncedIsSet = true;
}

bool PlatformDeliveryData_email_allOf::bouncedIsSet() const
{
    return m_BouncedIsSet;
}

void PlatformDeliveryData_email_allOf::unsetBounced()
{
    m_BouncedIsSet = false;
}
int32_t PlatformDeliveryData_email_allOf::getReportedSpam() const
{
    return m_Reported_spam;
}

void PlatformDeliveryData_email_allOf::setReportedSpam(int32_t value)
{
    m_Reported_spam = value;
    m_Reported_spamIsSet = true;
}

bool PlatformDeliveryData_email_allOf::reportedSpamIsSet() const
{
    return m_Reported_spamIsSet;
}

void PlatformDeliveryData_email_allOf::unsetReported_spam()
{
    m_Reported_spamIsSet = false;
}
int32_t PlatformDeliveryData_email_allOf::getUnsubscribed() const
{
    return m_Unsubscribed;
}

void PlatformDeliveryData_email_allOf::setUnsubscribed(int32_t value)
{
    m_Unsubscribed = value;
    m_UnsubscribedIsSet = true;
}

bool PlatformDeliveryData_email_allOf::unsubscribedIsSet() const
{
    return m_UnsubscribedIsSet;
}

void PlatformDeliveryData_email_allOf::unsetUnsubscribed()
{
    m_UnsubscribedIsSet = false;
}
}
}
}
}


