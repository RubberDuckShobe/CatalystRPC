//
// Generated with FrostbiteGen by Chod
// File: SDK\LinearMediaBillboardClientEntityData.h
// Created: Wed Mar 10 19:06:16 2021
//

#ifndef FBGEN_LinearMediaBillboardClientEntityData_H
#define FBGEN_LinearMediaBillboardClientEntityData_H

#include "TextureAsset.h"
#include "BBClientDirections.h"
#include "EntityData.h"

class LinearMediaBillboardClientEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142847790;
	}
	int m_ReceivingChannel; // 0x18
	float m_SizeInMeterSqr; // 0x1c
	TextureAsset* m_FallbackTexture; // 0x20
	BBClientDirections m_MeshLookAtDirection; // 0x28
	bool m_isDynamicObject; // 0x2c
	bool m_disableLOD; // 0x2d
	bool m_useSecondTextureStream; // 0x2e
	bool m_EnabledOnStartup; // 0x2f
}; // size = 0x30

#endif // FBGEN_LinearMediaBillboardClientEntityData_H
