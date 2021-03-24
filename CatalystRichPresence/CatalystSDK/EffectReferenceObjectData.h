//
// Generated with FrostbiteGen by Chod
// File: SDK\EffectReferenceObjectData.h
// Created: Wed Mar 10 19:07:02 2021
//

#ifndef FBGEN_EffectReferenceObjectData_H
#define FBGEN_EffectReferenceObjectData_H

#include "Array.h"
#include "SpatialReferenceObjectData.h"

class EffectReferenceObjectData :
	public SpatialReferenceObjectData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D7710;
	}
	Array<EffectParameter*> m_EffectParameters; // 0xa0
	bool m_AutoStart; // 0xa8
	bool m_AffectedByLightprobeVisibility; // 0xa9
	unsigned char _0xaa[0x6];
}; // size = 0xb0

#endif // FBGEN_EffectReferenceObjectData_H
