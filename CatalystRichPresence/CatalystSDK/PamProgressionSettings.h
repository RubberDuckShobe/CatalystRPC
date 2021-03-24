//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionSettings.h
// Created: Wed Mar 10 19:04:10 2021
//

#ifndef FBGEN_PamProgressionSettings_H
#define FBGEN_PamProgressionSettings_H

#include "PamProgressionData.h"
#include "SystemSettings.h"

class PamProgressionSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428735A0;
	}
	PamProgressionData* m_PlayerProgressionData; // 0x20
}; // size = 0x28

#endif // FBGEN_PamProgressionSettings_H
