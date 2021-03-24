//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundScopeSetupData.h
// Created: Wed Mar 10 19:01:10 2021
//

#ifndef FBGEN_SoundScopeSetupData_H
#define FBGEN_SoundScopeSetupData_H

#include "Array.h"
#include "DataContainer.h"

class SoundScopeSetupData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8280;
	}
	const char* m_Name; // 0x10
	Array<SoundScopeStrategyMapping> m_Mappings; // 0x18
}; // size = 0x20

#endif // FBGEN_SoundScopeSetupData_H
