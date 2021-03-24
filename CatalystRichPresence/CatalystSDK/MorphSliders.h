//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphSliders.h
// Created: Wed Mar 10 19:05:47 2021
//

#ifndef FBGEN_MorphSliders_H
#define FBGEN_MorphSliders_H

#include "Array.h"
#include "Asset.h"

class MorphSliders :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142825AF0;
	}
	Array<MorphTwoWaySlider*> m_TwoWaySliders; // 0x18
	Array<MorphOneWaySlider*> m_OneWaySliders; // 0x20
}; // size = 0x28

#endif // FBGEN_MorphSliders_H
