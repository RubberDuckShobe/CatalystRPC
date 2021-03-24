//
// Generated with FrostbiteGen by Chod
// File: SDK\DifficultyDatas.h
// Created: Wed Mar 10 19:07:10 2021
//

#ifndef FBGEN_DifficultyDatas_H
#define FBGEN_DifficultyDatas_H

#include "Array.h"
#include "Asset.h"

class DifficultyDatas :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428114C0;
	}
	Array<DifficultyData*> m_Difficulties; // 0x18
}; // size = 0x20

#endif // FBGEN_DifficultyDatas_H
