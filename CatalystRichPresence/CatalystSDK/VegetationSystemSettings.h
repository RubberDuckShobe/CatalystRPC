//
// Generated with FrostbiteGen by Chod
// File: SDK\VegetationSystemSettings.h
// Created: Wed Mar 10 18:59:23 2021
//

#ifndef FBGEN_VegetationSystemSettings_H
#define FBGEN_VegetationSystemSettings_H

#include "DataContainer.h"

class VegetationSystemSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283FC00;
	}
	float m_MaxActiveDistance; // 0x10
	float m_MaxEffectDistance; // 0x14
	unsigned int m_MaxActiveBones; // 0x18
	float m_MaxWiggleDistance; // 0x1c
	int m_ForceShadowLod; // 0x20
	float m_SimulationEaseOutTime; // 0x24
	float m_TimeScale; // 0x28
	unsigned int m_JobCount; // 0x2c
	bool m_DestructionEnable; // 0x30
	bool m_UseShadowLodOffset; // 0x31
	bool m_ShadowMeshEnable; // 0x32
	bool m_DissolveEnable; // 0x33
	bool m_Enable; // 0x34
	bool m_EnableJobs; // 0x35
	bool m_DrawNodes; // 0x36
	bool m_DrawNodeIDs; // 0x37
	bool m_DrawNodeStiffness; // 0x38
	bool m_DrawEnable; // 0x39
	bool m_BatchDrawEnable; // 0x3a
	bool m_DrawNonSimulatedAsRigid; // 0x3b
	bool m_DrawActiveInstanceBoxesEnable; // 0x3c
	bool m_DrawEffectDebugInfoEnable; // 0x3d
	bool m_DrawDamageDebugInfoEnable; // 0x3e
	bool m_DrawStatsEnable; // 0x3f
	bool m_ProceduralAnimationEnable; // 0x40
	unsigned char _0x41[0x7];
}; // size = 0x48

#endif // FBGEN_VegetationSystemSettings_H
