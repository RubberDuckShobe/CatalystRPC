//
// Generated with FrostbiteGen by Chod
// File: SDK\FloatCurveEntityData.h
// Created: Wed Mar 10 19:06:46 2021
//

#ifndef FBGEN_FloatCurveEntityData_H
#define FBGEN_FloatCurveEntityData_H

#include "Realm.h"
#include "AudioCurve.h"
#include "EntityData.h"

class FloatCurveEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5BD0;
	}
	Realm m_Realm; // 0x18
	float m_In; // 0x1c
	AudioCurve m_Curve; // 0x20
	bool m_OutputIntegral; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_FloatCurveEntityData_H
