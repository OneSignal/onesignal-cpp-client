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

/*
 * SubscriptionObject.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_SubscriptionObject_H_
#define COM_ONESIGNAL_CLIENT_MODEL_SubscriptionObject_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  SubscriptionObject
    : public ModelBase
{
public:
    SubscriptionObject();
    virtual ~SubscriptionObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SubscriptionObject members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getToken() const;
    bool tokenIsSet() const;
    void unsetToken();

    void setToken(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetEnabled();

    void setEnabled(bool value);

    /// <summary>
    /// 
    /// </summary>
    double getNotificationTypes() const;
    bool notificationTypesIsSet() const;
    void unsetNotification_types();

    void setNotificationTypes(double value);

    /// <summary>
    /// 
    /// </summary>
    double getSessionTime() const;
    bool sessionTimeIsSet() const;
    void unsetSession_time();

    void setSessionTime(double value);

    /// <summary>
    /// 
    /// </summary>
    double getSessionCount() const;
    bool sessionCountIsSet() const;
    void unsetSession_count();

    void setSessionCount(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSdk() const;
    bool sdkIsSet() const;
    void unsetSdk();

    void setSdk(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDeviceModel() const;
    bool deviceModelIsSet() const;
    void unsetDevice_model();

    void setDeviceModel(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDeviceOs() const;
    bool deviceOsIsSet() const;
    void unsetDevice_os();

    void setDeviceOs(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isRooted() const;
    bool rootedIsSet() const;
    void unsetRooted();

    void setRooted(bool value);

    /// <summary>
    /// 
    /// </summary>
    double getTestType() const;
    bool testTypeIsSet() const;
    void unsetTest_type();

    void setTestType(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAppVersion() const;
    bool appVersionIsSet() const;
    void unsetApp_version();

    void setAppVersion(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    double getNetType() const;
    bool netTypeIsSet() const;
    void unsetNet_type();

    void setNetType(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCarrier() const;
    bool carrierIsSet() const;
    void unsetCarrier();

    void setCarrier(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getWebAuth() const;
    bool webAuthIsSet() const;
    void unsetWeb_auth();

    void setWebAuth(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getWebP256() const;
    bool webP256IsSet() const;
    void unsetWeb_p256();

    void setWebP256(const utility::string_t& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Token;
    bool m_TokenIsSet;
    bool m_Enabled;
    bool m_EnabledIsSet;
    double m_Notification_types;
    bool m_Notification_typesIsSet;
    double m_Session_time;
    bool m_Session_timeIsSet;
    double m_Session_count;
    bool m_Session_countIsSet;
    utility::string_t m_Sdk;
    bool m_SdkIsSet;
    utility::string_t m_Device_model;
    bool m_Device_modelIsSet;
    utility::string_t m_Device_os;
    bool m_Device_osIsSet;
    bool m_Rooted;
    bool m_RootedIsSet;
    double m_Test_type;
    bool m_Test_typeIsSet;
    utility::string_t m_App_version;
    bool m_App_versionIsSet;
    double m_Net_type;
    bool m_Net_typeIsSet;
    utility::string_t m_Carrier;
    bool m_CarrierIsSet;
    utility::string_t m_Web_auth;
    bool m_Web_authIsSet;
    utility::string_t m_Web_p256;
    bool m_Web_p256IsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_SubscriptionObject_H_ */
