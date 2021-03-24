//
// Generated with FrostbiteGen by Chod
// File: SDK\ColorReference.h
// Created: Wed Mar 10 19:07:39 2021
//

#ifndef FBGEN_ColorReference_H
#define FBGEN_ColorReference_H

#include "Vec4.h"
#include "Asset.h"

class ColorReference :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811D00;
	}
	unsigned char _0x18[0x8];
	Vec4 m_Color; // 0x20
}; // size = 0x30

#endif // FBGEN_ColorReference_H
