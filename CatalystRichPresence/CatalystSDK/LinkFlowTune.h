//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkFlowTune.h
// Created: Wed Mar 10 19:06:15 2021
//

#ifndef FBGEN_LinkFlowTune_H
#define FBGEN_LinkFlowTune_H

#include "DataContainer.h"

class LinkFlowTune :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142828E90;
	}
	unsigned int m_MaxSimultaneous; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_LinkFlowTune_H
