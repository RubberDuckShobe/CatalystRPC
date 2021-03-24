//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementSoundVisualizerEntityData.h
// Created: Wed Mar 10 19:03:32 2021
//

#ifndef FBGEN_PamUIElementSoundVisualizerEntityData_H
#define FBGEN_PamUIElementSoundVisualizerEntityData_H

#include "Vec4.h"
#include "PamUIBlendMode.h"
#include "UIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementSoundVisualizerEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889320;
	}
	Vec4 m_UVRect; // 0x110
	const char* m_DynamicTextureId; // 0x120
	PamUIBlendMode* m_BlendMode; // 0x128
	UIBlendMode m_CoreBlendMode; // 0x130
	float m_Time; // 0x134
	float m_RefreshRate; // 0x138
	float m_LineThickness; // 0x13c
	float m_Smoothness; // 0x140
	float m_Intensity; // 0x144
	float m_BarWidth; // 0x148
	float m_BarSpacing; // 0x14c
}; // size = 0x150

#endif // FBGEN_PamUIElementSoundVisualizerEntityData_H
