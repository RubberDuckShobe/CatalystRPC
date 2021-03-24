//
// Generated with FrostbiteGen by Chod
// File: SDK\TerminatorServerSettings.h
// Created: Wed Mar 10 19:00:31 2021
//

#ifndef FBGEN_TerminatorServerSettings_H
#define FBGEN_TerminatorServerSettings_H

#include "URLConfigData.h"

class TerminatorServerSettings :
	public URLConfigData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142895C60;
	}
	bool m_Enabled; // 0x30
	bool m_GzipCompression; // 0x31
	unsigned char _0x32[0x6];
}; // size = 0x38

#endif // FBGEN_TerminatorServerSettings_H
