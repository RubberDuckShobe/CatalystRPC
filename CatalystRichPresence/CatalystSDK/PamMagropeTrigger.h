//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMagropeTrigger.h
// Created: Wed Mar 10 19:04:25 2021
//

#ifndef FBGEN_PamMagropeTrigger_H
#define FBGEN_PamMagropeTrigger_H

#include "Vec3.h"
#include "LinearTransform.h"
#include "PamMagropeTriggerType.h"
struct PamMagropeTrigger
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884998;
	}
	Vec3 m_Target; // 0x0
	LinearTransform m_LocalTransform; // 0x10
	PamMagropeTriggerType m_ShapeType; // 0x50
	unsigned char _0x54[0xc];
}; // size = 0x60

#endif // FBGEN_PamMagropeTrigger_H
