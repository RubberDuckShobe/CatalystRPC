//
// Generated with FrostbiteGen by Chod
// File: SDK\GameRoleInformation.h
// Created: Wed Mar 10 19:06:40 2021
//

#ifndef FBGEN_GameRoleInformation_H
#define FBGEN_GameRoleInformation_H

#include "DataContainer.h"

class GameRoleInformation :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284B4A0;
	}
	const char* m_RoleName; // 0x10
	unsigned int m_Capacity; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_GameRoleInformation_H
