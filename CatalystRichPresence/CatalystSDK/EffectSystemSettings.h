//
// Generated with FrostbiteGen by Chod
// File: SDK\EffectSystemSettings.h
// Created: Wed Mar 10 19:07:02 2021
//

#ifndef FBGEN_EffectSystemSettings_H
#define FBGEN_EffectSystemSettings_H

#include "QualityLevel.h"
#include "DataContainer.h"

class EffectSystemSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D7770;
	}
	QualityLevel m_EffectQualityLevel; // 0x10
	bool m_EnterLevelDisableEffectEnable; // 0x14
	unsigned char _0x15[0x3];
}; // size = 0x18

#endif // FBGEN_EffectSystemSettings_H
