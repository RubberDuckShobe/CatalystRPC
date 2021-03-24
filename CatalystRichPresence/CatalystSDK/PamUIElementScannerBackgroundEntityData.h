//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementScannerBackgroundEntityData.h
// Created: Wed Mar 10 19:03:33 2021
//

#ifndef FBGEN_PamUIElementScannerBackgroundEntityData_H
#define FBGEN_PamUIElementScannerBackgroundEntityData_H

#include "LinearTransform.h"
#include "PamUIBlendMode.h"
#include "UIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementScannerBackgroundEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888AE0;
	}
	LinearTransform m_PlayerTransform; // 0x110
	float m_LineWidth; // 0x150
	float m_SquareSize; // 0x154
	float m_MetersPerSquare; // 0x158
	float m_GridFuzz; // 0x15c
	float m_Zoom; // 0x160
	float m_Radius; // 0x164
	PamUIBlendMode* m_BlendMode; // 0x168
	UIBlendMode m_CoreBlendMode; // 0x170
	unsigned char _0x174[0xc];
}; // size = 0x180

#endif // FBGEN_PamUIElementScannerBackgroundEntityData_H
