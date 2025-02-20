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



#include "CppRestOneSignalAPIClient/model/Update_player_tags_request_body.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



Update_player_tags_request_body::Update_player_tags_request_body()
{
    m_TagsIsSet = false;
}

Update_player_tags_request_body::~Update_player_tags_request_body()
{
}

void Update_player_tags_request_body::validate()
{
    // TODO: implement validation
}

web::json::value Update_player_tags_request_body::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TagsIsSet)
    {
        val[utility::conversions::to_string_t(U("tags"))] = ModelBase::toJson(m_Tags);
    }

    return val;
}

bool Update_player_tags_request_body::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("tags"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tags")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setTags;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTags);
            setTags(refVal_setTags);
        }
    }
    return ok;
}

void Update_player_tags_request_body::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tags")), m_Tags));
    }
}

bool Update_player_tags_request_body::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("tags"))))
    {
        std::shared_ptr<Object> refVal_setTags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tags"))), refVal_setTags );
        setTags(refVal_setTags);
    }
    return ok;
}

std::shared_ptr<Object> Update_player_tags_request_body::getTags() const
{
    return m_Tags;
}

void Update_player_tags_request_body::setTags(const std::shared_ptr<Object>& value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}

bool Update_player_tags_request_body::tagsIsSet() const
{
    return m_TagsIsSet;
}

void Update_player_tags_request_body::unsetTags()
{
    m_TagsIsSet = false;
}
}
}
}
}


