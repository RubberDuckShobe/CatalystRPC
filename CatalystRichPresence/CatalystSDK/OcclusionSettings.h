//
// Generated with FrostbiteGen by Chod
// File: SDK\OcclusionSettings.h
// Created: Wed Mar 10 19:05:29 2021
//

#ifndef FBGEN_OcclusionSettings_H
#define FBGEN_OcclusionSettings_H

#include "DataContainer.h"

class OcclusionSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142847000;
	}
	float m_GlobalCullScreenArea; // 0x10
	bool m_Enable; // 0x14
	bool m_CoverageEnable; // 0x15
	bool m_DrawShadowZbuffer; // 0x16
	bool m_DrawZbuffer; // 0x17
	bool m_DrawSplitView; // 0x18
	bool m_DrawBinaryBuffer; // 0x19
	bool m_DrawCoverageBuffer; // 0x1a
	unsigned char _0x1b[0x5];
}; // size = 0x20

#endif // FBGEN_OcclusionSettings_H
