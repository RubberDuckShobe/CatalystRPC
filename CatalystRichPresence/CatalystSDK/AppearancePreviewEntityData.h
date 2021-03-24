//
// Generated with FrostbiteGen by Chod
// File: SDK\AppearancePreviewEntityData.h
// Created: Wed Mar 10 19:08:40 2021
//

#ifndef FBGEN_AppearancePreviewEntityData_H
#define FBGEN_AppearancePreviewEntityData_H

#include "Array.h"
#include "AppearanceEntityData.h"

class AppearancePreviewEntityData :
	public AppearanceEntityData // size = 0xb0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B56D0;
	}
	Array<AppearanceItemData*> m_DefaultItems; // 0xb0
	unsigned char _0xb8[0x8];
}; // size = 0xc0

#endif // FBGEN_AppearancePreviewEntityData_H
