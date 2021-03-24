//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterStatePoseInfo.h
// Created: Wed Mar 10 19:08:15 2021
//

#ifndef FBGEN_CharacterStatePoseInfo_H
#define FBGEN_CharacterStatePoseInfo_H

#include "CharacterPoseType.h"
#include "SpeedModifierData.h"
#include "DataContainer.h"

class CharacterStatePoseInfo :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C560;
	}
	CharacterPoseType m_PoseType; // 0x10
	float m_Velocity; // 0x14
	float m_AccelerationGain; // 0x18
	float m_DecelerationGain; // 0x1c
	float m_DirectionChangeAccelerationGain; // 0x20
	float m_DirectionChangeThreshold; // 0x24
	float m_SprintGain; // 0x28
	float m_SprintMultiplier; // 0x2c
	SpeedModifierData m_SpeedModifier; // 0x30
	float m_ShallowWaterMultiplier; // 0x40
	unsigned char _0x44[0x4];
}; // size = 0x48

#endif // FBGEN_CharacterStatePoseInfo_H
