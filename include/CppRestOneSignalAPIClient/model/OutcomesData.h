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
 * OutcomesData.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_OutcomesData_H_
#define COM_ONESIGNAL_CLIENT_MODEL_OutcomesData_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include "CppRestOneSignalAPIClient/model/OutcomeData.h"
#include <vector>

namespace com {
namespace onesignal {
namespace client {
namespace model {

class OutcomeData;

/// <summary>
/// 
/// </summary>
class  OutcomesData
    : public ModelBase
{
public:
    OutcomesData();
    virtual ~OutcomesData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OutcomesData members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<OutcomeData>>& getOutcomes();
    bool outcomesIsSet() const;
    void unsetOutcomes();

    void setOutcomes(const std::vector<std::shared_ptr<OutcomeData>>& value);


protected:
    std::vector<std::shared_ptr<OutcomeData>> m_Outcomes;
    bool m_OutcomesIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_OutcomesData_H_ */
