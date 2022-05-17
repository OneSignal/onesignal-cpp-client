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



#include "CppRestOneSignalAPIClient/model/PlayerSlice.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



PlayerSlice::PlayerSlice()
{
    m_Total_count = 0;
    m_Total_countIsSet = false;
    m_Offset = 0;
    m_OffsetIsSet = false;
    m_Limit = 0;
    m_LimitIsSet = false;
    m_PlayersIsSet = false;
}

PlayerSlice::~PlayerSlice()
{
}

void PlayerSlice::validate()
{
    // TODO: implement validation
}

web::json::value PlayerSlice::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Total_countIsSet)
    {
        val[utility::conversions::to_string_t(U("total_count"))] = ModelBase::toJson(m_Total_count);
    }
    if(m_OffsetIsSet)
    {
        val[utility::conversions::to_string_t(U("offset"))] = ModelBase::toJson(m_Offset);
    }
    if(m_LimitIsSet)
    {
        val[utility::conversions::to_string_t(U("limit"))] = ModelBase::toJson(m_Limit);
    }
    if(m_PlayersIsSet)
    {
        val[utility::conversions::to_string_t(U("players"))] = ModelBase::toJson(m_Players);
    }

    return val;
}

bool PlayerSlice::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("total_count"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("total_count")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTotalCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTotalCount);
            setTotalCount(refVal_setTotalCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("offset"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("offset")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setOffset;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOffset);
            setOffset(refVal_setOffset);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("limit"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("limit")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setLimit;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLimit);
            setLimit(refVal_setLimit);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("players"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("players")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Player>> refVal_setPlayers;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPlayers);
            setPlayers(refVal_setPlayers);
        }
    }
    return ok;
}

void PlayerSlice::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Total_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("total_count")), m_Total_count));
    }
    if(m_OffsetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("offset")), m_Offset));
    }
    if(m_LimitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("limit")), m_Limit));
    }
    if(m_PlayersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("players")), m_Players));
    }
}

bool PlayerSlice::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("total_count"))))
    {
        int32_t refVal_setTotalCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("total_count"))), refVal_setTotalCount );
        setTotalCount(refVal_setTotalCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("offset"))))
    {
        int32_t refVal_setOffset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("offset"))), refVal_setOffset );
        setOffset(refVal_setOffset);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("limit"))))
    {
        int32_t refVal_setLimit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("limit"))), refVal_setLimit );
        setLimit(refVal_setLimit);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("players"))))
    {
        std::vector<std::shared_ptr<Player>> refVal_setPlayers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("players"))), refVal_setPlayers );
        setPlayers(refVal_setPlayers);
    }
    return ok;
}

int32_t PlayerSlice::getTotalCount() const
{
    return m_Total_count;
}

void PlayerSlice::setTotalCount(int32_t value)
{
    m_Total_count = value;
    m_Total_countIsSet = true;
}

bool PlayerSlice::totalCountIsSet() const
{
    return m_Total_countIsSet;
}

void PlayerSlice::unsetTotal_count()
{
    m_Total_countIsSet = false;
}
int32_t PlayerSlice::getOffset() const
{
    return m_Offset;
}

void PlayerSlice::setOffset(int32_t value)
{
    m_Offset = value;
    m_OffsetIsSet = true;
}

bool PlayerSlice::offsetIsSet() const
{
    return m_OffsetIsSet;
}

void PlayerSlice::unsetOffset()
{
    m_OffsetIsSet = false;
}
int32_t PlayerSlice::getLimit() const
{
    return m_Limit;
}

void PlayerSlice::setLimit(int32_t value)
{
    m_Limit = value;
    m_LimitIsSet = true;
}

bool PlayerSlice::limitIsSet() const
{
    return m_LimitIsSet;
}

void PlayerSlice::unsetLimit()
{
    m_LimitIsSet = false;
}
std::vector<std::shared_ptr<Player>>& PlayerSlice::getPlayers()
{
    return m_Players;
}

void PlayerSlice::setPlayers(const std::vector<std::shared_ptr<Player>>& value)
{
    m_Players = value;
    m_PlayersIsSet = true;
}

bool PlayerSlice::playersIsSet() const
{
    return m_PlayersIsSet;
}

void PlayerSlice::unsetPlayers()
{
    m_PlayersIsSet = false;
}
}
}
}
}


