//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementShapeFanEntityData.h
// Created: Wed Mar 10 19:03:33 2021
//

#ifndef FBGEN_PamUIElementShapeFanEntityData_H
#define FBGEN_PamUIElementShapeFanEntityData_H

#include "DiceUIVectorShapeAsset.h"
#include "PamUIShapeExpansion.h"
#include "PamUIShapeScaling.h"
#include "PamUIBlendMode.h"
#include "UIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementShapeFanEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428890E0;
	}
	float m_Radius; // 0x110
	float m_StartAngle; // 0x114
	float m_AngleStep; // 0x118
	int m_Count; // 0x11c
	DiceUIVectorShapeAsset* m_ShapeDefinition; // 0x120
	float m_RampWidth; // 0x128
	PamUIShapeExpansion m_ShapeExpansion; // 0x12c
	PamUIShapeScaling m_Scaling; // 0x130
	float m_ExpandScale; // 0x134
	float m_ExtraGeometry; // 0x138
	unsigned char _0x13c[0x4];
	PamUIBlendMode* m_BlendMode; // 0x140
	UIBlendMode m_CoreBlendMode; // 0x148
	bool m_ScreenSpaceRampWidth; // 0x14c
	unsigned char _0x14d[0x3];
}; // size = 0x150

#endif // FBGEN_PamUIElementShapeFanEntityData_H
