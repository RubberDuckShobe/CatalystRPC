//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRVNavTelemetry.h
// Created: Wed Mar 10 19:04:07 2021
//

#ifndef FBGEN_PamRVNavTelemetry_H
#define FBGEN_PamRVNavTelemetry_H

#include "Array.h"
#include "Asset.h"

class PamRVNavTelemetry :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873F00;
	}
	Array<PamRVNavLink*> m_links; // 0x18
	const char* m_dataVersionUsed; // 0x20
}; // size = 0x28

#endif // FBGEN_PamRVNavTelemetry_H
