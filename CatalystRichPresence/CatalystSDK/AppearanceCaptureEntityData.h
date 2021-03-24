//
// Generated with FrostbiteGen by Chod
// File: SDK\AppearanceCaptureEntityData.h
// Created: Wed Mar 10 19:08:41 2021
//

#ifndef FBGEN_AppearanceCaptureEntityData_H
#define FBGEN_AppearanceCaptureEntityData_H

#include "Realm.h"
#include "EntityData.h"

class AppearanceCaptureEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B5850;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_ItemName; // 0x20
	const char* m_SubFolder; // 0x28
	const char* m_ScreenShotExtension; // 0x30
}; // size = 0x38

#endif // FBGEN_AppearanceCaptureEntityData_H
