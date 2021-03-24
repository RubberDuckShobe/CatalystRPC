//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMapMarkerManagerEntityData.h
// Created: Wed Mar 10 19:04:24 2021
//

#ifndef FBGEN_PamMapMarkerManagerEntityData_H
#define FBGEN_PamMapMarkerManagerEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "EntityData.h"

class PamMapMarkerManagerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880EF0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_TargetTransform; // 0x20
	LinearTransform m_CameraTransform; // 0x60
	LinearTransform m_RunnersVisionTarget; // 0xa0
	float m_RevealDelay; // 0xe0
	float m_RevealTime; // 0xe4
	float m_UndergroundLimit; // 0xe8
	unsigned char _0xec[0x4];
	const char* m_Tags; // 0xf0
	unsigned char _0xf8[0x8];
}; // size = 0x100

#endif // FBGEN_PamMapMarkerManagerEntityData_H
