//
// Generated with FrostbiteGen by Chod
// File: SDK\SchematicChannelEntityData.h
// Created: Wed Mar 10 19:02:31 2021
//

#ifndef FBGEN_SchematicChannelEntityData_H
#define FBGEN_SchematicChannelEntityData_H

#include "Realm.h"
#include "SchematicChannelAsset.h"
#include "Array.h"
#include "EntityData.h"

class SchematicChannelEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E79D0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	SchematicChannelAsset* m_Channel; // 0x20
	Array<int> m_InputProperties; // 0x28
	Array<int> m_InputRefProperties; // 0x30
	Array<int> m_OutputProperties; // 0x38
	Array<int> m_OutputRefProperties; // 0x40
}; // size = 0x48

#endif // FBGEN_SchematicChannelEntityData_H
