//
// Generated with FrostbiteGen by Chod
// File: SDK\PuppetTune.h
// Created: Wed Mar 10 19:02:47 2021
//

#ifndef FBGEN_PuppetTune_H
#define FBGEN_PuppetTune_H

#include "RepulsionConstraintMode.h"
#include "Asset.h"

class PuppetTune :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428299D0;
	}
	RepulsionConstraintMode m_repulsionConstraintMode; // 0x18
	bool m_exitPuppetInObstacles; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_PuppetTune_H
