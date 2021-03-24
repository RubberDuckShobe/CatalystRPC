//
// Generated with FrostbiteGen by Chod
// File: SDK\Ps3ServiceSettings.h
// Created: Wed Mar 10 19:02:47 2021
//

#ifndef FBGEN_Ps3ServiceSettings_H
#define FBGEN_Ps3ServiceSettings_H

#include "Ps3ServiceId.h"
struct Ps3ServiceSettings
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284DD30;
	}
	const char* m_Region; // 0x0
	const char* m_ProductCode; // 0x8
	const char* m_PrimaryProductCode; // 0x10
	Ps3ServiceId m_TicketingService; // 0x18
}; // size = 0x28

#endif // FBGEN_Ps3ServiceSettings_H
