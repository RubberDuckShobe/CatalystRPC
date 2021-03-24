//
// Generated with FrostbiteGen by Chod
// File: SDK\DriverComponentData.h
// Created: Wed Mar 10 19:07:08 2021
//

#ifndef FBGEN_DriverComponentData_H
#define FBGEN_DriverComponentData_H

#include "DriverSettings.h"
#include "GameComponentData.h"

class DriverComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811340;
	}
	float m_WantedSpeed; // 0x70
	unsigned char _0x74[0x4];
	DriverSettings* m_Settings; // 0x78
}; // size = 0x80

#endif // FBGEN_DriverComponentData_H
