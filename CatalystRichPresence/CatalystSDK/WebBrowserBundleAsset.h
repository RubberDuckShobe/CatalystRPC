//
// Generated with FrostbiteGen by Chod
// File: SDK\WebBrowserBundleAsset.h
// Created: Wed Mar 10 18:58:47 2021
//

#ifndef FBGEN_WebBrowserBundleAsset_H
#define FBGEN_WebBrowserBundleAsset_H

#include "Array.h"
#include "Asset.h"

class WebBrowserBundleAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289E810;
	}
	const char* m_BundlePath; // 0x18
	Array<const char*> m_Fonts; // 0x20
	Array<const char*> m_LocalURLs; // 0x28
}; // size = 0x30

#endif // FBGEN_WebBrowserBundleAsset_H
