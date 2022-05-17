/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.0.1
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Segment.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_Segment_H_
#define COM_ONESIGNAL_CLIENT_MODEL_Segment_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include "CppRestOneSignalAPIClient/model/FilterExpressions.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace onesignal {
namespace client {
namespace model {

class FilterExpressions;

/// <summary>
/// 
/// </summary>
class  Segment
    : public ModelBase
{
public:
    Segment();
    virtual ~Segment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Segment members

    /// <summary>
    /// UUID of the segment.  If left empty, it will be assigned automaticaly.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// Name of the segment.  You&#39;ll see this name on the Web UI.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Filter or operators the segment will have.  For a list of available filters with details, please see Send to Users Based on Filters.
    /// </summary>
    std::vector<std::shared_ptr<FilterExpressions>>& getFilters();
    bool filtersIsSet() const;
    void unsetFilters();

    void setFilters(const std::vector<std::shared_ptr<FilterExpressions>>& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::vector<std::shared_ptr<FilterExpressions>> m_Filters;
    bool m_FiltersIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_Segment_H_ */
