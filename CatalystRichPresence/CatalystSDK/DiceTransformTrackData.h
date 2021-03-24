//
// Generated with FrostbiteGen by Chod
// File: SDK\DiceTransformTrackData.h
// Created: Wed Mar 10 19:07:12 2021
//

#ifndef FBGEN_DiceTransformTrackData_H
#define FBGEN_DiceTransformTrackData_H

#include "Array.h"
#include "DiceTransformTrackBlendMode.h"
#include "GameObjectData.h"
#include "PropertyTrackBaseData.h"

class DiceTransformTrackData :
	public PropertyTrackBaseData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BF9D0;
	}
	Array<DiceTransformKeyframe> m_Keyframes; // 0x38
	DiceTransformTrackBlendMode m_BlendMode; // 0x40
	unsigned char _0x44[0x4];
	GameObjectData* m_TimelineEntityOwner; // 0x48
}; // size = 0x50

#endif // FBGEN_DiceTransformTrackData_H
