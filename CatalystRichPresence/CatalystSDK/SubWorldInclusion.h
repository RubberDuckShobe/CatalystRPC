//
// Generated with FrostbiteGen by Chod
// File: SDK\SubWorldInclusion.h
// Created: Wed Mar 10 19:00:42 2021
//

#ifndef FBGEN_SubWorldInclusion_H
#define FBGEN_SubWorldInclusion_H

#include "Array.h"
#include "Asset.h"

class SubWorldInclusion :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EC570;
	}
	Array<SubWorldInclusionCriterion*> m_Criteria; // 0x18
}; // size = 0x20

#endif // FBGEN_SubWorldInclusion_H
