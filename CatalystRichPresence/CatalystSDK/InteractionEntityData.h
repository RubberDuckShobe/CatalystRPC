//
// Generated with FrostbiteGen by Chod
// File: SDK\InteractionEntityData.h
// Created: Wed Mar 10 19:06:26 2021
//

#ifndef FBGEN_InteractionEntityData_H
#define FBGEN_InteractionEntityData_H

#include "SoundAsset.h"
#include "SpatialEntityData.h"

class InteractionEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810BC0;
	}
	float m_UseWithinRadius; // 0x60
	float m_UseWithinAngle; // 0x64
	float m_FacingInteractorAngle; // 0x68
	unsigned int m_MaxUses; // 0x6c
	float m_DisplayWithinRadius; // 0x70
	unsigned char _0x74[0x4];
	SoundAsset* m_PreInteractionSoundEffect; // 0x78
	bool m_TestIfOccluded; // 0x80
	bool m_AllowInteractionViaRemoteEntry; // 0x81
	bool m_UseDisplayWithinRadius; // 0x82
	bool m_Enabled; // 0x83
	unsigned char _0x84[0xc];
}; // size = 0x90

#endif // FBGEN_InteractionEntityData_H
