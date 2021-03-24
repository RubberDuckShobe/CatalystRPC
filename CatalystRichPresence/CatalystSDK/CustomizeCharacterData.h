//
// Generated with FrostbiteGen by Chod
// File: SDK\CustomizeCharacterData.h
// Created: Wed Mar 10 19:07:21 2021
//

#ifndef FBGEN_CustomizeCharacterData_H
#define FBGEN_CustomizeCharacterData_H

#include "Array.h"
#include "Asset.h"

class CustomizeCharacterData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811640;
	}
	Array<CustomizeVisual> m_VisualGroups; // 0x18
	Array<UnlockAssetBase*> m_Unlocks; // 0x20
	float m_OverrideMaxHealth; // 0x28
	float m_OverrideCriticalHealthThreshold; // 0x2c
	bool m_RestoreToOriginalVisualState; // 0x30
	bool m_ClearVisualState; // 0x31
	unsigned char _0x32[0x6];
}; // size = 0x38

#endif // FBGEN_CustomizeCharacterData_H
