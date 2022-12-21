/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.0.2
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOneSignalAPIClient/model/OutcomeData.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



OutcomeData::OutcomeData()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Value = 0;
    m_ValueIsSet = false;
    m_Aggregation = utility::conversions::to_string_t("");
    m_AggregationIsSet = false;
}

OutcomeData::~OutcomeData()
{
}

void OutcomeData::validate()
{
    // TODO: implement validation
}

web::json::value OutcomeData::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t(U("value"))] = ModelBase::toJson(m_Value);
    }
    if(m_AggregationIsSet)
    {
        val[utility::conversions::to_string_t(U("aggregation"))] = ModelBase::toJson(m_Aggregation);
    }

    return val;
}

bool OutcomeData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("value"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("value")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_setValue);
            setValue(refVal_setValue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("aggregation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("aggregation")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAggregation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAggregation);
            setAggregation(refVal_setAggregation);
        }
    }
    return ok;
}

void OutcomeData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("value")), m_Value));
    }
    if(m_AggregationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("aggregation")), m_Aggregation));
    }
}

bool OutcomeData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("value"))))
    {
        int32_t refVal_setValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("value"))), refVal_setValue );
        setValue(refVal_setValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("aggregation"))))
    {
        utility::string_t refVal_setAggregation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("aggregation"))), refVal_setAggregation );
        setAggregation(refVal_setAggregation);
    }
    return ok;
}

utility::string_t OutcomeData::getId() const
{
    return m_Id;
}

void OutcomeData::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool OutcomeData::idIsSet() const
{
    return m_IdIsSet;
}

void OutcomeData::unsetId()
{
    m_IdIsSet = false;
}
int32_t OutcomeData::getValue() const
{
    return m_Value;
}

void OutcomeData::setValue(int32_t value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool OutcomeData::valueIsSet() const
{
    return m_ValueIsSet;
}

void OutcomeData::unsetValue()
{
    m_ValueIsSet = false;
}
utility::string_t OutcomeData::getAggregation() const
{
    return m_Aggregation;
}

void OutcomeData::setAggregation(const utility::string_t& value)
{
    m_Aggregation = value;
    m_AggregationIsSet = true;
}

bool OutcomeData::aggregationIsSet() const
{
    return m_AggregationIsSet;
}

void OutcomeData::unsetAggregation()
{
    m_AggregationIsSet = false;
}
}
}
}
}


