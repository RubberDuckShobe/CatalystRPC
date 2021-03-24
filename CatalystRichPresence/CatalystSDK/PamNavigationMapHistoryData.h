//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNavigationMapHistoryData.h
// Created: Wed Mar 10 19:04:19 2021
//

#ifndef FBGEN_PamNavigationMapHistoryData_H
#define FBGEN_PamNavigationMapHistoryData_H

#include "Vec4.h"
#include "Vec3.h"
#include "ObjectBlueprint.h"
#include "SpatialEntityData.h"

class PamNavigationMapHistoryData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D1A0;
	}
	Vec4 m_StartColor; // 0x60
	Vec4 m_EndColor; // 0x70
	Vec3 m_CurrentPosition; // 0x80
	ObjectBlueprint* m_MapSplineMesh; // 0x90
	float m_MeshScale; // 0x98
	float m_MetersPerDot; // 0x9c
	unsigned int m_MaxSamplePoints; // 0xa0
	float m_SamplePointDistanceInterval; // 0xa4
	unsigned char _0xa8[0x8];
}; // size = 0xb0

#endif // FBGEN_PamNavigationMapHistoryData_H
