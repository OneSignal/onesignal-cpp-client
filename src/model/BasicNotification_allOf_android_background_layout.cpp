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



#include "CppRestOneSignalAPIClient/model/BasicNotification_allOf_android_background_layout.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



BasicNotification_allOf_android_background_layout::BasicNotification_allOf_android_background_layout()
{
    m_Image = utility::conversions::to_string_t("");
    m_ImageIsSet = false;
    m_Headings_color = utility::conversions::to_string_t("");
    m_Headings_colorIsSet = false;
    m_Contents_color = utility::conversions::to_string_t("");
    m_Contents_colorIsSet = false;
}

BasicNotification_allOf_android_background_layout::~BasicNotification_allOf_android_background_layout()
{
}

void BasicNotification_allOf_android_background_layout::validate()
{
    // TODO: implement validation
}

web::json::value BasicNotification_allOf_android_background_layout::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ImageIsSet)
    {
        val[utility::conversions::to_string_t(U("image"))] = ModelBase::toJson(m_Image);
    }
    if(m_Headings_colorIsSet)
    {
        val[utility::conversions::to_string_t(U("headings_color"))] = ModelBase::toJson(m_Headings_color);
    }
    if(m_Contents_colorIsSet)
    {
        val[utility::conversions::to_string_t(U("contents_color"))] = ModelBase::toJson(m_Contents_color);
    }

    return val;
}

bool BasicNotification_allOf_android_background_layout::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("image"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("image")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setImage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImage);
            setImage(refVal_setImage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("headings_color"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("headings_color")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setHeadingsColor;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHeadingsColor);
            setHeadingsColor(refVal_setHeadingsColor);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("contents_color"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contents_color")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContentsColor;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContentsColor);
            setContentsColor(refVal_setContentsColor);
        }
    }
    return ok;
}

void BasicNotification_allOf_android_background_layout::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("image")), m_Image));
    }
    if(m_Headings_colorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("headings_color")), m_Headings_color));
    }
    if(m_Contents_colorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contents_color")), m_Contents_color));
    }
}

bool BasicNotification_allOf_android_background_layout::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("image"))))
    {
        utility::string_t refVal_setImage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("image"))), refVal_setImage );
        setImage(refVal_setImage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("headings_color"))))
    {
        utility::string_t refVal_setHeadingsColor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("headings_color"))), refVal_setHeadingsColor );
        setHeadingsColor(refVal_setHeadingsColor);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contents_color"))))
    {
        utility::string_t refVal_setContentsColor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contents_color"))), refVal_setContentsColor );
        setContentsColor(refVal_setContentsColor);
    }
    return ok;
}

utility::string_t BasicNotification_allOf_android_background_layout::getImage() const
{
    return m_Image;
}

void BasicNotification_allOf_android_background_layout::setImage(const utility::string_t& value)
{
    m_Image = value;
    m_ImageIsSet = true;
}

bool BasicNotification_allOf_android_background_layout::imageIsSet() const
{
    return m_ImageIsSet;
}

void BasicNotification_allOf_android_background_layout::unsetImage()
{
    m_ImageIsSet = false;
}
utility::string_t BasicNotification_allOf_android_background_layout::getHeadingsColor() const
{
    return m_Headings_color;
}

void BasicNotification_allOf_android_background_layout::setHeadingsColor(const utility::string_t& value)
{
    m_Headings_color = value;
    m_Headings_colorIsSet = true;
}

bool BasicNotification_allOf_android_background_layout::headingsColorIsSet() const
{
    return m_Headings_colorIsSet;
}

void BasicNotification_allOf_android_background_layout::unsetHeadings_color()
{
    m_Headings_colorIsSet = false;
}
utility::string_t BasicNotification_allOf_android_background_layout::getContentsColor() const
{
    return m_Contents_color;
}

void BasicNotification_allOf_android_background_layout::setContentsColor(const utility::string_t& value)
{
    m_Contents_color = value;
    m_Contents_colorIsSet = true;
}

bool BasicNotification_allOf_android_background_layout::contentsColorIsSet() const
{
    return m_Contents_colorIsSet;
}

void BasicNotification_allOf_android_background_layout::unsetContents_color()
{
    m_Contents_colorIsSet = false;
}
}
}
}
}


