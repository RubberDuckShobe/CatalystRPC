//
// Generated with FrostbiteGen by Chod
// File: SDK\SpawnPositionData.h
// Created: Wed Mar 10 19:01:04 2021
//

#ifndef FBGEN_SpawnPositionData_H
#define FBGEN_SpawnPositionData_H

#include "ProcessorData.h"

class SpawnPositionData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBFC0;
	}
	bool m_ApplyScreenAspectRatio; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_SpawnPositionData_H
