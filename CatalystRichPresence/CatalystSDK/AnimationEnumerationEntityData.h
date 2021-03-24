//
// Generated with FrostbiteGen by Chod
// File: SDK\AnimationEnumerationEntityData.h
// Created: Wed Mar 10 19:08:45 2021
//

#ifndef FBGEN_AnimationEnumerationEntityData_H
#define FBGEN_AnimationEnumerationEntityData_H

#include "Realm.h"
#include "AntEnumeration.h"
#include "EntityData.h"

class AnimationEnumerationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820FD0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	AntEnumeration* m_AntEnum; // 0x20
	bool m_DetectChangesFromStart; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_AnimationEnumerationEntityData_H
