//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundAreaEntityData.h
// Created: Wed Mar 10 19:01:19 2021
//

#ifndef FBGEN_SoundAreaEntityData_H
#define FBGEN_SoundAreaEntityData_H

#include "SoundAsset.h"
#include "BigWorldSettingsAsset.h"
#include "FadeCurveType.h"
#include "EntityData.h"

class SoundAreaEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810E00;
	}
	SoundAsset* m_Sound; // 0x18
	BigWorldSettingsAsset* m_BigWorld; // 0x20
	float m_PerimeterSize; // 0x28
	float m_RelevanceMultiplier; // 0x2c
	float m_MinRelevanceBudget; // 0x30
	FadeCurveType m_RelevanceFalloff; // 0x34
	float m_Priority; // 0x38
	int m_AreaType; // 0x3c
	bool m_EnableOnCreation; // 0x40
	bool m_UseLegacyBehavior; // 0x41
	bool m_FaceListener; // 0x42
	bool m_IgnoreVerticalPerimeter; // 0x43
	unsigned char _0x44[0x4];
}; // size = 0x48

#endif // FBGEN_SoundAreaEntityData_H
