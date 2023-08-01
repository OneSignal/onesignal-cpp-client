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
 * Filter.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_Filter_H_
#define COM_ONESIGNAL_CLIENT_MODEL_Filter_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Filter
    : public ModelBase
{
public:
    Filter();
    virtual ~Filter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Filter members

    /// <summary>
    /// Name of the field to use as the first operand in the filter expression.
    /// </summary>
    utility::string_t getField() const;
    bool fieldIsSet() const;
    void unsetField();

    void setField(const utility::string_t& value);

    /// <summary>
    /// If &#x60;field&#x60; is &#x60;tag&#x60;, this field is *required* to specify &#x60;key&#x60; inside the tags.
    /// </summary>
    utility::string_t getKey() const;
    bool keyIsSet() const;
    void unsetKey();

    void setKey(const utility::string_t& value);

    /// <summary>
    /// Constant value to use as the second operand in the filter expression. This value is *required* when the relation operator is a binary operator.
    /// </summary>
    utility::string_t getValue() const;
    bool valueIsSet() const;
    void unsetValue();

    void setValue(const utility::string_t& value);

    /// <summary>
    /// Operator of a filter expression.
    /// </summary>
    utility::string_t getRelation() const;
    bool relationIsSet() const;
    void unsetRelation();

    void setRelation(const utility::string_t& value);


protected:
    utility::string_t m_Field;
    bool m_FieldIsSet;
    utility::string_t m_Key;
    bool m_KeyIsSet;
    utility::string_t m_Value;
    bool m_ValueIsSet;
    utility::string_t m_Relation;
    bool m_RelationIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_Filter_H_ */
