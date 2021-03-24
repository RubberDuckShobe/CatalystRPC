//
// Generated with FrostbiteGen by Chod
// File: SDK\LinearMediaBillboardSettings.h
// Created: Wed Mar 10 19:06:16 2021
//

#ifndef FBGEN_LinearMediaBillboardSettings_H
#define FBGEN_LinearMediaBillboardSettings_H

#include "DataContainer.h"

class LinearMediaBillboardSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142847730;
	}
	int m_SkipLOD; // 0x10
	int m_MaxActiveFeeds; // 0x14
	float m_LODScreenSurfaceScale; // 0x18
	bool m_DebugEntityLogicUpdateEnable; // 0x1c
	bool m_StreamingEnable; // 0x1d
	bool m_SupportTexture2Enable; // 0x1e
	bool m_SupportEmissiveEnable; // 0x1f
	bool m_ForceLowestMipDynamic; // 0x20
	bool m_DownscaleOnOverloadEnable; // 0x21
	bool m_DisableLODBlendOnOverloadEnable; // 0x22
	bool m_LODBlendingEnable; // 0x23
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_LinearMediaBillboardSettings_H
