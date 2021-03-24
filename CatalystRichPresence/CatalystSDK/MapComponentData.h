//
// Generated with FrostbiteGen by Chod
// File: SDK\MapComponentData.h
// Created: Wed Mar 10 19:06:04 2021
//

#ifndef FBGEN_MapComponentData_H
#define FBGEN_MapComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "VisualEnvironmentComponentData.h"

class MapComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846C40;
	}
	Vec3 m_ClearColor; // 0x80
	Realm m_Realm; // 0x90
	bool m_Enable; // 0x94
	bool m_ForceDisableFog; // 0x95
	unsigned char _0x96[0xa];
}; // size = 0xa0

#endif // FBGEN_MapComponentData_H
