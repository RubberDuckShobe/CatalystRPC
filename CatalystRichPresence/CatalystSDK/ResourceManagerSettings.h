//
// Generated with FrostbiteGen by Chod
// File: SDK\ResourceManagerSettings.h
// Created: Wed Mar 10 19:02:36 2021
//

#ifndef FBGEN_ResourceManagerSettings_H
#define FBGEN_ResourceManagerSettings_H

#include "SystemSettings.h"

class ResourceManagerSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B20A0;
	}
	int m_CasBundleReadBufferSizeKb; // 0x20
	int m_CasBundleDecompressBufferSizeKb; // 0x24
	int m_CasBundleDecompressBufferCount; // 0x28
	bool m_BundleProfilingEnable; // 0x2c
	bool m_SPUDecompressEnable; // 0x2d
	unsigned char _0x2e[0x2];
}; // size = 0x30

#endif // FBGEN_ResourceManagerSettings_H
