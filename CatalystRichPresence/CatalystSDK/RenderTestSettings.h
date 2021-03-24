//
// Generated with FrostbiteGen by Chod
// File: SDK\RenderTestSettings.h
// Created: Wed Mar 10 19:02:37 2021
//

#ifndef FBGEN_RenderTestSettings_H
#define FBGEN_RenderTestSettings_H

#include "DataContainer.h"

class RenderTestSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837C40;
	}
	unsigned int m_Case; // 0x10
	unsigned int m_SubCase; // 0x14
	int m_Next; // 0x18
	bool m_Enable; // 0x1c
	bool m_DrawNumberEnable; // 0x1d
	unsigned char _0x1e[0x2];
}; // size = 0x20

#endif // FBGEN_RenderTestSettings_H
