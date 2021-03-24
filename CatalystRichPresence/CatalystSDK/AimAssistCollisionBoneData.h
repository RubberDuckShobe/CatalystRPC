//
// Generated with FrostbiteGen by Chod
// File: SDK\AimAssistCollisionBoneData.h
// Created: Wed Mar 10 19:08:47 2021
//

#ifndef FBGEN_AimAssistCollisionBoneData_H
#define FBGEN_AimAssistCollisionBoneData_H

#include "AimAssistCollisionBoneSnapAimData.h"
#include "DataContainer.h"

class AimAssistCollisionBoneData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816860;
	}
	float m_LengthScale; // 0x10
	AimAssistCollisionBoneSnapAimData m_SnapAim; // 0x14
}; // size = 0x38

#endif // FBGEN_AimAssistCollisionBoneData_H
