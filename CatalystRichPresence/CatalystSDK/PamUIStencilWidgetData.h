//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIStencilWidgetData.h
// Created: Wed Mar 10 19:03:23 2021
//

#ifndef FBGEN_PamUIStencilWidgetData_H
#define FBGEN_PamUIStencilWidgetData_H

#include "Vec4.h"
#include "PamUIWidgetEntityData.h"

class PamUIStencilWidgetData :
	public PamUIWidgetEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288D300;
	}
	Vec4 m_UVRect; // 0x90
	const char* m_StencilTexture; // 0xa0
	unsigned char _0xa8[0x8];
}; // size = 0xb0

#endif // FBGEN_PamUIStencilWidgetData_H
