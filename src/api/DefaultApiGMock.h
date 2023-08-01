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

#ifndef COM_ONESIGNAL_CLIENT_API_DefaultApiGMock_H_
#define COM_ONESIGNAL_CLIENT_API_DefaultApiGMock_H_

#include <gmock/gmock.h>

#include "DefaultApi.h"

namespace com {
namespace onesignal {
namespace client {
namespace api {

using namespace com::onesignal::client::model;


class  DefaultApiMock : public IDefaultApi
{
public:
    using Base = IDefaultApi;

    DefaultApiMock() = default;
    explicit DefaultApiMock( std::shared_ptr<ApiClient> apiClient ) { };
    ~DefaultApiMock() override = default;

    MOCK_METHOD3( beginLiveActivity, pplx::task<void> (
        utility::string_t appId,
        utility::string_t activityId,
        std::shared_ptr<BeginLiveActivityRequest> beginLiveActivityRequest
    ) );
    MOCK_METHOD2( cancelNotification, pplx::task<std::shared_ptr<CancelNotificationSuccessResponse>> (
        utility::string_t appId,
        utility::string_t notificationId
    ) );
    MOCK_METHOD1( createApp, pplx::task<std::shared_ptr<App>> (
        std::shared_ptr<App> app
    ) );
    MOCK_METHOD1( createNotification, pplx::task<std::shared_ptr<CreateNotificationSuccessResponse>> (
        std::shared_ptr<Notification> notification
    ) );
    MOCK_METHOD1( createPlayer, pplx::task<std::shared_ptr<CreatePlayerSuccessResponse>> (
        std::shared_ptr<Player> player
    ) );
    MOCK_METHOD2( createSegments, pplx::task<std::shared_ptr<CreateSegmentSuccessResponse>> (
        utility::string_t appId,
        boost::optional<std::shared_ptr<Segment>> segment
    ) );
    MOCK_METHOD4( createSubscription, pplx::task<std::shared_ptr<Inline_response_201>> (
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId,
        std::shared_ptr<CreateSubscriptionRequestBody> createSubscriptionRequestBody
    ) );
    MOCK_METHOD2( createUser, pplx::task<std::shared_ptr<User>> (
        utility::string_t appId,
        std::shared_ptr<User> user
    ) );
    MOCK_METHOD4( deleteAlias, pplx::task<std::shared_ptr<Inline_response_200>> (
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId,
        utility::string_t aliasLabelToDelete
    ) );
    MOCK_METHOD2( deletePlayer, pplx::task<std::shared_ptr<DeletePlayerSuccessResponse>> (
        utility::string_t appId,
        utility::string_t playerId
    ) );
    MOCK_METHOD2( deleteSegments, pplx::task<std::shared_ptr<DeleteSegmentSuccessResponse>> (
        utility::string_t appId,
        utility::string_t segmentId
    ) );
    MOCK_METHOD2( deleteSubscription, pplx::task<void> (
        utility::string_t appId,
        utility::string_t subscriptionId
    ) );
    MOCK_METHOD3( deleteUser, pplx::task<void> (
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId
    ) );
    MOCK_METHOD3( endLiveActivity, pplx::task<void> (
        utility::string_t appId,
        utility::string_t activityId,
        utility::string_t subscriptionId
    ) );
    MOCK_METHOD2( exportEvents, pplx::task<std::shared_ptr<ExportEventsSuccessResponse>> (
        utility::string_t notificationId,
        utility::string_t appId
    ) );
    MOCK_METHOD2( exportPlayers, pplx::task<std::shared_ptr<ExportPlayersSuccessResponse>> (
        utility::string_t appId,
        boost::optional<std::shared_ptr<Export_players_request_body>> exportPlayersRequestBody
    ) );
    MOCK_METHOD2( fetchAliases, pplx::task<std::shared_ptr<UserIdentityResponse>> (
        utility::string_t appId,
        utility::string_t subscriptionId
    ) );
    MOCK_METHOD3( fetchUser, pplx::task<std::shared_ptr<User>> (
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId
    ) );
    MOCK_METHOD3( fetchUserIdentity, pplx::task<std::shared_ptr<Inline_response_200>> (
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId
    ) );
    MOCK_METHOD1( getApp, pplx::task<std::shared_ptr<App>> (
        utility::string_t appId
    ) );
    MOCK_METHOD0( getApps, pplx::task<std::vector<std::shared_ptr<App>>> (
    ) );
    MOCK_METHOD2( getEligibleIams, pplx::task<std::shared_ptr<Inline_response_200_3>> (
        utility::string_t appId,
        utility::string_t subscriptionId
    ) );
    MOCK_METHOD2( getNotification, pplx::task<std::shared_ptr<NotificationWithMeta>> (
        utility::string_t appId,
        utility::string_t notificationId
    ) );
    MOCK_METHOD2( getNotificationHistory, pplx::task<std::shared_ptr<NotificationHistorySuccessResponse>> (
        utility::string_t notificationId,
        std::shared_ptr<Get_notification_request_body> getNotificationRequestBody
    ) );
    MOCK_METHOD4( getNotifications, pplx::task<std::shared_ptr<NotificationSlice>> (
        utility::string_t appId,
        boost::optional<int32_t> limit,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> kind
    ) );
    MOCK_METHOD6( getOutcomes, pplx::task<std::shared_ptr<OutcomesData>> (
        utility::string_t appId,
        utility::string_t outcomeNames,
        boost::optional<utility::string_t> outcomeNamesLeft_Square_BracketRight_Square_Bracket,
        boost::optional<utility::string_t> outcomeTimeRange,
        boost::optional<utility::string_t> outcomePlatforms,
        boost::optional<utility::string_t> outcomeAttribution
    ) );
    MOCK_METHOD3( getPlayer, pplx::task<std::shared_ptr<Player>> (
        utility::string_t appId,
        utility::string_t playerId,
        boost::optional<utility::string_t> emailAuthHash
    ) );
    MOCK_METHOD3( getPlayers, pplx::task<std::shared_ptr<PlayerSlice>> (
        utility::string_t appId,
        boost::optional<int32_t> limit,
        boost::optional<int32_t> offset
    ) );
    MOCK_METHOD4( identifyUserByAlias, pplx::task<std::shared_ptr<Inline_response_200>> (
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId,
        std::shared_ptr<UserIdentityRequestBody> userIdentityRequestBody
    ) );
    MOCK_METHOD3( identifyUserBySubscriptionId, pplx::task<std::shared_ptr<UserIdentityResponse>> (
        utility::string_t appId,
        utility::string_t subscriptionId,
        std::shared_ptr<UserIdentityRequestBody> userIdentityRequestBody
    ) );
    MOCK_METHOD3( transferSubscription, pplx::task<std::shared_ptr<UserIdentityResponse>> (
        utility::string_t appId,
        utility::string_t subscriptionId,
        std::shared_ptr<TransferSubscriptionRequestBody> transferSubscriptionRequestBody
    ) );
    MOCK_METHOD2( updateApp, pplx::task<std::shared_ptr<App>> (
        utility::string_t appId,
        std::shared_ptr<App> app
    ) );
    MOCK_METHOD3( updateLiveActivity, pplx::task<std::shared_ptr<UpdateLiveActivitySuccessResponse>> (
        utility::string_t appId,
        utility::string_t activityId,
        std::shared_ptr<UpdateLiveActivityRequest> updateLiveActivityRequest
    ) );
    MOCK_METHOD2( updatePlayer, pplx::task<std::shared_ptr<UpdatePlayerSuccessResponse>> (
        utility::string_t playerId,
        std::shared_ptr<Player> player
    ) );
    MOCK_METHOD3( updatePlayerTags, pplx::task<std::shared_ptr<UpdatePlayerTagsSuccessResponse>> (
        utility::string_t appId,
        utility::string_t externalUserId,
        boost::optional<std::shared_ptr<Update_player_tags_request_body>> updatePlayerTagsRequestBody
    ) );
    MOCK_METHOD3( updateSubscription, pplx::task<void> (
        utility::string_t appId,
        utility::string_t subscriptionId,
        std::shared_ptr<UpdateSubscriptionRequestBody> updateSubscriptionRequestBody
    ) );
    MOCK_METHOD4( updateUser, pplx::task<std::shared_ptr<Inline_response_202>> (
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId,
        std::shared_ptr<UpdateUserRequest> updateUserRequest
    ) );
};

}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_API_DefaultApiGMock_H_ */

