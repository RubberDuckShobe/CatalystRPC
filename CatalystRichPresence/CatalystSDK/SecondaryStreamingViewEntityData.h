//
// Generated with FrostbiteGen by Chod
// File: SDK\SecondaryStreamingViewEntityData.h
// Created: Wed Mar 10 19:02:29 2021
//

#ifndef FBGEN_SecondaryStreamingViewEntityData_H
#define FBGEN_SecondaryStreamingViewEntityData_H

#include "EntityData.h"

class SecondaryStreamingViewEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D0E0;
	}
	bool m_Enabled; // 0x18
	bool m_PauseCubemapUpdates; // 0x19
	bool m_UseForCubemapPriorities; // 0x1a
	unsigned char _0x1b[0x5];
}; // size = 0x20

#endif // FBGEN_SecondaryStreamingViewEntityData_H
