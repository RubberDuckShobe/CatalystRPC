//
// Generated with FrostbiteGen by Chod
// File: SDK\DestructionVolumeComponentData.h
// Created: Wed Mar 10 19:07:13 2021
//

#ifndef FBGEN_DestructionVolumeComponentData_H
#define FBGEN_DestructionVolumeComponentData_H

#include "DestructionVolumeData.h"
#include "GameComponentData.h"

class DestructionVolumeComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842A30;
	}
	DestructionVolumeData* m_DestructionVolumeData; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_DestructionVolumeComponentData_H
