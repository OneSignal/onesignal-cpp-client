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

/*
 * ApiClient.h
 *
 * This is an API client responsible for stating the HTTP calls
 */

#ifndef COM_ONESIGNAL_CLIENT_API_ApiClient_H_
#define COM_ONESIGNAL_CLIENT_API_ApiClient_H_


#include "CppRestOneSignalAPIClient/ApiConfiguration.h"
#include "CppRestOneSignalAPIClient/ApiException.h"
#include "CppRestOneSignalAPIClient/IHttpBody.h"
#include "CppRestOneSignalAPIClient/HttpContent.h"

#if  defined (_WIN32) || defined (_WIN64)
#undef U
#endif

#include <cpprest/details/basic_types.h>
#include <cpprest/http_client.h>

#include <memory>
#include <vector>
#include <functional>

namespace com {
namespace onesignal {
namespace client {
namespace api {

using namespace com::onesignal::client::model;

class  ApiClient
{
public:
    ApiClient( std::shared_ptr<const ApiConfiguration> configuration = nullptr );
    virtual ~ApiClient();

    typedef std::function<void(web::http::status_code, const web::http::http_headers&)> ResponseHandlerType;

    const ResponseHandlerType& getResponseHandler() const;
    void setResponseHandler(const ResponseHandlerType& responseHandler);

    std::shared_ptr<const ApiConfiguration> getConfiguration() const;
    void setConfiguration(std::shared_ptr<const ApiConfiguration> configuration);

    static utility::string_t parameterToString(utility::string_t value);
    static utility::string_t parameterToString(int32_t value);
    static utility::string_t parameterToString(int64_t value);
    static utility::string_t parameterToString(float value);
    static utility::string_t parameterToString(double value);
    static utility::string_t parameterToString(const utility::datetime &value);
    static utility::string_t parameterToString(bool value);
    static std::shared_ptr<ApiConfiguration> getDefaultConfiguration();
    template<class T>
    static utility::string_t parameterToString(const std::vector<T>& value);
    template<class T>
    static utility::string_t parameterToString(const std::shared_ptr<T>& value);

    pplx::task<web::http::http_response> callApi(
        const utility::string_t& path,
        const utility::string_t& method,
        const std::map<utility::string_t, utility::string_t>& queryParams,
        const std::shared_ptr<IHttpBody> postBody,
        const std::map<utility::string_t, utility::string_t>& headerParams,
        const std::map<utility::string_t, utility::string_t>& formParams,
        const std::map<utility::string_t, std::shared_ptr<HttpContent>>& fileParams,
        const utility::string_t& contentType
    ) const;

protected:

    ResponseHandlerType m_ResponseHandler;
    std::shared_ptr<const ApiConfiguration> m_Configuration;
};

template<class T>
utility::string_t ApiClient::parameterToString(const std::vector<T>& value)
{
    utility::stringstream_t ss;

    for( size_t i = 0; i < value.size(); i++)
    {
        if( i > 0) ss << utility::conversions::to_string_t(", ");
        ss << ApiClient::parameterToString(value[i]);
    }

    return ss.str();
}

template<class T>
utility::string_t ApiClient::parameterToString(const std::shared_ptr<T>& value)
{
    return parameterToString(*value.get());
}


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_API_ApiClient_H_ */
