//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSharedContentSettings.h
// Created: Wed Mar 10 19:03:51 2021
//

#ifndef FBGEN_PamSharedContentSettings_H
#define FBGEN_PamSharedContentSettings_H

#include "PamDynamicContentDefinitionsAsset.h"
#include "SystemSettings.h"

class PamSharedContentSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873BA0;
	}
	PamDynamicContentDefinitionsAsset* m_DynamicContentDefinitions; // 0x20
	bool m_QuotasEnabled; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_PamSharedContentSettings_H
