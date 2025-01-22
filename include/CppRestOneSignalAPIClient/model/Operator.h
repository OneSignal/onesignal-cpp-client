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

/*
 * Operator.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_Operator_H_
#define COM_ONESIGNAL_CLIENT_MODEL_Operator_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Operator
    : public ModelBase
{
public:
    Operator();
    virtual ~Operator();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Operator members

    /// <summary>
    /// Strictly, this must be either &#x60;\&quot;OR\&quot;&#x60;, or &#x60;\&quot;AND\&quot;&#x60;.  It can be used to compose Filters as part of a Filters object.
    /// </summary>
    utility::string_t getROperator() const;
    bool rOperatorIsSet() const;
    void unsetr_operator();

    void setROperator(const utility::string_t& value);


protected:
    utility::string_t m_r_operator;
    bool m_r_operatorIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_Operator_H_ */
