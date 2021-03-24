//
// Generated with FrostbiteGen by Chod
// File: SDK\PamBreakableAttachmentData.h
// Created: Wed Mar 10 19:05:05 2021
//

#ifndef FBGEN_PamBreakableAttachmentData_H
#define FBGEN_PamBreakableAttachmentData_H

#include "Vec3.h"
#include "ObjectBlueprint.h"
#include "Array.h"
struct PamBreakableAttachmentData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AD68;
	}
	Vec3 m_Offset; // 0x0
	Vec3 m_RotationalOffset; // 0x10
	unsigned int m_BoneID; // 0x20
	unsigned char _0x24[0x4];
	ObjectBlueprint* m_Mesh; // 0x28
	Array<ImpactMaterialEntryOverride> m_ImpactZoneMappings; // 0x30
	unsigned char _0x38[0x8];
}; // size = 0x40

#endif // FBGEN_PamBreakableAttachmentData_H
