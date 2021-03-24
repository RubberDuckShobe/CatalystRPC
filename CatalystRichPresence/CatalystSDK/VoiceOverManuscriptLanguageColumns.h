//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverManuscriptLanguageColumns.h
// Created: Wed Mar 10 18:58:59 2021
//

#ifndef FBGEN_VoiceOverManuscriptLanguageColumns_H
#define FBGEN_VoiceOverManuscriptLanguageColumns_H

#include "AudioLanguage.h"
struct VoiceOverManuscriptLanguageColumns
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D06C8;
	}
	AudioLanguage* m_Language; // 0x0
	const char* m_TextColumn; // 0x8
	const char* m_SubtitleOffsetColumn; // 0x10
}; // size = 0x18

#endif // FBGEN_VoiceOverManuscriptLanguageColumns_H
