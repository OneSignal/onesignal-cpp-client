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
 * PlayerNotificationTarget_include_aliases.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_PlayerNotificationTarget_include_aliases_H_
#define COM_ONESIGNAL_CLIENT_MODEL_PlayerNotificationTarget_include_aliases_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  PlayerNotificationTarget_include_aliases
    : public ModelBase
{
public:
    PlayerNotificationTarget_include_aliases();
    virtual ~PlayerNotificationTarget_include_aliases();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PlayerNotificationTarget_include_aliases members

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getAliasLabel();
    bool aliasLabelIsSet() const;
    void unsetAlias_label();

    void setAliasLabel(const std::vector<utility::string_t>& value);


protected:
    std::vector<utility::string_t> m_Alias_label;
    bool m_Alias_labelIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_PlayerNotificationTarget_include_aliases_H_ */
