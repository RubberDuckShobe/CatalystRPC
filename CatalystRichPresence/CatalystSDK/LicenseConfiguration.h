//
// Generated with FrostbiteGen by Chod
// File: SDK\LicenseConfiguration.h
// Created: Wed Mar 10 19:06:17 2021
//

#ifndef FBGEN_LicenseConfiguration_H
#define FBGEN_LicenseConfiguration_H

#include "Array.h"
#include "Asset.h"

class LicenseConfiguration :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284B3E0;
	}
	Array<LicenseInfo> m_Licenses; // 0x18
}; // size = 0x20

#endif // FBGEN_LicenseConfiguration_H
