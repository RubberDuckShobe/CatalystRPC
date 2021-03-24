//
// Generated with FrostbiteGen by Chod
// File: SDK\ScaleTransformLayerData.h
// Created: Wed Mar 10 19:02:31 2021
//

#ifndef FBGEN_ScaleTransformLayerData_H
#define FBGEN_ScaleTransformLayerData_H

#include "FloatTrackData.h"
#include "TransformLayerData.h"

class ScaleTransformLayerData :
	public TransformLayerData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283BD50;
	}
	FloatTrackData* m_ScaleX; // 0x38
	FloatTrackData* m_ScaleY; // 0x40
	FloatTrackData* m_ScaleZ; // 0x48
	bool m_IsUniform; // 0x50
	unsigned char _0x51[0x7];
}; // size = 0x58

#endif // FBGEN_ScaleTransformLayerData_H
