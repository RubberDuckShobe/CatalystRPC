//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMagropeRenderEntityData.h
// Created: Wed Mar 10 19:04:25 2021
//

#ifndef FBGEN_PamMagropeRenderEntityData_H
#define FBGEN_PamMagropeRenderEntityData_H

#include "Array.h"
#include "PamRopeRenderEntityData.h"

class PamMagropeRenderEntityData :
	public PamRopeRenderEntityData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428851C0;
	}
	Array<PamMagRopeRenderJoint> m_Joints; // 0x28
	float m_Scale; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_PamMagropeRenderEntityData_H
