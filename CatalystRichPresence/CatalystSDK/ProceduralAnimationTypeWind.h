//
// Generated with FrostbiteGen by Chod
// File: SDK\ProceduralAnimationTypeWind.h
// Created: Wed Mar 10 19:02:53 2021
//

#ifndef FBGEN_ProceduralAnimationTypeWind_H
#define FBGEN_ProceduralAnimationTypeWind_H

#include "ProceduralAnimationWindMethod.h"
#include "ProceduralAnimationTypeSimple.h"

class ProceduralAnimationTypeWind :
	public ProceduralAnimationTypeSimple // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428344F0;
	}
	ProceduralAnimationWindMethod m_WindMethod; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_ProceduralAnimationTypeWind_H
