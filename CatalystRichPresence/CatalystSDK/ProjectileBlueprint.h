//
// Generated with FrostbiteGen by Chod
// File: SDK\ProjectileBlueprint.h
// Created: Wed Mar 10 19:02:51 2021
//

#ifndef FBGEN_ProjectileBlueprint_H
#define FBGEN_ProjectileBlueprint_H

#include "TimeDeltaType.h"
#include "ObjectBlueprint.h"

class ProjectileBlueprint :
	public ObjectBlueprint // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289E360;
	}
	TimeDeltaType m_TimeDeltaType; // 0x48
	unsigned char _0x4c[0x4];
}; // size = 0x50

#endif // FBGEN_ProjectileBlueprint_H
