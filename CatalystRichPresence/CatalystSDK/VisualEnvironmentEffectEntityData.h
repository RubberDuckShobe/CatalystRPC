//
// Generated with FrostbiteGen by Chod
// File: SDK\VisualEnvironmentEffectEntityData.h
// Created: Wed Mar 10 18:59:13 2021
//

#ifndef FBGEN_VisualEnvironmentEffectEntityData_H
#define FBGEN_VisualEnvironmentEffectEntityData_H

#include "Vec4.h"
#include "VisualEnvironmentBlueprint.h"
#include "ChildEffectEntityData.h"

class VisualEnvironmentEffectEntityData :
	public ChildEffectEntityData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427F70C0;
	}
	Vec4 m_LifetimeCurve; // 0xa0
	Vec4 m_CullAngleCurve; // 0xb0
	Vec4 m_CullDistanceCurve; // 0xc0
	VisualEnvironmentBlueprint* m_VisualEnvironment; // 0xd0
	float m_Lifetime; // 0xd8
	bool m_SampleOnStartOnly; // 0xdc
	bool m_HideOccluded; // 0xdd
	unsigned char _0xde[0x2];
}; // size = 0xe0

#endif // FBGEN_VisualEnvironmentEffectEntityData_H
