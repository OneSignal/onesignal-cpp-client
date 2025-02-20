/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.4.0
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOneSignalAPIClient/model/NotificationWithMeta_allOf.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



NotificationWithMeta_allOf::NotificationWithMeta_allOf()
{
    m_Remaining = 0;
    m_RemainingIsSet = false;
    m_Successful = 0;
    m_SuccessfulIsSet = false;
    m_Failed = 0;
    m_FailedIsSet = false;
    m_Errored = 0;
    m_ErroredIsSet = false;
    m_Converted = 0;
    m_ConvertedIsSet = false;
    m_Queued_at = 0L;
    m_Queued_atIsSet = false;
    m_Send_after = 0L;
    m_Send_afterIsSet = false;
    m_Completed_at = 0L;
    m_Completed_atIsSet = false;
    m_Platform_delivery_statsIsSet = false;
    m_Received = 0;
    m_ReceivedIsSet = false;
    m_Throttle_rate_per_minute = 0;
    m_Throttle_rate_per_minuteIsSet = false;
}

NotificationWithMeta_allOf::~NotificationWithMeta_allOf()
{
}

void NotificationWithMeta_allOf::validate()
{
    // TODO: implement validation
}

web::json::value NotificationWithMeta_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_RemainingIsSet)
    {
        val[utility::conversions::to_string_t(U("remaining"))] = ModelBase::toJson(m_Remaining);
    }
    if(m_SuccessfulIsSet)
    {
        val[utility::conversions::to_string_t(U("successful"))] = ModelBase::toJson(m_Successful);
    }
    if(m_FailedIsSet)
    {
        val[utility::conversions::to_string_t(U("failed"))] = ModelBase::toJson(m_Failed);
    }
    if(m_ErroredIsSet)
    {
        val[utility::conversions::to_string_t(U("errored"))] = ModelBase::toJson(m_Errored);
    }
    if(m_ConvertedIsSet)
    {
        val[utility::conversions::to_string_t(U("converted"))] = ModelBase::toJson(m_Converted);
    }
    if(m_Queued_atIsSet)
    {
        val[utility::conversions::to_string_t(U("queued_at"))] = ModelBase::toJson(m_Queued_at);
    }
    if(m_Send_afterIsSet)
    {
        val[utility::conversions::to_string_t(U("send_after"))] = ModelBase::toJson(m_Send_after);
    }
    if(m_Completed_atIsSet)
    {
        val[utility::conversions::to_string_t(U("completed_at"))] = ModelBase::toJson(m_Completed_at);
    }
    if(m_Platform_delivery_statsIsSet)
    {
        val[utility::conversions::to_string_t(U("platform_delivery_stats"))] = ModelBase::toJson(m_Platform_delivery_stats);
    }
    if(m_ReceivedIsSet)
    {
        val[utility::conversions::to_string_t(U("received"))] = ModelBase::toJson(m_Received);
    }
    if(m_Throttle_rate_per_minuteIsSet)
    {
        val[utility::conversions::to_string_t(U("throttle_rate_per_minute"))] = ModelBase::toJson(m_Throttle_rate_per_minute);
    }

    return val;
}

bool NotificationWithMeta_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("remaining"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("remaining")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setRemaining;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRemaining);
            setRemaining(refVal_setRemaining);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("successful"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("successful")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setSuccessful;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSuccessful);
            setSuccessful(refVal_setSuccessful);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("failed"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("failed")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setFailed;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFailed);
            setFailed(refVal_setFailed);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("errored"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errored")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setErrored;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrored);
            setErrored(refVal_setErrored);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("converted"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("converted")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setConverted;
            ok &= ModelBase::fromJson(fieldValue, refVal_setConverted);
            setConverted(refVal_setConverted);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("queued_at"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("queued_at")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setQueuedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQueuedAt);
            setQueuedAt(refVal_setQueuedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("send_after"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("send_after")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setSendAfter;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSendAfter);
            setSendAfter(refVal_setSendAfter);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("completed_at"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("completed_at")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setCompletedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCompletedAt);
            setCompletedAt(refVal_setCompletedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("platform_delivery_stats"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("platform_delivery_stats")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PlatformDeliveryData> refVal_setPlatformDeliveryStats;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPlatformDeliveryStats);
            setPlatformDeliveryStats(refVal_setPlatformDeliveryStats);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("received"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("received")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setReceived;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReceived);
            setReceived(refVal_setReceived);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("throttle_rate_per_minute"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("throttle_rate_per_minute")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setThrottleRatePerMinute;
            ok &= ModelBase::fromJson(fieldValue, refVal_setThrottleRatePerMinute);
            setThrottleRatePerMinute(refVal_setThrottleRatePerMinute);
        }
    }
    return ok;
}

void NotificationWithMeta_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_RemainingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("remaining")), m_Remaining));
    }
    if(m_SuccessfulIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("successful")), m_Successful));
    }
    if(m_FailedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("failed")), m_Failed));
    }
    if(m_ErroredIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errored")), m_Errored));
    }
    if(m_ConvertedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("converted")), m_Converted));
    }
    if(m_Queued_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("queued_at")), m_Queued_at));
    }
    if(m_Send_afterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("send_after")), m_Send_after));
    }
    if(m_Completed_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("completed_at")), m_Completed_at));
    }
    if(m_Platform_delivery_statsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("platform_delivery_stats")), m_Platform_delivery_stats));
    }
    if(m_ReceivedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("received")), m_Received));
    }
    if(m_Throttle_rate_per_minuteIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("throttle_rate_per_minute")), m_Throttle_rate_per_minute));
    }
}

