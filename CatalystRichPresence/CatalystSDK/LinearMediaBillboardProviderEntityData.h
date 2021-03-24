//
// Generated with FrostbiteGen by Chod
// File: SDK\LinearMediaBillboardProviderEntityData.h
// Created: Wed Mar 10 19:06:16 2021
//

#ifndef FBGEN_LinearMediaBillboardProviderEntityData_H
#define FBGEN_LinearMediaBillboardProviderEntityData_H

#include "TextureAsset.h"
#include "EntityData.h"

class LinearMediaBillboardProviderEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428478B0;
	}
	TextureAsset* m_Fallbacktexture; // 0x18
	bool m_IsActive; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_LinearMediaBillboardProviderEntityData_H
