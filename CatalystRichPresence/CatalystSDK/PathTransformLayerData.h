//
// Generated with FrostbiteGen by Chod
// File: SDK\PathTransformLayerData.h
// Created: Wed Mar 10 19:03:16 2021
//

#ifndef FBGEN_PathTransformLayerData_H
#define FBGEN_PathTransformLayerData_H

#include "Vec3.h"
#include "GameObjectData.h"
#include "FloatTrackData.h"
#include "Array.h"
#include "TransformLayerData.h"

class PathTransformLayerData :
	public TransformLayerData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823D60;
	}
	unsigned char _0x38[0x8];
	Vec3 m_UpAxis; // 0x40
	GameObjectData* m_PathEntity; // 0x50
	FloatTrackData* m_TimingCurve; // 0x58
	Array<Guid> m_GuidChain; // 0x60
	bool m_ForceUpright; // 0x68
	bool m_Reverse; // 0x69
	unsigned char _0x6a[0x6];
}; // size = 0x70

#endif // FBGEN_PathTransformLayerData_H
