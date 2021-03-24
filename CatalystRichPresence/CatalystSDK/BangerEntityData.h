//
// Generated with FrostbiteGen by Chod
// File: SDK\BangerEntityData.h
// Created: Wed Mar 10 19:08:33 2021
//

#ifndef FBGEN_BangerEntityData_H
#define FBGEN_BangerEntityData_H

#include "MeshAsset.h"
#include "ExplosionEntityData.h"
#include "DynamicGamePhysicsEntityData.h"

class BangerEntityData :
	public DynamicGamePhysicsEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817CA0;
	}
	MeshAsset* m_Mesh; // 0x90
	ExplosionEntityData* m_Explosion; // 0x98
	float m_TimeToLive; // 0xa0
	unsigned int m_DestructiblePartCount; // 0xa4
	bool m_UseVariableNetworkFrequency; // 0xa8
	unsigned char _0xa9[0x7];
}; // size = 0xb0

#endif // FBGEN_BangerEntityData_H
