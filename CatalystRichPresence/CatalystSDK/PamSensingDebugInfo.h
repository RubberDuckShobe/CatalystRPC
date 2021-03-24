//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSensingDebugInfo.h
// Created: Wed Mar 10 19:04:02 2021
//

#ifndef FBGEN_PamSensingDebugInfo_H
#define FBGEN_PamSensingDebugInfo_H

#include "Vec3.h"
struct PamSensingDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B008;
	}
	Vec3 m_HeadPos; // 0x0
	Vec3 m_HeadDir; // 0x10
	float m_LongDist; // 0x20
	float m_LongAngle; // 0x24
	float m_CloseDist; // 0x28
	float m_CloseAngle; // 0x2c
	float m_ImpairedVisualRange; // 0x30
	bool m_SensingEnabled; // 0x34
	unsigned char _0x35[0xb];
}; // size = 0x40

#endif // FBGEN_PamSensingDebugInfo_H
