//
// Generated with FrostbiteGen by Chod
// File: SDK\IrReverbEntityData.h
// Created: Wed Mar 10 19:06:25 2021
//

#ifndef FBGEN_IrReverbEntityData_H
#define FBGEN_IrReverbEntityData_H

#include "ImpulseResponseAsset.h"
#include "FadeCurveType.h"
#include "EntityData.h"

class IrReverbEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7AA0;
	}
	ImpulseResponseAsset* m_ImpulseResponse; // 0x18
	float m_Gain; // 0x20
	float m_Volume; // 0x24
	FadeCurveType m_FadeCurve; // 0x28
	bool m_IsDominant; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_IrReverbEntityData_H
