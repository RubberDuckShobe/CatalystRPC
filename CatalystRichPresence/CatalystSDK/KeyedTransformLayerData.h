//
// Generated with FrostbiteGen by Chod
// File: SDK\KeyedTransformLayerData.h
// Created: Wed Mar 10 19:06:23 2021
//

#ifndef FBGEN_KeyedTransformLayerData_H
#define FBGEN_KeyedTransformLayerData_H

#include "InfinityType.h"
#include "FloatTrackData.h"
#include "Array.h"
#include "TransformLayerData.h"

class KeyedTransformLayerData :
	public TransformLayerData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283BCF0;
	}
	InfinityType m_PreInfinityForMinRotation; // 0x38
	InfinityType m_PostInfinityForMinRotation; // 0x3c
	FloatTrackData* m_TranslationX; // 0x40
	FloatTrackData* m_TranslationY; // 0x48
	FloatTrackData* m_TranslationZ; // 0x50
	FloatTrackData* m_RotationX; // 0x58
	FloatTrackData* m_RotationY; // 0x60
	FloatTrackData* m_RotationZ; // 0x68
	Array<QuatKeyframe> m_QuatKeyframes; // 0x70
	bool m_ForceMinimumRotationPathBetweenKeys; // 0x78
	unsigned char _0x79[0x7];
}; // size = 0x80

#endif // FBGEN_KeyedTransformLayerData_H
