//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCameraTransformEntityData.h
// Created: Wed Mar 10 19:05:04 2021
//

#ifndef FBGEN_PamCameraTransformEntityData_H
#define FBGEN_PamCameraTransformEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamCameraTransformEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872A00;
	}
	Realm m_Realm; // 0x18
	bool m_Enabled; // 0x1c
	bool m_OnlyUseCharacterCamera; // 0x1d
	bool m_LocalSpace; // 0x1e
	bool m_IgnoreTranslation; // 0x1f
	bool m_IgnoreRotation; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_PamCameraTransformEntityData_H
