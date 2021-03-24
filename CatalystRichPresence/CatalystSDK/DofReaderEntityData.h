//
// Generated with FrostbiteGen by Chod
// File: SDK\DofReaderEntityData.h
// Created: Wed Mar 10 19:07:08 2021
//

#ifndef FBGEN_DofReaderEntityData_H
#define FBGEN_DofReaderEntityData_H

#include "AntRef.h"
#include "Array.h"
#include "EntityData.h"

class DofReaderEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C0AB0;
	}
	AntRef m_DofSet; // 0x18
	unsigned char _0x2c[0x4];
	const char* m_DofSetName; // 0x30
	Array<int> m_DofNamesHashId; // 0x38
	bool m_StartReadingContinouslyOnSpawn; // 0x40
	bool m_ReadOnceOnSpawn; // 0x41
	unsigned char _0x42[0x6];
}; // size = 0x48

#endif // FBGEN_DofReaderEntityData_H
