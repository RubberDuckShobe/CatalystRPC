//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialRelationPenetrationData.h
// Created: Wed Mar 10 19:06:00 2021
//

#ifndef FBGEN_MaterialRelationPenetrationData_H
#define FBGEN_MaterialRelationPenetrationData_H

#include "PhysicsPropertyRelationPropertyData.h"

class MaterialRelationPenetrationData :
	public PhysicsPropertyRelationPropertyData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A4F0;
	}
	bool m_NeverPenetrate; // 0x10
	unsigned char _0x11[0x7];
}; // size = 0x18

#endif // FBGEN_MaterialRelationPenetrationData_H
