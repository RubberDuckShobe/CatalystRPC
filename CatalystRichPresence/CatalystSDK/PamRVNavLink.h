//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRVNavLink.h
// Created: Wed Mar 10 19:04:08 2021
//

#ifndef FBGEN_PamRVNavLink_H
#define FBGEN_PamRVNavLink_H

#include "PamRVNavObject.h"
#include "DataContainer.h"

class PamRVNavLink :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873FC0;
	}
	PamRVNavObject* m_Src; // 0x10
	PamRVNavObject* m_Dst; // 0x18
	float m_Efficiency; // 0x20
	bool m_HighPrio; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_PamRVNavLink_H
