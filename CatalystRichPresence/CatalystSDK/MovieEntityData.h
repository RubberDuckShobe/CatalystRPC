//
// Generated with FrostbiteGen by Chod
// File: SDK\MovieEntityData.h
// Created: Wed Mar 10 19:05:44 2021
//

#ifndef FBGEN_MovieEntityData_H
#define FBGEN_MovieEntityData_H

#include "MovieTextureAsset.h"
#include "EntityData.h"

class MovieEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B5D0;
	}
	MovieTextureAsset* m_Movie; // 0x18
	float m_ExternalTime; // 0x20
	unsigned int m_RenderableCount; // 0x24
	unsigned int m_ThreadCount; // 0x28
	bool m_IsNormalMap; // 0x2c
	bool m_IsLooping; // 0x2d
	bool m_PreBuffer; // 0x2e
	unsigned char _0x2f[0x1];
}; // size = 0x30

#endif // FBGEN_MovieEntityData_H
