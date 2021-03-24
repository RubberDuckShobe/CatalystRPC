//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverManuscriptAsset.h
// Created: Wed Mar 10 18:58:59 2021
//

#ifndef FBGEN_VoiceOverManuscriptAsset_H
#define FBGEN_VoiceOverManuscriptAsset_H

#include "AudioLanguage.h"
#include "VoiceOverWaveNameTranslation.h"
#include "Array.h"
#include "Asset.h"

class VoiceOverManuscriptAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3AD0;
	}
	AudioLanguage* m_MasterLanguage; // 0x18
	Array<VoiceOverLanguageRoot*> m_Languages; // 0x20
	VoiceOverWaveNameTranslation m_NameTranslation; // 0x28
	unsigned int m_VariationUnderscoreCount; // 0x2c
	const char* m_StringIdColumn; // 0x30
	const char* m_FileNameColumn; // 0x38
	const char* m_PathColumn; // 0x40
	const char* m_WaveAssetStatusColumn; // 0x48
	const char* m_SheetName; // 0x50
	const char* m_VoiceColumn; // 0x58
	const char* m_CharacterColumn; // 0x60
	Array<VoiceOverManuscriptLanguageColumns> m_LanguageColumns; // 0x68
	int m_FirstContentRow; // 0x70
	unsigned char _0x74[0x4];
	const char* m_StringIdPrefix; // 0x78
	const char* m_OutputPath; // 0x80
	bool m_KeepPath; // 0x88
	bool m_StringIdUpperCase; // 0x89
	bool m_AllowDelete; // 0x8a
	bool m_EnableSubtitles; // 0x8b
	unsigned char _0x8c[0x4];
}; // size = 0x90

#endif // FBGEN_VoiceOverManuscriptAsset_H
