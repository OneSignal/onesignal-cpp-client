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

/*
 * PlatformDeliveryData.h
 *
 * Hash of delivery statistics broken out by target device platform.
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_PlatformDeliveryData_H_
#define COM_ONESIGNAL_CLIENT_MODEL_PlatformDeliveryData_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include "CppRestOneSignalAPIClient/model/PlatformDeliveryData_sms_allOf.h"
#include "CppRestOneSignalAPIClient/model/PlatformDeliveryData_email_allOf.h"
#include "CppRestOneSignalAPIClient/model/DeliveryData.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {

class DeliveryData;

/// <summary>
/// Hash of delivery statistics broken out by target device platform.
/// </summary>
class  PlatformDeliveryData
    : public ModelBase
{
public:
    PlatformDeliveryData();
    virtual ~PlatformDeliveryData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PlatformDeliveryData members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DeliveryData> getEdgeWebPush() const;
    bool edgeWebPushIsSet() const;
    void unsetEdge_web_push();

    void setEdgeWebPush(const std::shared_ptr<DeliveryData>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DeliveryData> getChromeWebPush() const;
    bool chromeWebPushIsSet() const;
    void unsetChrome_web_push();

    void setChromeWebPush(const std::shared_ptr<DeliveryData>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DeliveryData> getFirefoxWebPush() const;
    bool firefoxWebPushIsSet() const;
    void unsetFirefox_web_push();

    void setFirefoxWebPush(const std::shared_ptr<DeliveryData>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DeliveryData> getSafariWebPush() const;
    bool safariWebPushIsSet() const;
    void unsetSafari_web_push();

    void setSafariWebPush(const std::shared_ptr<DeliveryData>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DeliveryData> getAndroid() const;
    bool androidIsSet() const;
    void unsetAndroid();

    void setAndroid(const std::shared_ptr<DeliveryData>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DeliveryData> getIos() const;
    bool iosIsSet() const;
    void unsetIos();

    void setIos(const std::shared_ptr<DeliveryData>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DeliveryData> getSms() const;
    bool smsIsSet() const;
    void unsetSms();

    void setSms(const std::shared_ptr<DeliveryData>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DeliveryData> getEmail() const;
    bool emailIsSet() const;
    void unsetEmail();

    void setEmail(const std::shared_ptr<DeliveryData>& value);


protected:
    std::shared_ptr<DeliveryData> m_Edge_web_push;
    bool m_Edge_web_pushIsSet;
    std::shared_ptr<DeliveryData> m_Chrome_web_push;
    bool m_Chrome_web_pushIsSet;
    std::shared_ptr<DeliveryData> m_Firefox_web_push;
    bool m_Firefox_web_pushIsSet;
    std::shared_ptr<DeliveryData> m_Safari_web_push;
    bool m_Safari_web_pushIsSet;
    std::shared_ptr<DeliveryData> m_Android;
    bool m_AndroidIsSet;
    std::shared_ptr<DeliveryData> m_Ios;
    bool m_IosIsSet;
    std::shared_ptr<DeliveryData> m_Sms;
    bool m_SmsIsSet;
    std::shared_ptr<DeliveryData> m_Email;
    bool m_EmailIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_PlatformDeliveryData_H_ */
