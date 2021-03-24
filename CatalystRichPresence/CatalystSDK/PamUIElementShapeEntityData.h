//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementShapeEntityData.h
// Created: Wed Mar 10 19:03:33 2021
//

#ifndef FBGEN_PamUIElementShapeEntityData_H
#define FBGEN_PamUIElementShapeEntityData_H

#include "DiceUIVectorShapeAsset.h"
#include "PamUIShapeExpansion.h"
#include "PamUIShapeScaling.h"
#include "PamUIBlendMode.h"
#include "UIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementShapeEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889140;
	}
	DiceUIVectorShapeAsset* m_ShapeDefinition; // 0x110
	float m_RampWidth; // 0x118
	PamUIShapeExpansion m_ShapeExpansion; // 0x11c
	PamUIShapeScaling m_Scaling; // 0x120
	float m_ExpandScale; // 0x124
	float m_ExtraGeometry; // 0x128
	unsigned char _0x12c[0x4];
	PamUIBlendMode* m_BlendMode; // 0x130
	UIBlendMode m_CoreBlendMode; // 0x138
	bool m_ScreenSpaceRampWidth; // 0x13c
	unsigned char _0x13d[0x3];
}; // size = 0x140

#endif // FBGEN_PamUIElementShapeEntityData_H
