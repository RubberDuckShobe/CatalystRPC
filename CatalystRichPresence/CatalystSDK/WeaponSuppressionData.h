//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponSuppressionData.h
// Created: Wed Mar 10 18:58:48 2021
//

#ifndef FBGEN_WeaponSuppressionData_H
#define FBGEN_WeaponSuppressionData_H

#include "DataContainer.h"

class WeaponSuppressionData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289DFA0;
	}
	float m_MaxMultiplier; // 0x10
	float m_MinMultiplier; // 0x14
	float m_MinDistance; // 0x18
	float m_MaxDistance; // 0x1c
}; // size = 0x20

#endif // FBGEN_WeaponSuppressionData_H
