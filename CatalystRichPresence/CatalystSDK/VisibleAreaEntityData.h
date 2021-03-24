//
// Generated with FrostbiteGen by Chod
// File: SDK\VisibleAreaEntityData.h
// Created: Wed Mar 10 18:59:14 2021
//

#ifndef FBGEN_VisibleAreaEntityData_H
#define FBGEN_VisibleAreaEntityData_H

#include "Realm.h"
#include "SpatialEntityData.h"

class VisibleAreaEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5B10;
	}
	Realm m_Realm; // 0x60
	float m_VisualCullScreenArea; // 0x64
	unsigned int m_HideTreshold; // 0x68
	unsigned char _0x6c[0x4];
}; // size = 0x70

#endif // FBGEN_VisibleAreaEntityData_H
