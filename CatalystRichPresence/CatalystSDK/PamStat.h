//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStat.h
// Created: Wed Mar 10 19:03:46 2021
//

#ifndef FBGEN_PamStat_H
#define FBGEN_PamStat_H

#include "PamStatUpdateMethod.h"
#include "PamStatType.h"
struct PamStat
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880290;
	}
	const char* m_Code; // 0x0
	PamStatUpdateMethod m_StatUpdateMethod; // 0x8
	PamStatType m_PropertyType; // 0xc
	int m_DefaultValue; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_PamStat_H
