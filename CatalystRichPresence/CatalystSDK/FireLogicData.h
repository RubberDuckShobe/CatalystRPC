//
// Generated with FrostbiteGen by Chod
// File: SDK\FireLogicData.h
// Created: Wed Mar 10 19:06:47 2021
//

#ifndef FBGEN_FireLogicData_H
#define FBGEN_FireLogicData_H

#include "HoldAndReleaseData.h"
#include "BoltActionData.h"
#include "RecoilData.h"
#include "ReloadLogic.h"
#include "ReloadType.h"
#include "FireLogicType.h"
#include "Array.h"
struct FireLogicData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D3E0;
	}
	HoldAndReleaseData m_HoldAndRelease; // 0x0
	BoltActionData m_BoltAction; // 0x1c
	RecoilData m_Recoil; // 0x2c
	int m_FireInputAction; // 0x50
	int m_ReloadInputAction; // 0x54
	int m_CycleFireModeInputAction; // 0x58
	float m_TriggerPullWeight; // 0x5c
	float m_RateOfFire; // 0x60
	float m_RateOfFireForBurst; // 0x64
	float m_ClientFireRateMultiplier; // 0x68
	float m_ReloadDelay; // 0x6c
	float m_PostReloadDelay; // 0x70
	float m_BridgeDelay; // 0x74
	float m_ReloadTime; // 0x78
	unsigned char _0x7c[0x4];
	Array<float> m_ReloadTimerArray; // 0x80
	float m_ReloadTimeBulletsLeft; // 0x88
	float m_ReloadThreshold; // 0x8c
	float m_PreFireDelay; // 0x90
	float m_AutomaticDelay; // 0x94
	ReloadLogic m_ReloadLogic; // 0x98
	ReloadType m_ReloadType; // 0x9c
	FireLogicType m_FireLogicType; // 0xa0
	unsigned char _0xa4[0x4];
	Array<FireLogicType> m_FireLogicTypeArray; // 0xa8
	bool m_CorrectedAutomaticFireReplication; // 0xb0
	bool m_HoldOffReloadUntilFireRelease; // 0xb1
	bool m_HoldOffReloadUntilZoomRelease; // 0xb2
	bool m_ForceReloadActionOnFireTrigger; // 0xb3
	bool m_AlwaysAutoReload; // 0xb4
	unsigned char _0xb5[0x3];
}; // size = 0xb8

#endif // FBGEN_FireLogicData_H
