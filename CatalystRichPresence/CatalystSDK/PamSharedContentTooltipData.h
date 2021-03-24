//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSharedContentTooltipData.h
// Created: Wed Mar 10 19:03:51 2021
//

#ifndef FBGEN_PamSharedContentTooltipData_H
#define FBGEN_PamSharedContentTooltipData_H

#include "LocalizedString.h"
#include "DiceUIVectorShapeAsset.h"
#include "DataContainer.h"

class PamSharedContentTooltipData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428806B0;
	}
	LocalizedString* m_LocalizedType; // 0x10
	LocalizedString* m_LocalizedTitle; // 0x18
	DiceUIVectorShapeAsset* m_Icon; // 0x20
	bool m_AllowTeleport; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_PamSharedContentTooltipData_H
