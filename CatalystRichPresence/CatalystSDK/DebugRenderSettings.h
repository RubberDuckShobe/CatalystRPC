//
// Generated with FrostbiteGen by Chod
// File: SDK\DebugRenderSettings.h
// Created: Wed Mar 10 19:07:17 2021
//

#ifndef FBGEN_DebugRenderSettings_H
#define FBGEN_DebugRenderSettings_H

#include "DataContainer.h"

class DebugRenderSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B24C0;
	}
	float m_TextViewDistance; // 0x10
	unsigned int m_TextQueueMaxLineCount; // 0x14
	float m_TextQueueTimeVisible; // 0x18
	int m_ProcessJobCount; // 0x1c
	unsigned int m_Ps3SpuFrameBufferSize; // 0x20
	unsigned int m_DxMaxVertexCount; // 0x24
	bool m_Enable; // 0x28
	bool m_DrawStatsEnable; // 0x29
	bool m_TextQueueLocationTop; // 0x2a
	bool m_Ps3SpuEnable; // 0x2b
	bool m_DxLine2dAntialiasingEnable; // 0x2c
	bool m_DxLine3dAntialiasingEnable; // 0x2d
	unsigned char _0x2e[0x2];
}; // size = 0x30

#endif // FBGEN_DebugRenderSettings_H
