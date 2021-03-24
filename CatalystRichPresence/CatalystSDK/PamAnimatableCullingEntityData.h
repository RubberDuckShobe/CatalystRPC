//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAnimatableCullingEntityData.h
// Created: Wed Mar 10 19:05:08 2021
//

#ifndef FBGEN_PamAnimatableCullingEntityData_H
#define FBGEN_PamAnimatableCullingEntityData_H

#include "PamAnimatableCullingAntBinding.h"
#include "EntityData.h"

class PamAnimatableCullingEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286BA70;
	}
	float m_DistanceThreshold; // 0x18
	PamAnimatableCullingAntBinding m_AnimatableCullingAntBinding; // 0x1c
	bool m_UseCharacterCamera; // 0x30
	bool m_Enabled; // 0x31
	bool m_ForceDisableCulling; // 0x32
	bool m_Visible; // 0x33
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_PamAnimatableCullingEntityData_H
