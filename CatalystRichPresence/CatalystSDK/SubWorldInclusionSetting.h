//
// Generated with FrostbiteGen by Chod
// File: SDK\SubWorldInclusionSetting.h
// Created: Wed Mar 10 19:00:42 2021
//

#ifndef FBGEN_SubWorldInclusionSetting_H
#define FBGEN_SubWorldInclusionSetting_H

#include "SubWorldInclusionCriterion.h"
#include "Array.h"
#include "DataContainer.h"

class SubWorldInclusionSetting :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EC510;
	}
	SubWorldInclusionCriterion* m_Criterion; // 0x10
	Array<const char*> m_EnabledOptions; // 0x18
}; // size = 0x20

#endif // FBGEN_SubWorldInclusionSetting_H
