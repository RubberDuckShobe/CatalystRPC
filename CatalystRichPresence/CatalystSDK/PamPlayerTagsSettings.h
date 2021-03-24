//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerTagsSettings.h
// Created: Wed Mar 10 19:04:13 2021
//

#ifndef FBGEN_PamPlayerTagsSettings_H
#define FBGEN_PamPlayerTagsSettings_H

#include "PamPlayerTagsDefinitionSettingsMeta.h"
#include "SystemSettings.h"

class PamPlayerTagsSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878300;
	}
	PamPlayerTagsDefinitionSettingsMeta* m_TagDefinitions; // 0x20
	float m_TransitionTime; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_PamPlayerTagsSettings_H
