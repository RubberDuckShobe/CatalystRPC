//
// Generated with FrostbiteGen by Chod
// File: SDK\PamLensFlareAttachmentData.h
// Created: Wed Mar 10 19:04:26 2021
//

#ifndef FBGEN_PamLensFlareAttachmentData_H
#define FBGEN_PamLensFlareAttachmentData_H

#include "Vec3.h"
#include "LensFlareEntityData.h"
struct PamLensFlareAttachmentData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AD48;
	}
	Vec3 m_Offset; // 0x0
	Vec3 m_RotationalOffset; // 0x10
	unsigned int m_BoneID; // 0x20
	unsigned char _0x24[0x4];
	LensFlareEntityData* m_LensFlareEntity; // 0x28
}; // size = 0x30

#endif // FBGEN_PamLensFlareAttachmentData_H
