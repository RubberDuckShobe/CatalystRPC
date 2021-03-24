//
// Generated with FrostbiteGen by Chod
// File: SDK\SpriteDofParamConverterEntityData.h
// Created: Wed Mar 10 19:00:59 2021
//

#ifndef FBGEN_SpriteDofParamConverterEntityData_H
#define FBGEN_SpriteDofParamConverterEntityData_H

#include "EntityData.h"

class SpriteDofParamConverterEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6C50;
	}
	float m_SpriteDofOutFocusStart; // 0x18
	float m_SpriteDofOutFocusEnd; // 0x1c
	float m_SpriteDofMaxBlurFactor; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_SpriteDofParamConverterEntityData_H
