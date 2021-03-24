//
// Generated with FrostbiteGen by Chod
// File: SDK\StaticEnlightenData.h
// Created: Wed Mar 10 19:00:56 2021
//

#ifndef FBGEN_StaticEnlightenData_H
#define FBGEN_StaticEnlightenData_H

#include "ResourceRef.h"
#include "TextureAsset.h"
#include "PlatformScalableBool.h"
#include "Asset.h"

class StaticEnlightenData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834850;
	}
	TextureAsset* m_StaticIrradianceTexture; // 0x18
	ResourceRef m_DatabaseResource; // 0x20
	TextureAsset* m_StaticDirectionTexture; // 0x28
	TextureAsset* m_StaticDirectionTextureG; // 0x30
	TextureAsset* m_StaticDirectionTextureB; // 0x38
	PlatformScalableBool m_StaticEnable; // 0x40
	bool m_DirectionTextureCompressionEnable; // 0x49
	unsigned char _0x4a[0x6];
}; // size = 0x50

#endif // FBGEN_StaticEnlightenData_H
