//
// Generated with FrostbiteGen by Chod
// File: SDK\EACharacterPhysicsComponentData.h
// Created: Wed Mar 10 19:07:04 2021
//

#ifndef FBGEN_EACharacterPhysicsComponentData_H
#define FBGEN_EACharacterPhysicsComponentData_H

#include "Realm.h"
#include "MaterialDecl.h"
#include "ObjectBlueprint.h"
#include "PhysicsEntityData.h"
#include "Array.h"
#include "GameComponentData.h"

class EACharacterPhysicsComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C2490;
	}
	Realm m_Realm; // 0x70
	MaterialDecl m_MaterialPair; // 0x74
	ObjectBlueprint* m_PhysicsBlueprint; // 0x78
	PhysicsEntityData* m_PhysicsEntity; // 0x80
	Array<MaterialDecl> m_BoneMaterials; // 0x88
	bool m_UseServerRagdoll; // 0x90
	bool m_ClientAuthoritative; // 0x91
	bool m_EffectsWorldOnly; // 0x92
	unsigned char _0x93[0xd];
}; // size = 0xa0

#endif // FBGEN_EACharacterPhysicsComponentData_H
