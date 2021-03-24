//
// Generated with FrostbiteGen by Chod
// File: SDK\PamImpactMaterialComponentData.h
// Created: Wed Mar 10 19:04:27 2021
//

#ifndef FBGEN_PamImpactMaterialComponentData_H
#define FBGEN_PamImpactMaterialComponentData_H

#include "Realm.h"
#include "Array.h"
#include "MaterialDecl.h"
#include "GameComponentData.h"

class PamImpactMaterialComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142885280;
	}
	Realm m_Realm; // 0x70
	int m_DefaultSoundMaterial; // 0x74
	Array<ImpactMaterialEntry> m_ZoneMaterialMappings; // 0x78
	MaterialDecl m_DefaultEffectMaterial; // 0x80
	unsigned char _0x84[0xc];
}; // size = 0x90

#endif // FBGEN_PamImpactMaterialComponentData_H
