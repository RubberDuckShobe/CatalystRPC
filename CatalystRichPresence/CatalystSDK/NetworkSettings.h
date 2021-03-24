//
// Generated with FrostbiteGen by Chod
// File: SDK\NetworkSettings.h
// Created: Wed Mar 10 19:05:34 2021
//

#ifndef FBGEN_NetworkSettings_H
#define FBGEN_NetworkSettings_H

#include "DataContainer.h"

class NetworkSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A130;
	}
	unsigned int m_ProtocolVersion; // 0x10
	unsigned char _0x14[0x4];
	const char* m_TitleId; // 0x18
	unsigned int m_ClientPort; // 0x20
	unsigned int m_ServerPort; // 0x24
	unsigned int m_MaxGhostCount; // 0x28
	unsigned int m_MaxClientToServerGhostCount; // 0x2c
	unsigned int m_MaxClientCount; // 0x30
	unsigned int m_MaxClientFrameSize; // 0x34
	unsigned int m_MaxServerFrameSize; // 0x38
	unsigned char _0x3c[0x4];
	const char* m_XlspAddress; // 0x40
	const char* m_ServerAddress; // 0x48
	const char* m_ClientConnectionDebugFilePrefix; // 0x50
	const char* m_ServerConnectionDebugFilePrefix; // 0x58
	float m_SinglePlayerTimeNudgeGhostFrequencyFactor; // 0x60
	float m_SinglePlayerTimeNudgeBias; // 0x64
	float m_SinglePlayerTimeNudge; // 0x68
	float m_SinglePlayerTimeNudgeSmoothingTime; // 0x6c
	float m_SinglePlayerLatencyFactor; // 0x70
	float m_MemorySocketTimeNudgeGhostFrequencyFactor; // 0x74
	float m_MemorySocketTimeNudgeBias; // 0x78
	float m_MemorySocketTimeNudge; // 0x7c
	float m_MemorySocketTimeNudgeSmoothingTime; // 0x80
	float m_MemorySocketLatencyFactor; // 0x84
	float m_LocalHostTimeNudgeGhostFrequencyFactor; // 0x88
	float m_LocalHostTimeNudgeBias; // 0x8c
	float m_LocalHostTimeNudge; // 0x90
	float m_LocalHostTimeNudgeSmoothingTime; // 0x94
	float m_LocalHostLatencyFactor; // 0x98
	float m_DefaultTimeNudgeGhostFrequencyFactor; // 0x9c
	float m_DefaultTimeNudgeBias; // 0xa0
	float m_DefaultTimeNudge; // 0xa4
	float m_DefaultTimeNudgeSmoothingTime; // 0xa8
	float m_DefaultLatencyFactor; // 0xac
	float m_ConnectTimeout; // 0xb0
	float m_PacketLossLogInterval; // 0xb4
	unsigned int m_MaxLocalPlayerCount; // 0xb8
	bool m_SinglePlayerUserFrequencyFactorOverride; // 0xbc
	bool m_SinglePlayerAutomaticTimeNudge; // 0xbd
	bool m_MemorySocketUserFrequencyFactorOverride; // 0xbe
	bool m_MemorySocketAutomaticTimeNudge; // 0xbf
	bool m_LocalHostUserFrequencyFactorOverride; // 0xc0
	bool m_LocalHostAutomaticTimeNudge; // 0xc1
	bool m_DefaultUserFrequencyFactorOverride; // 0xc2
	bool m_DefaultAutomaticTimeNudge; // 0xc3
	bool m_IncrementServerPortOnFail; // 0xc4
	bool m_UseFrameManager; // 0xc5
	bool m_TimeSyncEnabled; // 0xc6
	unsigned char _0xc7[0x1];
}; // size = 0xc8

#endif // FBGEN_NetworkSettings_H
