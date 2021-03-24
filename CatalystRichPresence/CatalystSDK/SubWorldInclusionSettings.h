//
// Generated with FrostbiteGen by Chod
// File: SDK\SubWorldInclusionSettings.h
// Created: Wed Mar 10 19:00:42 2021
//

#ifndef FBGEN_SubWorldInclusionSettings_H
#define FBGEN_SubWorldInclusionSettings_H

#include "Array.h"
#include "DataContainer.h"

class SubWorldInclusionSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EC4B0;
	}
	Array<SubWorldInclusionSetting*> m_Settings; // 0x10
}; // size = 0x18

#endif // FBGEN_SubWorldInclusionSettings_H
