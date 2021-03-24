//
// Generated with FrostbiteGen by Chod
// File: SDK\PosesConfiguration.h
// Created: Wed Mar 10 19:03:03 2021
//

#ifndef FBGEN_PosesConfiguration_H
#define FBGEN_PosesConfiguration_H

#include "PosesGlobalAsset.h"
#include "SystemSettings.h"

class PosesConfiguration :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823C40;
	}
	PosesGlobalAsset* m_PosesGlobalAsset; // 0x20
}; // size = 0x28

#endif // FBGEN_PosesConfiguration_H
