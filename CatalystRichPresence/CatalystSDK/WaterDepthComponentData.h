//
// Generated with FrostbiteGen by Chod
// File: SDK\WaterDepthComponentData.h
// Created: Wed Mar 10 18:58:54 2021
//

#ifndef FBGEN_WaterDepthComponentData_H
#define FBGEN_WaterDepthComponentData_H

#include "GameComponentData.h"

class WaterDepthComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428162C0;
	}
	unsigned int m_UpdateRate; // 0x70
	bool m_AutoStart; // 0x74
	bool m_ResetOnStop; // 0x75
	bool m_Enabled; // 0x76
	unsigned char _0x77[0x9];
}; // size = 0x80

#endif // FBGEN_WaterDepthComponentData_H
