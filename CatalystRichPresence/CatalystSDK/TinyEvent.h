//
// Generated with FrostbiteGen by Chod
// File: SDK\TinyEvent.h
// Created: Wed Mar 10 19:00:13 2021
//

#ifndef FBGEN_TinyEvent_H
#define FBGEN_TinyEvent_H

enum TinyEvent
{
	TinyEvent_AckTimeSyncDone = 0x1,
	TinyEvent_AckLevelLinked = 0x2,
	TinyEvent_AckLevelRestarted = 0x3,
	TinyEvent_AckEnterPatchRecvState = 0x4,
	TinyEvent_AckAuthentication = 0x5,
	TinyEvent_NackAuthentication = 0x6,
	TinyEvent_AckExitLevel = 0x7,
	TinyEvent_CmdLinkLevel = 0x8,
	TinyEvent_CmdEnterPatchRecvState = 0x9,
	TinyEvent_CmdExitLevel = 0xa,
	TinyEvent_CmdContinueLevel = 0xb,
};

#endif // FBGEN_TinyEvent_H