bool NotificationWithMeta_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("remaining"))))
    {
        int32_t refVal_setRemaining;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("remaining"))), refVal_setRemaining );
        setRemaining(refVal_setRemaining);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("successful"))))
    {
        int32_t refVal_setSuccessful;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("successful"))), refVal_setSuccessful );
        setSuccessful(refVal_setSuccessful);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("failed"))))
    {
        int32_t refVal_setFailed;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("failed"))), refVal_setFailed );
        setFailed(refVal_setFailed);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("errored"))))
    {
        int32_t refVal_setErrored;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errored"))), refVal_setErrored );
        setErrored(refVal_setErrored);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("converted"))))
    {
        int32_t refVal_setConverted;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("converted"))), refVal_setConverted );
        setConverted(refVal_setConverted);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("queued_at"))))
    {
        int64_t refVal_setQueuedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("queued_at"))), refVal_setQueuedAt );
        setQueuedAt(refVal_setQueuedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("send_after"))))
    {
        int64_t refVal_setSendAfter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("send_after"))), refVal_setSendAfter );
        setSendAfter(refVal_setSendAfter);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("completed_at"))))
    {
        int64_t refVal_setCompletedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("completed_at"))), refVal_setCompletedAt );
        setCompletedAt(refVal_setCompletedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("platform_delivery_stats"))))
    {
        std::shared_ptr<PlatformDeliveryData> refVal_setPlatformDeliveryStats;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("platform_delivery_stats"))), refVal_setPlatformDeliveryStats );
        setPlatformDeliveryStats(refVal_setPlatformDeliveryStats);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("received"))))
    {
        int32_t refVal_setReceived;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("received"))), refVal_setReceived );
        setReceived(refVal_setReceived);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("throttle_rate_per_minute"))))
    {
        int32_t refVal_setThrottleRatePerMinute;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("throttle_rate_per_minute"))), refVal_setThrottleRatePerMinute );
        setThrottleRatePerMinute(refVal_setThrottleRatePerMinute);
    }
    return ok;
}

int32_t NotificationWithMeta_allOf::getRemaining() const
{
    return m_Remaining;
}

void NotificationWithMeta_allOf::setRemaining(int32_t value)
{
    m_Remaining = value;
    m_RemainingIsSet = true;
}

bool NotificationWithMeta_allOf::remainingIsSet() const
{
    return m_RemainingIsSet;
}

void NotificationWithMeta_allOf::unsetRemaining()
{
    m_RemainingIsSet = false;
}
int32_t NotificationWithMeta_allOf::getSuccessful() const
{
    return m_Successful;
}

void NotificationWithMeta_allOf::setSuccessful(int32_t value)
{
    m_Successful = value;
    m_SuccessfulIsSet = true;
}

bool NotificationWithMeta_allOf::successfulIsSet() const
{
    return m_SuccessfulIsSet;
}

void NotificationWithMeta_allOf::unsetSuccessful()
{
    m_SuccessfulIsSet = false;
}
int32_t NotificationWithMeta_allOf::getFailed() const
{
    return m_Failed;
}

void NotificationWithMeta_allOf::setFailed(int32_t value)
{
    m_Failed = value;
    m_FailedIsSet = true;
}

