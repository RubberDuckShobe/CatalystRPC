//
// Generated with FrostbiteGen by Chod
// File: SDK\AirResistanceData.h
// Created: Wed Mar 10 19:08:47 2021
//

#ifndef FBGEN_AirResistanceData_H
#define FBGEN_AirResistanceData_H

#include "ProcessorData.h"

class AirResistanceData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBB40;
	}
	float m_DragFactor; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_AirResistanceData_H
