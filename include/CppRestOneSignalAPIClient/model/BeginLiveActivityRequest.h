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
 * BeginLiveActivityRequest.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_BeginLiveActivityRequest_H_
#define COM_ONESIGNAL_CLIENT_MODEL_BeginLiveActivityRequest_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BeginLiveActivityRequest
    : public ModelBase
{
public:
    BeginLiveActivityRequest();
    virtual ~BeginLiveActivityRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BeginLiveActivityRequest members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPushToken() const;
    bool pushTokenIsSet() const;
    void unsetPush_token();

    void setPushToken(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSubscriptionId() const;
    bool subscriptionIdIsSet() const;
    void unsetSubscription_id();

    void setSubscriptionId(const utility::string_t& value);


protected:
    utility::string_t m_Push_token;
    bool m_Push_tokenIsSet;
    utility::string_t m_Subscription_id;
    bool m_Subscription_idIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_BeginLiveActivityRequest_H_ */
