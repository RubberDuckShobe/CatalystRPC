//
// Generated with FrostbiteGen by Chod
// File: SDK\SimpleAppearanceItemData.h
// Created: Wed Mar 10 19:01:26 2021
//

#ifndef FBGEN_SimpleAppearanceItemData_H
#define FBGEN_SimpleAppearanceItemData_H

#include "Array.h"
#include "CommonAppearanceItemData.h"

class SimpleAppearanceItemData :
	public CommonAppearanceItemData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B5430;
	}
	Array<MaterialParameters> m_MaterialParameters; // 0x38
	Array<AppearanceCullTag*> m_IncludeTags; // 0x40
	Array<AppearanceCullTag*> m_ExcludeTags; // 0x48
}; // size = 0x50

#endif // FBGEN_SimpleAppearanceItemData_H
