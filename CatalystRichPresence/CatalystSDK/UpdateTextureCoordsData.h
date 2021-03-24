//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateTextureCoordsData.h
// Created: Wed Mar 10 18:59:35 2021
//

#ifndef FBGEN_UpdateTextureCoordsData_H
#define FBGEN_UpdateTextureCoordsData_H

#include "AtlasTextureAsset.h"
#include "TexCoordModifier.h"
#include "ProcessorData.h"

class UpdateTextureCoordsData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBA20;
	}
	AtlasTextureAsset* m_BaseTexture; // 0x30
	AtlasTextureAsset* m_NormalTexture; // 0x38
	TexCoordModifier m_ModifierU; // 0x40
	TexCoordModifier m_ModifierV; // 0x44
	float m_ScaleU; // 0x48
	float m_ScaleV; // 0x4c
	float m_BiasU; // 0x50
	float m_BiasV; // 0x54
}; // size = 0x58

#endif // FBGEN_UpdateTextureCoordsData_H
