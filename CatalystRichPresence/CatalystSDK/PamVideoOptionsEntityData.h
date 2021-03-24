//
// Generated with FrostbiteGen by Chod
// File: SDK\PamVideoOptionsEntityData.h
// Created: Wed Mar 10 19:03:20 2021
//

#ifndef FBGEN_PamVideoOptionsEntityData_H
#define FBGEN_PamVideoOptionsEntityData_H

#include "ProfileOptionData.h"
#include "Vec2.h"
#include "EntityData.h"

class PamVideoOptionsEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142879320;
	}
	ProfileOptionData* m_ResolutionWidthOption; // 0x18
	ProfileOptionData* m_ResolutionHeightOption; // 0x20
	ProfileOptionData* m_RefreshRateOption; // 0x28
	ProfileOptionData* m_SelectedScreenOption; // 0x30
	Vec2 m_MinResolution; // 0x38
	int m_OverallQuality; // 0x40
	int m_SelectedScreen; // 0x44
	int m_ResolutionWidth; // 0x48
	int m_ResolutionHeight; // 0x4c
	float m_RefreshRate; // 0x50
	unsigned char _0x54[0x4];
}; // size = 0x58

#endif // FBGEN_PamVideoOptionsEntityData_H
