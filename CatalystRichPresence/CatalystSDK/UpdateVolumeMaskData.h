//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateVolumeMaskData.h
// Created: Wed Mar 10 18:59:34 2021
//

#ifndef FBGEN_UpdateVolumeMaskData_H
#define FBGEN_UpdateVolumeMaskData_H

#include "VolumeMaskType.h"
#include "ProcessorData.h"

class UpdateVolumeMaskData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DAE80;
	}
	VolumeMaskType m_MaskType; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_UpdateVolumeMaskData_H
