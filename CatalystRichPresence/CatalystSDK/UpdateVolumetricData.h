//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateVolumetricData.h
// Created: Wed Mar 10 18:59:34 2021
//

#ifndef FBGEN_UpdateVolumetricData_H
#define FBGEN_UpdateVolumetricData_H

#include "ProcessorData.h"

class UpdateVolumetricData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DAEE0;
	}
	float m_Absorption; // 0x30
	bool m_HighQualityInjection; // 0x34
	unsigned char _0x35[0x3];
}; // size = 0x38

#endif // FBGEN_UpdateVolumetricData_H
