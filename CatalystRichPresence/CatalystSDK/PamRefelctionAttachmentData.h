//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRefelctionAttachmentData.h
// Created: Wed Mar 10 19:04:07 2021
//

#ifndef FBGEN_PamRefelctionAttachmentData_H
#define FBGEN_PamRefelctionAttachmentData_H

#include "Vec3.h"
#include "LocalPlanarReflectionEntityData.h"
struct PamRefelctionAttachmentData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AD08;
	}
	Vec3 m_Offset; // 0x0
	Vec3 m_RotationalOffset; // 0x10
	Vec3 m_Scale; // 0x20
	unsigned int m_BoneID; // 0x30
	unsigned char _0x34[0x4];
	LocalPlanarReflectionEntityData* m_ReflectionEntity; // 0x38
}; // size = 0x40

#endif // FBGEN_PamRefelctionAttachmentData_H
