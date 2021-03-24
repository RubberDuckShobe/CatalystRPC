//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialRelationDecalData.h
// Created: Wed Mar 10 19:06:00 2021
//

#ifndef FBGEN_MaterialRelationDecalData_H
#define FBGEN_MaterialRelationDecalData_H

#include "DecalTemplateData.h"
#include "PhysicsMaterialRelationPropertyData.h"

class MaterialRelationDecalData :
	public PhysicsMaterialRelationPropertyData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A7F0;
	}
	DecalTemplateData* m_Decal; // 0x10
	DecalTemplateData* m_ExitDecal; // 0x18
}; // size = 0x20

#endif // FBGEN_MaterialRelationDecalData_H
