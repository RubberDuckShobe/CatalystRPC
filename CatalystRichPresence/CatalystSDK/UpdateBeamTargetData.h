//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateBeamTargetData.h
// Created: Wed Mar 10 18:59:39 2021
//

#ifndef FBGEN_UpdateBeamTargetData_H
#define FBGEN_UpdateBeamTargetData_H

#include "LocationSelection.h"
#include "ProcessorData.h"

class UpdateBeamTargetData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DB0C0;
	}
	LocationSelection m_Target; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_UpdateBeamTargetData_H
