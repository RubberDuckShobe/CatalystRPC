//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSpatialEntryInputTriggerEntityData.h
// Created: Wed Mar 10 19:03:48 2021
//

#ifndef FBGEN_PamSpatialEntryInputTriggerEntityData_H
#define FBGEN_PamSpatialEntryInputTriggerEntityData_H

#include "Vec3.h"
#include "Array.h"
#include "SpatialEntityData.h"

class PamSpatialEntryInputTriggerEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CF60;
	}
	Vec3 m_OffsetToObjectFollow; // 0x60
	Array<PamEntryInputTriggerInfo> m_Triggers; // 0x70
	float m_LookAtRadius; // 0x78
	float m_LookAtFov; // 0x7c
	float m_MaxInteractDistance; // 0x80
	float m_MaxVisibleToPlayerDistance; // 0x84
	float m_InteractableSize; // 0x88
	float m_MustStandWithinThisFov; // 0x8c
	int m_DebugCategory; // 0x90
	bool m_Enabled; // 0x94
	bool m_ForceFocused; // 0x95
	bool m_LockFocusOnHoldDown; // 0x96
	bool m_DisableOnTrigger; // 0x97
	bool m_DisableOnRelease; // 0x98
	bool m_DisableOnHoldDown; // 0x99
	bool m_AlwaysInteractableWhenInReach; // 0x9a
	bool m_CheckOcclusion; // 0x9b
	bool m_IgnoreSeeThroughMaterials; // 0x9c
	bool m_AutoDescriptionOn; // 0x9d
	unsigned char _0x9e[0x2];
}; // size = 0xa0

#endif // FBGEN_PamSpatialEntryInputTriggerEntityData_H
