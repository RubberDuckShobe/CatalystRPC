//
// Generated with FrostbiteGen by Chod
// File: SDK\ClientState.h
// Created: Wed Mar 10 19:07:48 2021
//

#ifndef FBGEN_ClientState_H
#define FBGEN_ClientState_H

enum ClientState
{
	ClientState_WaitingForStaticBundleLoad = 0x0,
	ClientState_LoadProfileOptions = 0x1,
	ClientState_LostConnection = 0x2,
	ClientState_WaitingForUnload = 0x3,
	ClientState_Startup = 0x4,
	ClientState_StartServer = 0x5,
	ClientState_WaitingForLevel = 0x6,
	ClientState_StartLoadingLevel = 0x7,
	ClientState_WaitingForLevelLoaded = 0x8,
	ClientState_WaitingForLevelLink = 0x9,
	ClientState_LevelLinked = 0xa,
	ClientState_WaitingForGhosts = 0xb,
	ClientState_Ingame = 0xc,
	ClientState_LeaveIngame = 0xd,
	ClientState_ConnectToServer = 0xe,
	ClientState_ShuttingDown = 0xf,
	ClientState_Shutdown = 0x10,
	ClientState_None = 0x11,
};

#endif // FBGEN_ClientState_H
