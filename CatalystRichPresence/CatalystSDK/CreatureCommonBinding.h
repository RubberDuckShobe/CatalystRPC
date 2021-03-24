//
// Generated with FrostbiteGen by Chod
// File: SDK\CreatureCommonBinding.h
// Created: Wed Mar 10 19:07:29 2021
//

#ifndef FBGEN_CreatureCommonBinding_H
#define FBGEN_CreatureCommonBinding_H

#include "AntRef.h"
#include "Array.h"
struct CreatureCommonBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BB9A0;
	}
	AntRef m_CanLeaveState; // 0x0
	AntRef m_WarpAngle; // 0x14
	AntRef m_BreakoutEarly; // 0x28
	unsigned char _0x3c[0x4];
	Array<EarlyOutType> m_EarlyOutBranchTypes; // 0x40
}; // size = 0x48

#endif // FBGEN_CreatureCommonBinding_H
