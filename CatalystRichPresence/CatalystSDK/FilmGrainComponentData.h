//
// Generated with FrostbiteGen by Chod
// File: SDK\FilmGrainComponentData.h
// Created: Wed Mar 10 19:06:48 2021
//

#ifndef FBGEN_FilmGrainComponentData_H
#define FBGEN_FilmGrainComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "Vec2.h"
#include "TextureAsset.h"
#include "VisualEnvironmentComponentData.h"

class FilmGrainComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142838300;
	}
	Vec3 m_ColorScale; // 0x80
	Realm m_Realm; // 0x90
	Vec2 m_TextureScale; // 0x94
	unsigned char _0x9c[0x4];
	TextureAsset* m_Texture; // 0xa0
	bool m_Enable; // 0xa8
	bool m_LinearFilteringEnable; // 0xa9
	bool m_RandomEnable; // 0xaa
	unsigned char _0xab[0x5];
}; // size = 0xb0

#endif // FBGEN_FilmGrainComponentData_H
