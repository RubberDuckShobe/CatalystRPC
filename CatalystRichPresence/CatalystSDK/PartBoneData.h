//
// Generated with FrostbiteGen by Chod
// File: SDK\PartBoneData.h
// Created: Wed Mar 10 19:03:18 2021
//

#ifndef FBGEN_PartBoneData_H
#define FBGEN_PartBoneData_H

#include "LinearTransform.h"
#include "EntityData.h"

class PartBoneData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816AA0;
	}
	bool m_IsTransformInputLocal; // 0x18
	unsigned char _0x19[0x7];
	LinearTransform m_Transform; // 0x20
}; // size = 0x60

#endif // FBGEN_PartBoneData_H
