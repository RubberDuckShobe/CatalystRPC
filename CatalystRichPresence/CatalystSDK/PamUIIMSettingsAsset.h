//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIIMSettingsAsset.h
// Created: Wed Mar 10 19:03:31 2021
//

#ifndef FBGEN_PamUIIMSettingsAsset_H
#define FBGEN_PamUIIMSettingsAsset_H

#include "PamUIInputIconUnicodeAtlasAsset.h"
#include "PamUIMoveIconTextureAtlasAsset.h"
#include "PamUIInputModeSettings.h"
#include "PamUIAnimatedTextureAsset.h"
#include "UIIMSettingsAsset.h"

class PamUIIMSettingsAsset :
	public UIIMSettingsAsset // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878B40;
	}
	PamUIInputIconUnicodeAtlasAsset* m_InputUnicodeAtlas; // 0x30
	PamUIMoveIconTextureAtlasAsset* m_MoveIconAtlas; // 0x38
	PamUIInputModeSettings m_InputModeSettings; // 0x40
	PamUIAnimatedTextureAsset* m_LoadIndicatorIcon; // 0x48
	PamUIAnimatedTextureAsset* m_SaveIndicatorIcon; // 0x50
}; // size = 0x58

#endif // FBGEN_PamUIIMSettingsAsset_H
