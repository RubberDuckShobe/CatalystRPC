//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateAlphaLevelMaxData.h
// Created: Wed Mar 10 18:59:40 2021
//

#ifndef FBGEN_UpdateAlphaLevelMaxData_H
#define FBGEN_UpdateAlphaLevelMaxData_H

#include "ProcessorData.h"

class UpdateAlphaLevelMaxData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DB4E0;
	}
	float m_MaxLevel; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_UpdateAlphaLevelMaxData_H
