//
// Generated with FrostbiteGen by Chod
// File: SDK\DCCQualityToCodecSettings.h
// Created: Wed Mar 10 19:07:21 2021
//

#ifndef FBGEN_DCCQualityToCodecSettings_H
#define FBGEN_DCCQualityToCodecSettings_H

#include "CutsceneQualityLevel.h"
#include "AntRef.h"
struct DCCQualityToCodecSettings
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823780;
	}
	CutsceneQualityLevel m_QualityLevel; // 0x0
	AntRef m_CodecSetting; // 0x4
}; // size = 0x18

#endif // FBGEN_DCCQualityToCodecSettings_H
