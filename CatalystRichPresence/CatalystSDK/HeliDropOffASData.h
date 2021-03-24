//
// Generated with FrostbiteGen by Chod
// File: SDK\HeliDropOffASData.h
// Created: Wed Mar 10 19:06:34 2021
//

#ifndef FBGEN_HeliDropOffASData_H
#define FBGEN_HeliDropOffASData_H

#include "ActionStationData.h"

class HeliDropOffASData :
	public ActionStationData // size = 0xb0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284F9A0;
	}
	float m_MaxContextualDistance; // 0xb0
	float m_MinContextualDistance; // 0xb4
	float m_MaxContextualAngle; // 0xb8
	float m_ApproachAltitude; // 0xbc
	float m_DropOffAltitude; // 0xc0
	bool m_ContextualActivation; // 0xc4
	unsigned char _0xc5[0xb];
}; // size = 0xd0

#endif // FBGEN_HeliDropOffASData_H
