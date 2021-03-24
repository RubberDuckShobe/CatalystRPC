//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengeEntityData.h
// Created: Wed Mar 10 19:04:20 2021
//

#ifndef FBGEN_PamNamedChallengeEntityData_H
#define FBGEN_PamNamedChallengeEntityData_H

#include "Vec3.h"
#include "PamNamedChallengeTypeData.h"
#include "SpatialEntityData.h"

class PamNamedChallengeEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852A60;
	}
	Vec3 m_StickyIconOffset; // 0x60
	int m_StarsBlinkningOffset; // 0x70
	unsigned char _0x74[0x4];
	PamNamedChallengeTypeData* m_ChallengeType; // 0x78
	float m_StickyIconAlpha; // 0x80
	unsigned char _0x84[0xc];
}; // size = 0x90

#endif // FBGEN_PamNamedChallengeEntityData_H
