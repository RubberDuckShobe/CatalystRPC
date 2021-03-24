//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterCameraComponentData.h
// Created: Wed Mar 10 19:08:18 2021
//

#ifndef FBGEN_CharacterCameraComponentData_H
#define FBGEN_CharacterCameraComponentData_H

#include "Array.h"
#include "CharacterCameraForwardAxis.h"
#include "GameComponentData.h"

class CharacterCameraComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817220;
	}
	Array<TargetCameraData*> m_Cameras; // 0x70
	CharacterCameraForwardAxis m_CameraForwardAxis; // 0x78
	unsigned char _0x7c[0x4];
}; // size = 0x80

#endif // FBGEN_CharacterCameraComponentData_H
