//
// Generated with FrostbiteGen by Chod
// File: SDK\DebugFlagValue.h
// Created: Wed Mar 10 19:07:17 2021
//

#ifndef FBGEN_DebugFlagValue_H
#define FBGEN_DebugFlagValue_H

#include "PamProgressionFlagGroup.h"
#include "PamProgressionFlag.h"
#include "DataContainer.h"

class DebugFlagValue :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428732A0;
	}
	PamProgressionFlagGroup* m_FlagGroup; // 0x10
	PamProgressionFlag* m_Flag; // 0x18
	int m_Value; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_DebugFlagValue_H
