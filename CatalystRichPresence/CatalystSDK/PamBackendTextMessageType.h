//
// Generated with FrostbiteGen by Chod
// File: SDK\PamBackendTextMessageType.h
// Created: Wed Mar 10 19:05:06 2021
//

#ifndef FBGEN_PamBackendTextMessageType_H
#define FBGEN_PamBackendTextMessageType_H

enum PamBackendTextMessageType
{
	PamBackendTextMessageType_MIN = 0x0,
	PamBackendTextMessageType_PushNotification = 0x10000,
	PamBackendTextMessageType_PushNotificationPlayerInfo = 0x10001,
	PamBackendTextMessageType_PushNotificationPlayerTagUpdate = 0x10002,
	PamBackendTextMessageType_PushNotificationBookmarkUpdate = 0x10003,
	PamBackendTextMessageType_PushNotificationRefreshNamedChallengeLeaderboard = 0x10004,
	PamBackendTextMessageType_PushNotificationPublishStatusUpdate = 0x10005,
	PamBackendTextMessageType_PushNotificationUgcDeleted = 0x10006,
	PamBackendTextMessageType_PushNotificationUgcRenamed = 0x10007,
	PamBackendTextMessageType_PushNotificationFollowedChanged = 0x10008,
	PamBackendTextMessageType_Event = 0x20000,
	PamBackendTextMessageType_EventCreatedSharedContent = 0x20001,
	PamBackendTextMessageType_EventNewRecordNamedChallenge = 0x20002,
	PamBackendTextMessageType_EventNewRecordSharedContent = 0x20003,
	PamBackendTextMessageType_EventFinishedSharedContent = 0x20004,
};

#endif // FBGEN_PamBackendTextMessageType_H
