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



#include "CppRestOneSignalAPIClient/model/SegmentNotificationTarget.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



SegmentNotificationTarget::SegmentNotificationTarget()
{
    m_Included_segmentsIsSet = false;
    m_Excluded_segmentsIsSet = false;
}

SegmentNotificationTarget::~SegmentNotificationTarget()
{
}

void SegmentNotificationTarget::validate()
{
    // TODO: implement validation
}

web::json::value SegmentNotificationTarget::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Included_segmentsIsSet)
    {
        val[utility::conversions::to_string_t(U("included_segments"))] = ModelBase::toJson(m_Included_segments);
    }
    if(m_Excluded_segmentsIsSet)
    {
        val[utility::conversions::to_string_t(U("excluded_segments"))] = ModelBase::toJson(m_Excluded_segments);
    }

    return val;
}

bool SegmentNotificationTarget::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("included_segments"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("included_segments")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludedSegments;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludedSegments);
            setIncludedSegments(refVal_setIncludedSegments);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("excluded_segments"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("excluded_segments")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setExcludedSegments;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExcludedSegments);
            setExcludedSegments(refVal_setExcludedSegments);
        }
    }
    return ok;
}

void SegmentNotificationTarget::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Included_segmentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("included_segments")), m_Included_segments));
    }
    if(m_Excluded_segmentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("excluded_segments")), m_Excluded_segments));
    }
}

bool SegmentNotificationTarget::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("included_segments"))))
    {
        std::vector<utility::string_t> refVal_setIncludedSegments;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("included_segments"))), refVal_setIncludedSegments );
        setIncludedSegments(refVal_setIncludedSegments);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("excluded_segments"))))
    {
        std::vector<utility::string_t> refVal_setExcludedSegments;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("excluded_segments"))), refVal_setExcludedSegments );
        setExcludedSegments(refVal_setExcludedSegments);
    }
    return ok;
}

std::vector<utility::string_t>& SegmentNotificationTarget::getIncludedSegments()
{
    return m_Included_segments;
}

void SegmentNotificationTarget::setIncludedSegments(const std::vector<utility::string_t>& value)
{
    m_Included_segments = value;
    m_Included_segmentsIsSet = true;
}

bool SegmentNotificationTarget::includedSegmentsIsSet() const
{
    return m_Included_segmentsIsSet;
}

void SegmentNotificationTarget::unsetIncluded_segments()
{
    m_Included_segmentsIsSet = false;
}
std::vector<utility::string_t>& SegmentNotificationTarget::getExcludedSegments()
{
    return m_Excluded_segments;
}

void SegmentNotificationTarget::setExcludedSegments(const std::vector<utility::string_t>& value)
{
    m_Excluded_segments = value;
    m_Excluded_segmentsIsSet = true;
}

bool SegmentNotificationTarget::excludedSegmentsIsSet() const
{
    return m_Excluded_segmentsIsSet;
}

void SegmentNotificationTarget::unsetExcluded_segments()
{
    m_Excluded_segmentsIsSet = false;
}
}
}
}
}


