//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIDivisionShowcaseProviderEntityData.h
// Created: Wed Mar 10 19:03:38 2021
//

#ifndef FBGEN_PamUIDivisionShowcaseProviderEntityData_H
#define FBGEN_PamUIDivisionShowcaseProviderEntityData_H

#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamUIDivisionShowcaseProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889B60;
	}
	float m_SmallSize; // 0x20
	float m_SmallWidthPadding; // 0x24
	float m_SmallHeightPadding; // 0x28
	float m_LargeSize; // 0x2c
	float m_LargeWidthPadding; // 0x30
	float m_LargeHeightPadding; // 0x34
	int m_PlayerDivision; // 0x38
	unsigned char _0x3c[0x4];
	const char* m_PlayerDivisionTextureId; // 0x40
}; // size = 0x48

#endif // FBGEN_PamUIDivisionShowcaseProviderEntityData_H
