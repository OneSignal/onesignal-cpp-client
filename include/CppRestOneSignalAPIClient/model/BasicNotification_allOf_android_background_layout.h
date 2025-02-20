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
 * BasicNotification_allOf_android_background_layout.h
 *
 * Channel: Push Notifications Platform: Android Allowing setting a background image for the notification. This is a JSON object containing the following keys. See our Background Image documentation for image sizes. 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_BasicNotification_allOf_android_background_layout_H_
#define COM_ONESIGNAL_CLIENT_MODEL_BasicNotification_allOf_android_background_layout_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// Channel: Push Notifications Platform: Android Allowing setting a background image for the notification. This is a JSON object containing the following keys. See our Background Image documentation for image sizes. 
/// </summary>
class  BasicNotification_allOf_android_background_layout
    : public ModelBase
{
public:
    BasicNotification_allOf_android_background_layout();
    virtual ~BasicNotification_allOf_android_background_layout();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BasicNotification_allOf_android_background_layout members

    /// <summary>
    /// Asset file, android resource name, or URL to remote image.
    /// </summary>
    utility::string_t getImage() const;
    bool imageIsSet() const;
    void unsetImage();

    void setImage(const utility::string_t& value);

    /// <summary>
    /// Title text color ARGB Hex format. Example(Blue) \&quot;FF0000FF\&quot;.
    /// </summary>
    utility::string_t getHeadingsColor() const;
    bool headingsColorIsSet() const;
    void unsetHeadings_color();

    void setHeadingsColor(const utility::string_t& value);

    /// <summary>
    /// Body text color ARGB Hex format. Example(Red) \&quot;FFFF0000\&quot;.
    /// </summary>
    utility::string_t getContentsColor() const;
    bool contentsColorIsSet() const;
    void unsetContents_color();

    void setContentsColor(const utility::string_t& value);


protected:
    utility::string_t m_Image;
    bool m_ImageIsSet;
    utility::string_t m_Headings_color;
    bool m_Headings_colorIsSet;
    utility::string_t m_Contents_color;
    bool m_Contents_colorIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_BasicNotification_allOf_android_background_layout_H_ */
