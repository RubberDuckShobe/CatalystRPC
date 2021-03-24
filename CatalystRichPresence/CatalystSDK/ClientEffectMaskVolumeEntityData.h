//
// Generated with FrostbiteGen by Chod
// File: SDK\ClientEffectMaskVolumeEntityData.h
// Created: Wed Mar 10 19:08:01 2021
//

#ifndef FBGEN_ClientEffectMaskVolumeEntityData_H
#define FBGEN_ClientEffectMaskVolumeEntityData_H

#include "Vec4.h"
#include "EntityData.h"

class ClientEffectMaskVolumeEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810B00;
	}
	float m_LifeTimeInSeconds; // 0x18
	unsigned char _0x1c[0x4];
	Vec4 m_ApplyEffectCurve; // 0x20
	float m_UpdatePeriodInSeconds; // 0x30
	float m_Radius; // 0x34
	unsigned char _0x38[0x8];
}; // size = 0x40

#endif // FBGEN_ClientEffectMaskVolumeEntityData_H
