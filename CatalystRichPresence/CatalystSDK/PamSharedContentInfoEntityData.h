//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSharedContentInfoEntityData.h
// Created: Wed Mar 10 19:03:52 2021
//

#ifndef FBGEN_PamSharedContentInfoEntityData_H
#define FBGEN_PamSharedContentInfoEntityData_H

#include "PamSharedContentId.h"
#include "EntityData.h"

class PamSharedContentInfoEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852700;
	}
	unsigned int m_ContentKey; // 0x18
	unsigned char _0x1c[0x4];
	PamSharedContentId m_SharedContentId; // 0x20
	bool m_Sync; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_PamSharedContentInfoEntityData_H
