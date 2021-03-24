//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphBaseSlider.h
// Created: Wed Mar 10 19:05:48 2021
//

#ifndef FBGEN_MorphBaseSlider_H
#define FBGEN_MorphBaseSlider_H

#include "MorphSliderType.h"
#include "DataContainer.h"

class MorphBaseSlider :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142825DF0;
	}
	MorphSliderType m_SliderType; // 0x10
	float m_DefaultWeight; // 0x14
	bool m_DisableAdditiveBoneOffsets; // 0x18
	bool m_EnabledWithHair; // 0x19
	bool m_EnabledWithBeard; // 0x1a
	bool m_DebugOnly; // 0x1b
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_MorphBaseSlider_H
