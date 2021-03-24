//
// Generated with FrostbiteGen by Chod
// File: SDK\DynamicEnlightenEntityData.h
// Created: Wed Mar 10 19:07:05 2021
//

#ifndef FBGEN_DynamicEnlightenEntityData_H
#define FBGEN_DynamicEnlightenEntityData_H

#include "EnlightenDataAsset.h"
#include "EnlightenEntityData.h"

class DynamicEnlightenEntityData :
	public EnlightenEntityData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428424F0;
	}
	EnlightenDataAsset* m_EnlightenData; // 0x28
}; // size = 0x30

#endif // FBGEN_DynamicEnlightenEntityData_H
