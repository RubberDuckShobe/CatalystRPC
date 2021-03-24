//
// Generated with FrostbiteGen by Chod
// File: SDK\RoninLiveEntityData.h
// Created: Wed Mar 10 19:02:35 2021
//

#ifndef FBGEN_RoninLiveEntityData_H
#define FBGEN_RoninLiveEntityData_H

#include "LinearTransform.h"
#include "Vec3.h"
#include "ExecutionModeType.h"
#include "Array.h"
#include "EntityData.h"

class RoninLiveEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142849ED0;
	}
	const char* m_TrajectoryBone; // 0x18
	LinearTransform m_StageTransform; // 0x20
	Vec3 m_CharacterRotationOffset; // 0x60
	ExecutionModeType m_ExecutionMode; // 0x70
	unsigned char _0x74[0x4];
	Array<const char*> m_StageCommands; // 0x78
	unsigned short m_ListenPort; // 0x80
	bool m_RetainGameCamera; // 0x82
	bool m_PropTransformsLikeCamera; // 0x83
	bool m_AllowCloning; // 0x84
	bool m_SearchSublevel; // 0x85
	unsigned char _0x86[0xa];
}; // size = 0x90

#endif // FBGEN_RoninLiveEntityData_H
