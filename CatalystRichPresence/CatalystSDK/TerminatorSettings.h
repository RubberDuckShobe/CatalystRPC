//
// Generated with FrostbiteGen by Chod
// File: SDK\TerminatorSettings.h
// Created: Wed Mar 10 19:00:30 2021
//

#ifndef FBGEN_TerminatorSettings_H
#define FBGEN_TerminatorSettings_H

#include "TerminatorServerSettings.h"
#include "TerminatorClientSettings.h"
#include "SystemSettings.h"

class TerminatorSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142895BA0;
	}
	TerminatorServerSettings* m_ServerSettings; // 0x20
	TerminatorClientSettings* m_ClientSettings; // 0x28
}; // size = 0x30

#endif // FBGEN_TerminatorSettings_H
