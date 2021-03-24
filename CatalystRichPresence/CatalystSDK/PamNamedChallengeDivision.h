//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengeDivision.h
// Created: Wed Mar 10 19:04:20 2021
//

#ifndef FBGEN_PamNamedChallengeDivision_H
#define FBGEN_PamNamedChallengeDivision_H

#include "Array.h"
#include "DataContainer.h"

class PamNamedChallengeDivision :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877DC0;
	}
	const char* m_Sid; // 0x10
	const char* m_DivisionTextureId; // 0x18
	Array<const char*> m_TextureIds; // 0x20
	unsigned int m_NameHash; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_PamNamedChallengeDivision_H
