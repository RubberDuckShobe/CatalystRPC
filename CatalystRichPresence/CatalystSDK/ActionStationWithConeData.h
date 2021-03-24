//
// Generated with FrostbiteGen by Chod
// File: SDK\ActionStationWithConeData.h
// Created: Wed Mar 10 19:08:49 2021
//

#ifndef FBGEN_ActionStationWithConeData_H
#define FBGEN_ActionStationWithConeData_H

#include "ActionStationData.h"

class ActionStationWithConeData :
	public ActionStationData // size = 0xb0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7CF0;
	}
	float m_ConeLength; // 0xb0
	float m_ConeAngle; // 0xb4
	unsigned char _0xb8[0x8];
}; // size = 0xc0

#endif // FBGEN_ActionStationWithConeData_H
