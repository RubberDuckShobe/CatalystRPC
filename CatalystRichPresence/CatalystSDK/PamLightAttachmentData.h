//
// Generated with FrostbiteGen by Chod
// File: SDK\PamLightAttachmentData.h
// Created: Wed Mar 10 19:04:26 2021
//

#ifndef FBGEN_PamLightAttachmentData_H
#define FBGEN_PamLightAttachmentData_H

#include "Vec3.h"
#include "PbrAnalyticLightEntityData.h"
struct PamLightAttachmentData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AD28;
	}
	Vec3 m_Offset; // 0x0
	Vec3 m_RotationalOffset; // 0x10
	unsigned int m_BoneID; // 0x20
	unsigned char _0x24[0x4];
	PbrAnalyticLightEntityData* m_LightEntity; // 0x28
}; // size = 0x30

#endif // FBGEN_PamLightAttachmentData_H
