//
// Generated with FrostbiteGen by Chod
// File: SDK\CustomizationUnlockParts.h
// Created: Wed Mar 10 19:07:22 2021
//

#ifndef FBGEN_CustomizationUnlockParts_H
#define FBGEN_CustomizationUnlockParts_H

#include "Array.h"
#include "DataContainer.h"

class CustomizationUnlockParts :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811700;
	}
	const char* m_UICategorySid; // 0x10
	unsigned int m_DefaultSelectionIndex; // 0x18
	unsigned char _0x1c[0x4];
	Array<UnlockAssetBase*> m_SelectableUnlocks; // 0x20
}; // size = 0x28

#endif // FBGEN_CustomizationUnlockParts_H
