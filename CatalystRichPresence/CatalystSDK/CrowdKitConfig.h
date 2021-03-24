//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdKitConfig.h
// Created: Wed Mar 10 19:07:27 2021
//

#ifndef FBGEN_CrowdKitConfig_H
#define FBGEN_CrowdKitConfig_H

#include "Array.h"
struct CrowdKitConfig
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894390;
	}
	Array<CrowdPartConfig> m_Parts; // 0x0
	Array<CrowdGroupConfig> m_Groups; // 0x8
}; // size = 0x10

#endif // FBGEN_CrowdKitConfig_H
