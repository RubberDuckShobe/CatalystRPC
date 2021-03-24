//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayVFXEntityData.h
// Created: Wed Mar 10 19:03:06 2021
//

#ifndef FBGEN_PlayVFXEntityData_H
#define FBGEN_PlayVFXEntityData_H

#include "EffectBlueprint.h"
#include "VFXLocationControl.h"
#include "LinearTransform.h"
#include "EntityData.h"

class PlayVFXEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A970;
	}
	EffectBlueprint* m_VisualEffect; // 0x18
	VFXLocationControl m_EffectLocation; // 0x20
	VFXLocationControl m_LocationA; // 0x70
	VFXLocationControl m_LocationB; // 0xc0
	VFXLocationControl m_LocationC; // 0x110
	LinearTransform m_RawTransformEffectLocation; // 0x160
	LinearTransform m_RawTransformLocationA; // 0x1a0
	LinearTransform m_RawTransformLocationB; // 0x1e0
	LinearTransform m_RawTransformLocationC; // 0x220
}; // size = 0x260

#endif // FBGEN_PlayVFXEntityData_H
