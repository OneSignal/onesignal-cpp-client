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
 * Inline_response_202.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_Inline_response_202_H_
#define COM_ONESIGNAL_CLIENT_MODEL_Inline_response_202_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include "CppRestOneSignalAPIClient/model/PropertiesObject.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {

class PropertiesObject;

/// <summary>
/// 
/// </summary>
class  Inline_response_202
    : public ModelBase
{
public:
    Inline_response_202();
    virtual ~Inline_response_202();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Inline_response_202 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PropertiesObject> getProperties() const;
    bool propertiesIsSet() const;
    void unsetProperties();

    void setProperties(const std::shared_ptr<PropertiesObject>& value);


protected:
    std::shared_ptr<PropertiesObject> m_Properties;
    bool m_PropertiesIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_Inline_response_202_H_ */
