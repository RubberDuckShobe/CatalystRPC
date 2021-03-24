//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerStatsScope.h
// Created: Wed Mar 10 19:04:14 2021
//

#ifndef FBGEN_PamPlayerStatsScope_H
#define FBGEN_PamPlayerStatsScope_H

#include "Array.h"
#include "DataContainer.h"

class PamPlayerStatsScope :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880470;
	}
	Array<const char*> m_StatCodes; // 0x10
}; // size = 0x18

#endif // FBGEN_PamPlayerStatsScope_H
