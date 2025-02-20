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
 * PlatformDeliveryData_email_allOf.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_PlatformDeliveryData_email_allOf_H_
#define COM_ONESIGNAL_CLIENT_MODEL_PlatformDeliveryData_email_allOf_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"


namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  PlatformDeliveryData_email_allOf
    : public ModelBase
{
public:
    PlatformDeliveryData_email_allOf();
    virtual ~PlatformDeliveryData_email_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PlatformDeliveryData_email_allOf members

    /// <summary>
    /// Number of times an email has been opened.
    /// </summary>
    int32_t getOpened() const;
    bool openedIsSet() const;
    void unsetOpened();

    void setOpened(int32_t value);

    /// <summary>
    /// Number of unique recipients who have opened your email.
    /// </summary>
    int32_t getUniqueOpens() const;
    bool uniqueOpensIsSet() const;
    void unsetUnique_opens();

    void setUniqueOpens(int32_t value);

    /// <summary>
    /// Number of clicked links from your email. This can include the recipient clicking email links multiple times.
    /// </summary>
    int32_t getClicks() const;
    bool clicksIsSet() const;
    void unsetClicks();

    void setClicks(int32_t value);

    /// <summary>
    /// Number of unique clicks that your recipients have made on links from your email.
    /// </summary>
    int32_t getUniqueClicks() const;
    bool uniqueClicksIsSet() const;
    void unsetUnique_clicks();

    void setUniqueClicks(int32_t value);

    /// <summary>
    /// Number of recipients who registered as a hard or soft bounce and didn&#39;t receive your email.
    /// </summary>
    int32_t getBounced() const;
    bool bouncedIsSet() const;
    void unsetBounced();

    void setBounced(int32_t value);

    /// <summary>
    /// Number of recipients who reported this email as spam.
    /// </summary>
    int32_t getReportedSpam() const;
    bool reportedSpamIsSet() const;
    void unsetReported_spam();

    void setReportedSpam(int32_t value);

    /// <summary>
    /// Number of recipients who opted out of your emails using the unsubscribe link in this email.
    /// </summary>
    int32_t getUnsubscribed() const;
    bool unsubscribedIsSet() const;
    void unsetUnsubscribed();

    void setUnsubscribed(int32_t value);


protected:
    int32_t m_Opened;
    bool m_OpenedIsSet;
    int32_t m_Unique_opens;
    bool m_Unique_opensIsSet;
    int32_t m_Clicks;
    bool m_ClicksIsSet;
    int32_t m_Unique_clicks;
    bool m_Unique_clicksIsSet;
    int32_t m_Bounced;
    bool m_BouncedIsSet;
    int32_t m_Reported_spam;
    bool m_Reported_spamIsSet;
    int32_t m_Unsubscribed;
    bool m_UnsubscribedIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_PlatformDeliveryData_email_allOf_H_ */
