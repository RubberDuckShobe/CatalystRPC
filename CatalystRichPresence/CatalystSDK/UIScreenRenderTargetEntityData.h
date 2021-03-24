//
// Generated with FrostbiteGen by Chod
// File: SDK\UIScreenRenderTargetEntityData.h
// Created: Wed Mar 10 18:59:48 2021
//

#ifndef FBGEN_UIScreenRenderTargetEntityData_H
#define FBGEN_UIScreenRenderTargetEntityData_H

#include "Vec3.h"
#include "UIRenderTargetRegionAsset.h"
#include "UIScreenRenderEntityData.h"

class UIScreenRenderTargetEntityData :
	public UIScreenRenderEntityData // size = 0xe0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428997A0;
	}
	Vec3 m_ClearColor; // 0xe0
	UIRenderTargetRegionAsset* m_Region; // 0xf0
	float m_ClearAlpha; // 0xf8
	int m_ClearStencil; // 0xfc
	bool m_ClearRenderTarget; // 0x100
	unsigned char _0x101[0xf];
}; // size = 0x110

#endif // FBGEN_UIScreenRenderTargetEntityData_H
