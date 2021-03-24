//
// Generated with FrostbiteGen by Chod
// File: SDK\IndirectCubeMapData.h
// Created: Wed Mar 10 19:06:30 2021
//

#ifndef FBGEN_IndirectCubeMapData_H
#define FBGEN_IndirectCubeMapData_H

#include "SpatialEntityData.h"

class IndirectCubeMapData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842010;
	}
	unsigned int m_Resolution; // 0x60
	float m_Scale; // 0x64
	float m_FadeDistance; // 0x68
	bool m_Enable; // 0x6c
	unsigned char _0x6d[0x3];
}; // size = 0x70

#endif // FBGEN_IndirectCubeMapData_H
