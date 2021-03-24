//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterStateData.h
// Created: Wed Mar 10 19:08:15 2021
//

#ifndef FBGEN_CharacterStateData_H
#define FBGEN_CharacterStateData_H

#include "Array.h"
#include "DataContainer.h"

class CharacterStateData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C4A0;
	}
	Array<CharacterStatePoseInfo*> m_PoseInfo; // 0x10
}; // size = 0x18

#endif // FBGEN_CharacterStateData_H
