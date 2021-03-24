//
// Generated with FrostbiteGen by Chod
// File: SDK\FaceAnimationWaveMappings.h
// Created: Wed Mar 10 19:06:50 2021
//

#ifndef FBGEN_FaceAnimationWaveMappings_H
#define FBGEN_FaceAnimationWaveMappings_H

#include "AntRef.h"
#include "Array.h"
#include "DataContainer.h"

class FaceAnimationWaveMappings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280BF30;
	}
	AntRef m_AntAsset; // 0x10
	AntRef m_OnStartedTalking; // 0x24
	Array<FaceAnimationWaveMapping> m_Mappings; // 0x38
}; // size = 0x40

#endif // FBGEN_FaceAnimationWaveMappings_H
