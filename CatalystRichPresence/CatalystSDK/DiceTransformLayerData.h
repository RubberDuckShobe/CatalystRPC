//
// Generated with FrostbiteGen by Chod
// File: SDK\DiceTransformLayerData.h
// Created: Wed Mar 10 19:07:13 2021
//

#ifndef FBGEN_DiceTransformLayerData_H
#define FBGEN_DiceTransformLayerData_H

#include "DiceTransformTrackData.h"
#include "TransformLayerData.h"

class DiceTransformLayerData :
	public TransformLayerData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BF970;
	}
	DiceTransformTrackData* m_TransformationsTrack; // 0x38
}; // size = 0x40

#endif // FBGEN_DiceTransformLayerData_H
