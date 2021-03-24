//
// Generated with FrostbiteGen by Chod
// File: SDK\SecureReason.h
// Created: Wed Mar 10 19:02:29 2021
//

#ifndef FBGEN_SecureReason_H
#define FBGEN_SecureReason_H

enum SecureReason
{
	SecureReason_Ok = 0x0,
	SecureReason_WrongProtocolVersion = 0x1,
	SecureReason_WrongTitleVersion = 0x2,
	SecureReason_ServerFull = 0x3,
	SecureReason_KickedOut = 0x4,
	SecureReason_Banned = 0x5,
	SecureReason_GenericError = 0x6,
	SecureReason_WrongPassword = 0x7,
	SecureReason_KickedOutDemoOver = 0x8,
	SecureReason_RankRestricted = 0x9,
	SecureReason_ConfigurationNotAllowed = 0xa,
	SecureReason_ServerReclaimed = 0xb,
	SecureReason_MissingContent = 0xc,
	SecureReason_NotVerified = 0xd,
	SecureReason_TimedOut = 0xe,
	SecureReason_ConnectFailed = 0xf,
	SecureReason_NoReply = 0x10,
	SecureReason_AcceptFailed = 0x11,
	SecureReason_MismatchingContent = 0x12,
	SecureReason_InteractivityTimeout = 0x13,
	SecureReason_KickedFromQueue = 0x14,
	SecureReason_TeamKills = 0x15,
	SecureReason_KickedByAdmin = 0x16,
	SecureReason_KickedViaPunkBuster = 0x17,
	SecureReason_KickedOutServerFull = 0x18,
	SecureReason_ESportsMatchStarting = 0x19,
	SecureReason_NotInESportsRosters = 0x1a,
	SecureReason_ESportsMatchEnding = 0x1b,
	SecureReason_VirtualServerExpired = 0x1c,
	SecureReason_VirtualServerRecreate = 0x1d,
	SecureReason_ESportsTeamFull = 0x1e,
	SecureReason_ESportsMatchAborted = 0x1f,
	SecureReason_ESportsMatchWalkover = 0x20,
	SecureReason_ESportsMatchWarmupTimedOut = 0x21,
	SecureReason_NotAllowedToSpectate = 0x22,
	SecureReason_NoSpectateSlotAvailable = 0x23,
	SecureReason_InvalidSpectateJoin = 0x24,
	SecureReason_KickedViaFairFight = 0x25,
	SecureReason_KickedCommanderOnLeave = 0x26,
	SecureReason_KickedCommanderAfterMutiny = 0x27,
	SecureReason_ServerMaintenance = 0x28,
	SecureReason_KickedViaShield = 0x29,
};

#endif // FBGEN_SecureReason_H
