//
// Generated with FrostbiteGen by Chod
// File: SDK\WebBrowserLocalURLAsset.h
// Created: Wed Mar 10 18:58:47 2021
//

#ifndef FBGEN_WebBrowserLocalURLAsset_H
#define FBGEN_WebBrowserLocalURLAsset_H

#include "RawFileDataAsset.h"
#include "Asset.h"

class WebBrowserLocalURLAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289E7B0;
	}
	const char* m_LocalPath; // 0x18
	RawFileDataAsset* m_File; // 0x20
}; // size = 0x28

#endif // FBGEN_WebBrowserLocalURLAsset_H
