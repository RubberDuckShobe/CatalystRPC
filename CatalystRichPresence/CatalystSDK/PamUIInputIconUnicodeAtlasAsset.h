//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIInputIconUnicodeAtlasAsset.h
// Created: Wed Mar 10 19:03:30 2021
//

#ifndef FBGEN_PamUIInputIconUnicodeAtlasAsset_H
#define FBGEN_PamUIInputIconUnicodeAtlasAsset_H

#include "Array.h"
#include "Asset.h"

class PamUIInputIconUnicodeAtlasAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878BA0;
	}
	Array<PamUIAntInputMapping> m_AntInputMappings; // 0x18
	Array<PamUIAxesUnicodeGroup> m_AxesGroups; // 0x20
	Array<PamUIPadButtonsUnicodeGroup> m_PadGroups; // 0x28
	Array<PamUIKeysUnicodeGroup> m_KeysGroups; // 0x30
	Array<PamUIMouseButtonsUnicodeGroup> m_MouseGroups; // 0x38
}; // size = 0x40

#endif // FBGEN_PamUIInputIconUnicodeAtlasAsset_H
