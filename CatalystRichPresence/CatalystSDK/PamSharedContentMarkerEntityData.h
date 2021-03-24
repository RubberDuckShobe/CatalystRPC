//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSharedContentMarkerEntityData.h
// Created: Wed Mar 10 19:03:51 2021
//

#ifndef FBGEN_PamSharedContentMarkerEntityData_H
#define FBGEN_PamSharedContentMarkerEntityData_H

#include "Vec3.h"
#include "SpatialEntityData.h"

class PamSharedContentMarkerEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852DC0;
	}
	Vec3 m_StickyIconOffset; // 0x60
	float m_StickyIconAlpha; // 0x70
	bool m_HasDuration; // 0x74
	bool m_IsInteractive; // 0x75
	unsigned char _0x76[0xa];
}; // size = 0x80

#endif // FBGEN_PamSharedContentMarkerEntityData_H
