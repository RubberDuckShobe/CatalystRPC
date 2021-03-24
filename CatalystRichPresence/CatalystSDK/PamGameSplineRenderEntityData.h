//
// Generated with FrostbiteGen by Chod
// File: SDK\PamGameSplineRenderEntityData.h
// Created: Wed Mar 10 19:04:37 2021
//

#ifndef FBGEN_PamGameSplineRenderEntityData_H
#define FBGEN_PamGameSplineRenderEntityData_H

#include "PamRopeRenderEntityData.h"

class PamGameSplineRenderEntityData :
	public PamRopeRenderEntityData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142885160;
	}
	float m_StartOffset; // 0x28
	float m_EndOffset; // 0x2c
	float m_Scale; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_PamGameSplineRenderEntityData_H
