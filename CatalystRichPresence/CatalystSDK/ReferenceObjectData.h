//
// Generated with FrostbiteGen by Chod
// File: SDK\ReferenceObjectData.h
// Created: Wed Mar 10 19:02:39 2021
//

#ifndef FBGEN_ReferenceObjectData_H
#define FBGEN_ReferenceObjectData_H

#include "Blueprint.h"
#include "LinearTransform.h"
#include "ObjectVariation.h"
#include "StreamRealm.h"
#include "RadiosityTypeOverride.h"
#include "RenderingOverrides.h"
#include "GameObjectData.h"

class ReferenceObjectData :
	public GameObjectData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7C70;
	}
	Blueprint* m_Blueprint; // 0x18
	LinearTransform m_BlueprintTransform; // 0x20
	ObjectVariation* m_ObjectVariation; // 0x60
	StreamRealm m_StreamRealm; // 0x68
	RadiosityTypeOverride m_RadiosityTypeOverride; // 0x6c
	unsigned int m_LightmapResolutionScale; // 0x70
	RenderingOverrides m_RenderingOverrides; // 0x74
	bool m_CastSunShadowEnable; // 0x80
	bool m_CastReflectionEnable; // 0x81
	bool m_CastEnvmapEnable; // 0x82
	bool m_Excluded; // 0x83
	unsigned char _0x84[0xc];
}; // size = 0x90

#endif // FBGEN_ReferenceObjectData_H
