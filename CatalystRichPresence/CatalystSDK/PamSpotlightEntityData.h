//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSpotlightEntityData.h
// Created: Wed Mar 10 19:03:47 2021
//

#ifndef FBGEN_PamSpotlightEntityData_H
#define FBGEN_PamSpotlightEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamSpotlightEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428728E0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_ApiDestinations; // 0x20
}; // size = 0x28

#endif // FBGEN_PamSpotlightEntityData_H
