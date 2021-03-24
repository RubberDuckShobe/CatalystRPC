//
// Generated with FrostbiteGen by Chod
// File: SDK\WebBrowserSettings.h
// Created: Wed Mar 10 18:58:47 2021
//

#ifndef FBGEN_WebBrowserSettings_H
#define FBGEN_WebBrowserSettings_H

#include "WebBrowserBundleAsset.h"
#include "SystemSettings.h"

class WebBrowserSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289E6F0;
	}
	const char* m_ApplicationName; // 0x20
	const char* m_StandardFont; // 0x28
	const char* m_SerifFont; // 0x30
	const char* m_SansSerifFont; // 0x38
	const char* m_MonospaceFont; // 0x40
	const char* m_CursiveFont; // 0x48
	const char* m_FantasyFont; // 0x50
	const char* m_SystemFont; // 0x58
	const char* m_DefaultCSS; // 0x60
	WebBrowserBundleAsset* m_WebBrowserBundle; // 0x68
	bool m_SystemFontBold; // 0x70
	bool m_PerLevelWebBrowserEnable; // 0x71
	unsigned char _0x72[0x6];
}; // size = 0x78

#endif // FBGEN_WebBrowserSettings_H
