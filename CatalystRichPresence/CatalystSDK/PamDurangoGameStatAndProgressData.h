//
// Generated with FrostbiteGen by Chod
// File: SDK\PamDurangoGameStatAndProgressData.h
// Created: Wed Mar 10 19:04:41 2021
//

#ifndef FBGEN_PamDurangoGameStatAndProgressData_H
#define FBGEN_PamDurangoGameStatAndProgressData_H

#include "Array.h"
#include "PamPlayerInfoProgressionDescriptionAsset.h"
#include "DataContainerPolicyAsset.h"

class PamDurangoGameStatAndProgressData :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428807D0;
	}
	Array<PamDurangoGameStat> m_GameStats; // 0x18
	PamPlayerInfoProgressionDescriptionAsset* m_GameProgress; // 0x20
	float m_UpdateInterval; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_PamDurangoGameStatAndProgressData_H
