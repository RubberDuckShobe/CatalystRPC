//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementBitmapEntityData.h
// Created: Wed Mar 10 19:03:37 2021
//

#ifndef FBGEN_PamUIElementBitmapEntityData_H
#define FBGEN_PamUIElementBitmapEntityData_H

#include "UITextureSource.h"
#include "Vec4.h"
#include "UIElementBitmapDistanceFieldParams.h"
#include "TextureAsset.h"
#include "PamUITextureShader.h"
#include "PamUIBlendMode.h"
#include "UIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementBitmapEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889380;
	}
	UITextureSource m_TextureSource; // 0x110
	Vec4 m_UVRect; // 0x130
	Vec4 m_MaskUVRect; // 0x140
	UIElementBitmapDistanceFieldParams m_DistanceFieldParams; // 0x150
	int m_StreamingPriority; // 0x180
	unsigned char _0x184[0x4];
	const char* m_DynamicTextureId; // 0x188
	TextureAsset* m_TextureAsset; // 0x190
	const char* m_MaskTextureId; // 0x198
	PamUITextureShader m_Shader; // 0x1a0
	unsigned char _0x1a4[0x4];
	PamUIBlendMode* m_BlendMode; // 0x1a8
	UIBlendMode m_CoreBlendMode; // 0x1b0
	bool m_KeepAspectRatio; // 0x1b4
	bool m_ScaleToFit; // 0x1b5
	bool m_DistanceField; // 0x1b6
	bool m_IsPlayerTagDetail; // 0x1b7
	bool m_UseDesaturateShader; // 0x1b8
	unsigned char _0x1b9[0x7];
}; // size = 0x1c0

#endif // FBGEN_PamUIElementBitmapEntityData_H
