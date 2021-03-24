//
// Generated with FrostbiteGen by Chod
// File: SDK\PA2LookAtGameStateSetting.h
// Created: Wed Mar 10 19:05:23 2021
//

#ifndef FBGEN_PA2LookAtGameStateSetting_H
#define FBGEN_PA2LookAtGameStateSetting_H

#include "AntRef.h"
#include "DataContainer.h"

class PA2LookAtGameStateSetting :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427F72A0;
	}
	AntRef m_GameState; // 0x10
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PA2LookAtGameStateSetting_H
