//
// Generated with FrostbiteGen by Chod
// File: SDK\ProceduralAnimationTypeWiggle.h
// Created: Wed Mar 10 19:02:53 2021
//

#ifndef FBGEN_ProceduralAnimationTypeWiggle_H
#define FBGEN_ProceduralAnimationTypeWiggle_H

#include "ProceduralAnimationWiggleMethod.h"
#include "ProceduralAnimationTypeSimple.h"

class ProceduralAnimationTypeWiggle :
	public ProceduralAnimationTypeSimple // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834550;
	}
	ProceduralAnimationWiggleMethod m_WiggleMethod; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_ProceduralAnimationTypeWiggle_H
