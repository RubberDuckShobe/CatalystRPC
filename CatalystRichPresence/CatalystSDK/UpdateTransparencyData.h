//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateTransparencyData.h
// Created: Wed Mar 10 18:59:35 2021
//

#ifndef FBGEN_UpdateTransparencyData_H
#define FBGEN_UpdateTransparencyData_H

#include "ProcessorData.h"

class UpdateTransparencyData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DB6C0;
	}
	float m_CullThreshold; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_UpdateTransparencyData_H
