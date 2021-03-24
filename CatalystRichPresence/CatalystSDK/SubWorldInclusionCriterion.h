//
// Generated with FrostbiteGen by Chod
// File: SDK\SubWorldInclusionCriterion.h
// Created: Wed Mar 10 19:00:42 2021
//

#ifndef FBGEN_SubWorldInclusionCriterion_H
#define FBGEN_SubWorldInclusionCriterion_H

#include "Array.h"
#include "DataContainer.h"

class SubWorldInclusionCriterion :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EC5D0;
	}
	const char* m_Name; // 0x10
	Array<const char*> m_Options; // 0x18
}; // size = 0x20

#endif // FBGEN_SubWorldInclusionCriterion_H
