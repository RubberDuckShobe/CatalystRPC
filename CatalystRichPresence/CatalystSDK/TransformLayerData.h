//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformLayerData.h
// Created: Wed Mar 10 19:00:09 2021
//

#ifndef FBGEN_TransformLayerData_H
#define FBGEN_TransformLayerData_H

#include "FloatTrackData.h"
#include "LayeredTransform_BlendType.h"
#include "TimelineTrackData.h"

class TransformLayerData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283E470;
	}
	FloatTrackData* m_Weight; // 0x28
	LayeredTransform_BlendType m_Blendtype; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_TransformLayerData_H
