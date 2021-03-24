//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIStarsWidgetData.h
// Created: Wed Mar 10 19:03:23 2021
//

#ifndef FBGEN_PamUIStarsWidgetData_H
#define FBGEN_PamUIStarsWidgetData_H

#include "Vec3.h"
#include "PamUILensItemWidgetOrientation.h"
#include "PamUIWidgetEntityData.h"

class PamUIStarsWidgetData :
	public PamUIWidgetEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288DAE0;
	}
	Vec3 m_Offset; // 0x90
	PamUILensItemWidgetOrientation m_Orientation; // 0xa0
	int m_StarCount; // 0xa4
	int m_MaxStarCount; // 0xa8
	unsigned char _0xac[0x4];
	const char* m_StarBitmapElementName; // 0xb0
	float m_EmptyOpacity; // 0xb8
	float m_BlinkSpeed; // 0xbc
	bool m_StarsBlinking; // 0xc0
	unsigned char _0xc1[0xf];
}; // size = 0xd0

#endif // FBGEN_PamUIStarsWidgetData_H
