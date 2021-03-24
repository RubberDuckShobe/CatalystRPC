//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionFlagGroup.h
// Created: Wed Mar 10 19:04:12 2021
//

#ifndef FBGEN_PamProgressionFlagGroup_H
#define FBGEN_PamProgressionFlagGroup_H

#include "Array.h"
#include "DataContainer.h"

class PamProgressionFlagGroup :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873900;
	}
	const char* m_Name; // 0x10
	unsigned int m_NameHash; // 0x18
	unsigned char _0x1c[0x4];
	Array<PamProgressionFlag*> m_Flags; // 0x20
	const char* m_NumberOfFlagsSyncStatName; // 0x28
	const char* m_SumOfFlagValuesSyncStatName; // 0x30
	bool m_SyncNumberOfFlagsSetToOnline; // 0x38
	bool m_SyncSumOfFlagValuesToOnline; // 0x39
	bool m_ForceSyncAllFlagsToOnline; // 0x3a
	unsigned char _0x3b[0x5];
}; // size = 0x40

#endif // FBGEN_PamProgressionFlagGroup_H
