/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SegmentNotificationTarget.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_SegmentNotificationTarget_H_
#define COM_ONESIGNAL_CLIENT_MODEL_SegmentNotificationTarget_H_


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
class  SegmentNotificationTarget
    : public ModelBase
{
public:
    SegmentNotificationTarget();
    virtual ~SegmentNotificationTarget();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SegmentNotificationTarget members

    /// <summary>
    /// The segment names you want to target. Users in these segments will receive a notification. This targeting parameter is only compatible with excluded_segments. Example: [\&quot;Active Users\&quot;, \&quot;Inactive Users\&quot;] 
    /// </summary>
    std::vector<utility::string_t>& getIncludedSegments();
    bool includedSegmentsIsSet() const;
    void unsetIncluded_segments();

    void setIncludedSegments(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Segment that will be excluded when sending. Users in these segments will not receive a notification, even if they were included in included_segments. This targeting parameter is only compatible with included_segments. Example: [\&quot;Active Users\&quot;, \&quot;Inactive Users\&quot;] 
    /// </summary>
    std::vector<utility::string_t>& getExcludedSegments();
    bool excludedSegmentsIsSet() const;
    void unsetExcluded_segments();

    void setExcludedSegments(const std::vector<utility::string_t>& value);


protected:
    std::vector<utility::string_t> m_Included_segments;
    bool m_Included_segmentsIsSet;
    std::vector<utility::string_t> m_Excluded_segments;
    bool m_Excluded_segmentsIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_SegmentNotificationTarget_H_ */
