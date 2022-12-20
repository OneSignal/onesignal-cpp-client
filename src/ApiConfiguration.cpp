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

#include "CppRestOneSignalAPIClient/ApiConfiguration.h"

namespace com {
namespace onesignal {
namespace client {
namespace api {

ApiConfiguration::ApiConfiguration()
{
}

ApiConfiguration::~ApiConfiguration()
{
}

const web::http::client::http_client_config& ApiConfiguration::getHttpConfig() const
{
    return m_HttpConfig;
}

void ApiConfiguration::setHttpConfig( web::http::client::http_client_config& value )
{
    m_HttpConfig = value;
}

utility::string_t ApiConfiguration::getBaseUrl() const
{
    return m_BaseUrl;
}

void ApiConfiguration::setBaseUrl( const utility::string_t value )
{
    m_BaseUrl = value;
}

utility::string_t ApiConfiguration::getUserAgent() const
{
    return m_UserAgent;
}

void ApiConfiguration::setUserAgent( const utility::string_t value )
{
    m_UserAgent = value;
}

std::map<utility::string_t, utility::string_t>& ApiConfiguration::getDefaultHeaders()
{
    return m_DefaultHeaders;
}

const std::map<utility::string_t, utility::string_t>& ApiConfiguration::getDefaultHeaders() const
{
    return m_DefaultHeaders;
}

utility::string_t ApiConfiguration::getApiKey( const utility::string_t& prefix) const
{
    auto result = m_ApiKeys.find(prefix);
    if( result != m_ApiKeys.end() )
    {
        return result->second;
    }
    return utility::conversions::to_string_t("");
}

void ApiConfiguration::setApiKey( const utility::string_t& prefix, const utility::string_t& apiKey )
{
    m_ApiKeys[prefix] = apiKey;
}

utility::string_t ApiConfiguration::getBearerToken( const utility::string_t& prefix) const
{
    auto result = m_BearerTokens.find(prefix);
    if( result != m_BearerTokens.end() )
    {
        return result->second;
    }
    return utility::conversions::to_string_t("");
}

void ApiConfiguration::setBearerToken( const utility::string_t& prefix, const utility::string_t& bearerToken )
{
    m_BearerTokens[prefix] = bearerToken;
}

void ApiConfiguration::setAppKeyToken( const utility::string_t& bearerToken )
{
    setBearerToken("app_key", bearerToken);
}
void ApiConfiguration::setUserKeyToken( const utility::string_t& bearerToken )
{
    setBearerToken("user_key", bearerToken);
}


}
}
}
}
