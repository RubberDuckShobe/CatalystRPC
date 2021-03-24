//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCharacterCameraComponentData.h
// Created: Wed Mar 10 19:05:04 2021
//

#ifndef FBGEN_PamCharacterCameraComponentData_H
#define FBGEN_PamCharacterCameraComponentData_H

#include "Vec3.h"
#include "CharacterCameraComponentData.h"

class PamCharacterCameraComponentData :
	public CharacterCameraComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B9B0;
	}
	Vec3 m_Offset; // 0x80
	float m_FovOffset; // 0x90
	bool m_UseClientAuthoritativeCameraTransform; // 0x94
	unsigned char _0x95[0xb];
}; // size = 0xa0

#endif // FBGEN_PamCharacterCameraComponentData_H
