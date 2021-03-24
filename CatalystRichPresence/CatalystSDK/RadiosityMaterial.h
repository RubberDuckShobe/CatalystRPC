//
// Generated with FrostbiteGen by Chod
// File: SDK\RadiosityMaterial.h
// Created: Wed Mar 10 19:02:46 2021
//

#ifndef FBGEN_RadiosityMaterial_H
#define FBGEN_RadiosityMaterial_H

#include "Vec3.h"
#include "DataContainer.h"

class RadiosityMaterial :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428341F0;
	}
	const char* m_Name; // 0x10
	float m_EmissiveIntensity; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Color; // 0x20
	float m_Opacity; // 0x30
	unsigned char _0x34[0xc];
}; // size = 0x40

#endif // FBGEN_RadiosityMaterial_H
