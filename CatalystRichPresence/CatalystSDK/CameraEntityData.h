//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraEntityData.h
// Created: Wed Mar 10 19:08:20 2021
//

#ifndef FBGEN_CameraEntityData_H
#define FBGEN_CameraEntityData_H

#include "CameraEntityBaseData.h"

class CameraEntityData :
	public CameraEntityBaseData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817400;
	}
	float m_Fov; // 0xa0
	float m_NearPlane; // 0xa4
	float m_FarPlane; // 0xa8
	unsigned char _0xac[0x4];
}; // size = 0xb0

#endif // FBGEN_CameraEntityData_H
