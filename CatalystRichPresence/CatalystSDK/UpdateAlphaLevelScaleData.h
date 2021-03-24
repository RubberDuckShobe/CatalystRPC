//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateAlphaLevelScaleData.h
// Created: Wed Mar 10 18:59:39 2021
//

#ifndef FBGEN_UpdateAlphaLevelScaleData_H
#define FBGEN_UpdateAlphaLevelScaleData_H

#include "ProcessorData.h"

class UpdateAlphaLevelScaleData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DB480;
	}
	float m_Exponent; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_UpdateAlphaLevelScaleData_H
