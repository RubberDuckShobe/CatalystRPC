//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalWindForceSphereComponentData.h
// Created: Wed Mar 10 19:06:09 2021
//

#ifndef FBGEN_LocalWindForceSphereComponentData_H
#define FBGEN_LocalWindForceSphereComponentData_H

#include "LocalWindForceComponentBaseData.h"

class LocalWindForceSphereComponentData :
	public LocalWindForceComponentBaseData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EAC20;
	}
	float m_Radius; // 0x90
	unsigned char _0x94[0xc];
}; // size = 0xa0

#endif // FBGEN_LocalWindForceSphereComponentData_H
