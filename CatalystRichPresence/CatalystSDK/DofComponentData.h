//
// Generated with FrostbiteGen by Chod
// File: SDK\DofComponentData.h
// Created: Wed Mar 10 19:07:08 2021
//

#ifndef FBGEN_DofComponentData_H
#define FBGEN_DofComponentData_H

#include "Realm.h"
#include "BlurFilter.h"
#include "TextureAsset.h"
#include "VisualEnvironmentComponentData.h"

class DofComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428383C0;
	}
	Realm m_Realm; // 0x80
	float m_FocusDistance; // 0x84
	float m_BlurFactor; // 0x88
	float m_BlurAdd; // 0x8c
	BlurFilter m_SimpleDofBlurFilter; // 0x90
	float m_SimpleDofMaxBlur; // 0x94
	float m_SimpleDofNearStart; // 0x98
	float m_SimpleDofNearEnd; // 0x9c
	float m_SimpleDofFarStart; // 0xa0
	float m_SimpleDofFarEnd; // 0xa4
	float m_HipToIronsightsFade; // 0xa8
	float m_IronsightsDofStartFade; // 0xac
	float m_IronsightsFocalDistance; // 0xb0
	float m_IronsightsDofCircleDistance; // 0xb4
	float m_SpriteDofNearStart; // 0xb8
	float m_SpriteDofNearEnd; // 0xbc
	float m_SpriteDofFarStart; // 0xc0
	float m_SpriteDofFarEnd; // 0xc4
	float m_SpriteDofMaxBlur; // 0xc8
	unsigned char _0xcc[0x4];
	TextureAsset* m_SpriteDofBokehTexture; // 0xd0
	bool m_Enable; // 0xd8
	bool m_UseCameraSettings; // 0xd9
	bool m_DebugDrawFocusPlane; // 0xda
	bool m_IronsightsDofActive; // 0xdb
	bool m_IronsightsDofCircleBlur; // 0xdc
	unsigned char _0xdd[0x3];
}; // size = 0xe0

#endif // FBGEN_DofComponentData_H
