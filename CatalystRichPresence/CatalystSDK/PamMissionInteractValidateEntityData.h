//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMissionInteractValidateEntityData.h
// Created: Wed Mar 10 19:04:23 2021
//

#ifndef FBGEN_PamMissionInteractValidateEntityData_H
#define FBGEN_PamMissionInteractValidateEntityData_H

#include "LinearTransform.h"
#include "EntityData.h"

class PamMissionInteractValidateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872D60;
	}
	unsigned char _0x18[0x8];
	LinearTransform m_MapMarkerTransform; // 0x20
	LinearTransform m_InteractTransform; // 0x60
}; // size = 0xa0

#endif // FBGEN_PamMissionInteractValidateEntityData_H
