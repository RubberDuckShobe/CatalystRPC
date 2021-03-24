//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementPlayerTagEntityData.h
// Created: Wed Mar 10 19:03:34 2021
//

#ifndef FBGEN_PamUIElementPlayerTagEntityData_H
#define FBGEN_PamUIElementPlayerTagEntityData_H

#include "Vec4.h"
#include "PamOnlineIdData.h"
#include "PamUIBlendMode.h"
#include "UIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementPlayerTagEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888A20;
	}
	Vec4 m_TagUvPadding; // 0x110
	Vec4 m_MaskUVRect; // 0x120
	PamOnlineIdData* m_PlayerId; // 0x130
	PamUIBlendMode* m_BlendMode; // 0x138
	UIBlendMode m_CoreBlendMode; // 0x140
	unsigned char _0x144[0x4];
	const char* m_MaskTextureId; // 0x148
	bool m_ShowBackground; // 0x150
	unsigned char _0x151[0xf];
}; // size = 0x160

#endif // FBGEN_PamUIElementPlayerTagEntityData_H
