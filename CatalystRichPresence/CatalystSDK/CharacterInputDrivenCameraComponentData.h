//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterInputDrivenCameraComponentData.h
// Created: Wed Mar 10 19:08:17 2021
//

#ifndef FBGEN_CharacterInputDrivenCameraComponentData_H
#define FBGEN_CharacterInputDrivenCameraComponentData_H

#include "AimingConstraintsData.h"
#include "CharacterCameraComponentData.h"

class CharacterInputDrivenCameraComponentData :
	public CharacterCameraComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428171C0;
	}
	AimingConstraintsData m_AimingConstraints; // 0x80
}; // size = 0x90

#endif // FBGEN_CharacterInputDrivenCameraComponentData_H
