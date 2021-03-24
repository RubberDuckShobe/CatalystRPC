//
// Generated with FrostbiteGen by Chod
// File: SDK\PropertySelectEntityData.h
// Created: Wed Mar 10 19:02:49 2021
//

#ifndef FBGEN_PropertySelectEntityData_H
#define FBGEN_PropertySelectEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class PropertySelectEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1FC0;
	}
	Realm m_Realm; // 0x18
	int m_TypeHash; // 0x1c
	Array<int> m_InputPropertyHashes; // 0x20
	Array<int> m_InputEventHashes; // 0x28
	int m_OutHash; // 0x30
	unsigned int m_InputCount; // 0x34
	int m_SelectedIndex; // 0x38
	bool m_AutoSelectOnPropertyChanged; // 0x3c
	unsigned char _0x3d[0x3];
}; // size = 0x40

#endif // FBGEN_PropertySelectEntityData_H
