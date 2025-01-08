/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.3.0
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Notification_allOf.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_Notification_allOf_H_
#define COM_ONESIGNAL_CLIENT_MODEL_Notification_allOf_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Notification_allOf
    : public ModelBase
{
public:
    Notification_allOf();
    virtual ~Notification_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Notification_allOf members

    /// <summary>
    /// Channel: All Schedule notification for future delivery. API defaults to UTC -1100 Examples: All examples are the exact same date &amp; time. \&quot;Thu Sep 24 2015 14:00:00 GMT-0700 (PDT)\&quot; \&quot;September 24th 2015, 2:00:00 pm UTC-07:00\&quot; \&quot;2015-09-24 14:00:00 GMT-0700\&quot; \&quot;Sept 24 2015 14:00:00 GMT-0700\&quot; \&quot;Thu Sep 24 2015 14:00:00 GMT-0700 (Pacific Daylight Time)\&quot; Note: SMS currently only supports send_after parameter. 
    /// </summary>
    utility::datetime getSendAfter() const;
    bool sendAfterIsSet() const;
    void unsetSend_after();

    void setSendAfter(const utility::datetime& value);


protected:
    utility::datetime m_Send_after;
    bool m_Send_afterIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_Notification_allOf_H_ */
