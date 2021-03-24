//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerTagComponentData.h
// Created: Wed Mar 10 19:04:14 2021
//

#ifndef FBGEN_PamPlayerTagComponentData_H
#define FBGEN_PamPlayerTagComponentData_H

#include "PamOnlineIdData.h"
#include "PamPlayerTagPrio.h"
#include "ShaderParameterComponentData.h"

class PamPlayerTagComponentData :
	public ShaderParameterComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428783C0;
	}
	PamOnlineIdData* m_PlayerOnlineId; // 0x80
	PamPlayerTagPrio m_StreamingPriority; // 0x88
	float m_MaxVisibleRadius; // 0x8c
	bool m_ShowTag; // 0x90
	bool m_Enabled; // 0x91
	bool m_UseBackground; // 0x92
	unsigned char _0x93[0xd];
}; // size = 0xa0

#endif // FBGEN_PamPlayerTagComponentData_H
