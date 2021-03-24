//
// Generated with FrostbiteGen by Chod
// File: SDK\LandingGearLogicData.h
// Created: Wed Mar 10 19:06:21 2021
//

#ifndef FBGEN_LandingGearLogicData_H
#define FBGEN_LandingGearLogicData_H

#include "LandingGearConditionData.h"
#include "DataContainer.h"

class LandingGearLogicData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E0F0;
	}
	LandingGearConditionData m_RetractCondition; // 0x10
	LandingGearConditionData m_DeployCondition; // 0x1c
}; // size = 0x28

#endif // FBGEN_LandingGearLogicData_H
