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



#include "CppRestOneSignalAPIClient/model/Operator.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



Operator::Operator()
{
    m_r_operator = utility::conversions::to_string_t("");
    m_r_operatorIsSet = false;
}

Operator::~Operator()
{
}

void Operator::validate()
{
    // TODO: implement validation
}

web::json::value Operator::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_r_operatorIsSet)
    {
        val[utility::conversions::to_string_t(U("operator"))] = ModelBase::toJson(m_r_operator);
    }

    return val;
}

bool Operator::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("operator"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("operator")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setROperator;
            ok &= ModelBase::fromJson(fieldValue, refVal_setROperator);
            setROperator(refVal_setROperator);
        }
    }
    return ok;
}

void Operator::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_r_operatorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("operator")), m_r_operator));
    }
}

bool Operator::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("operator"))))
    {
        utility::string_t refVal_setROperator;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("operator"))), refVal_setROperator );
        setROperator(refVal_setROperator);
    }
    return ok;
}

utility::string_t Operator::getROperator() const
{
    return m_r_operator;
}

void Operator::setROperator(const utility::string_t& value)
{
    m_r_operator = value;
    m_r_operatorIsSet = true;
}

bool Operator::rOperatorIsSet() const
{
    return m_r_operatorIsSet;
}

void Operator::unsetr_operator()
{
    m_r_operatorIsSet = false;
}
}
}
}
}


