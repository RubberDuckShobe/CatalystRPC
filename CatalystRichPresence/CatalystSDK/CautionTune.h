//
// Generated with FrostbiteGen by Chod
// File: SDK\CautionTune.h
// Created: Wed Mar 10 19:08:18 2021
//

#ifndef FBGEN_CautionTune_H
#define FBGEN_CautionTune_H

#include "Asset.h"

class CautionTune :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142829A90;
	}
	float m_speedX; // 0x18
	float m_tightTurnDegrees; // 0x1c
}; // size = 0x20

#endif // FBGEN_CautionTune_H