bool NotificationWithMeta_allOf::failedIsSet() const
{
    return m_FailedIsSet;
}

void NotificationWithMeta_allOf::unsetFailed()
{
    m_FailedIsSet = false;
}
int32_t NotificationWithMeta_allOf::getErrored() const
{
    return m_Errored;
}

void NotificationWithMeta_allOf::setErrored(int32_t value)
{
    m_Errored = value;
    m_ErroredIsSet = true;
}

bool NotificationWithMeta_allOf::erroredIsSet() const
{
    return m_ErroredIsSet;
}

void NotificationWithMeta_allOf::unsetErrored()
{
    m_ErroredIsSet = false;
}
int32_t NotificationWithMeta_allOf::getConverted() const
{
    return m_Converted;
}

void NotificationWithMeta_allOf::setConverted(int32_t value)
{
    m_Converted = value;
    m_ConvertedIsSet = true;
}

bool NotificationWithMeta_allOf::convertedIsSet() const
{
    return m_ConvertedIsSet;
}

void NotificationWithMeta_allOf::unsetConverted()
{
    m_ConvertedIsSet = false;
}
int64_t NotificationWithMeta_allOf::getQueuedAt() const
{
    return m_Queued_at;
}

void NotificationWithMeta_allOf::setQueuedAt(int64_t value)
{
    m_Queued_at = value;
    m_Queued_atIsSet = true;
}

bool NotificationWithMeta_allOf::queuedAtIsSet() const
{
    return m_Queued_atIsSet;
}

void NotificationWithMeta_allOf::unsetQueued_at()
{
    m_Queued_atIsSet = false;
}
int64_t NotificationWithMeta_allOf::getSendAfter() const
{
    return m_Send_after;
}

void NotificationWithMeta_allOf::setSendAfter(int64_t value)
{
    m_Send_after = value;
    m_Send_afterIsSet = true;
}

bool NotificationWithMeta_allOf::sendAfterIsSet() const
{
    return m_Send_afterIsSet;
}

void NotificationWithMeta_allOf::unsetSend_after()
{
    m_Send_afterIsSet = false;
}
int64_t NotificationWithMeta_allOf::getCompletedAt() const
{
    return m_Completed_at;
}

void NotificationWithMeta_allOf::setCompletedAt(int64_t value)
{
    m_Completed_at = value;
    m_Completed_atIsSet = true;
}

bool NotificationWithMeta_allOf::completedAtIsSet() const
{
    return m_Completed_atIsSet;
}

void NotificationWithMeta_allOf::unsetCompleted_at()
{
    m_Completed_atIsSet = false;
}
std::shared_ptr<PlatformDeliveryData> NotificationWithMeta_allOf::getPlatformDeliveryStats() const
{
    return m_Platform_delivery_stats;
}

void NotificationWithMeta_allOf::setPlatformDeliveryStats(const std::shared_ptr<PlatformDeliveryData>& value)
{
    m_Platform_delivery_stats = value;
    m_Platform_delivery_statsIsSet = true;
}

bool NotificationWithMeta_allOf::platformDeliveryStatsIsSet() const
{
    return m_Platform_delivery_statsIsSet;
}

void NotificationWithMeta_allOf::unsetPlatform_delivery_stats()
{
    m_Platform_delivery_statsIsSet = false;
}
int32_t NotificationWithMeta_allOf::getReceived() const
{
    return m_Received;
}

void NotificationWithMeta_allOf::setReceived(int32_t value)
{
    m_Received = value;
    m_ReceivedIsSet = true;
}

bool NotificationWithMeta_allOf::receivedIsSet() const
{
    return m_ReceivedIsSet;
}

void NotificationWithMeta_allOf::unsetReceived()
{
    m_ReceivedIsSet = false;
}
int32_t NotificationWithMeta_allOf::getThrottleRatePerMinute() const
{
    return m_Throttle_rate_per_minute;
}

void NotificationWithMeta_allOf::setThrottleRatePerMinute(int32_t value)
{
    m_Throttle_rate_per_minute = value;
    m_Throttle_rate_per_minuteIsSet = true;
}

bool NotificationWithMeta_allOf::throttleRatePerMinuteIsSet() const
{
    return m_Throttle_rate_per_minuteIsSet;
}

void NotificationWithMeta_allOf::unsetThrottle_rate_per_minute()
{
    m_Throttle_rate_per_minuteIsSet = false;
}
}
}
}
}


