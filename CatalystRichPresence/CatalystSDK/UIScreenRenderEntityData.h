//
// Generated with FrostbiteGen by Chod
// File: SDK\UIScreenRenderEntityData.h
// Created: Wed Mar 10 18:59:48 2021
//

#ifndef FBGEN_UIScreenRenderEntityData_H
#define FBGEN_UIScreenRenderEntityData_H

#include "Vec3.h"
#include "UICppScreenData.h"
#include "UIScreenProjectionMode.h"
#include "UIScreenRenderingPass.h"
#include "LocalPlayerViewId.h"
#include "LogicReferenceObjectData.h"

class UIScreenRenderEntityData :
	public LogicReferenceObjectData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281EDB0;
	}
	Vec3 m_Color; // 0xa0
	UICppScreenData* m_ScreenData; // 0xb0
	float m_Scale; // 0xb8
	UIScreenProjectionMode m_ProjectionMode; // 0xbc
	UIScreenRenderingPass m_RenderPass; // 0xc0
	int m_UpdateOrder; // 0xc4
	LocalPlayerViewId m_ViewId; // 0xc8
	float m_Alpha; // 0xcc
	bool m_UseGameViewProjection; // 0xd0
	bool m_EnableDepthCulling; // 0xd1
	bool m_CenterScreen; // 0xd2
	unsigned char _0xd3[0xd];
}; // size = 0xe0

#endif // FBGEN_UIScreenRenderEntityData_H
