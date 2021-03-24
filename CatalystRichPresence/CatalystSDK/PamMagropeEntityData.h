//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMagropeEntityData.h
// Created: Wed Mar 10 19:04:25 2021
//

#ifndef FBGEN_PamMagropeEntityData_H
#define FBGEN_PamMagropeEntityData_H

#include "Vec3.h"
#include "FBMagropeType.h"
#include "Array.h"
#include "SpatialEntityData.h"

class PamMagropeEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884CE0;
	}
	Vec3 m_GraphicsOffset; // 0x60
	FBMagropeType m_MagropeType; // 0x70
	float m_Radius; // 0x74
	float m_VerticalStretch; // 0x78
	unsigned char _0x7c[0x4];
	Array<PamMagropeTrigger> m_Triggers; // 0x80
	bool m_Enabled; // 0x88
	unsigned char _0x89[0x7];
}; // size = 0x90

#endif // FBGEN_PamMagropeEntityData_H
