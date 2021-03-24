//
// Generated with FrostbiteGen by Chod
// File: SDK\CustomizedMeshMaterialsData.h
// Created: Wed Mar 10 19:07:21 2021
//

#ifndef FBGEN_CustomizedMeshMaterialsData_H
#define FBGEN_CustomizedMeshMaterialsData_H

#include "ObjectBlueprint.h"
#include "Array.h"
struct CustomizedMeshMaterialsData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280F998;
	}
	ObjectBlueprint* m_MeshBlueprint; // 0x0
	Array<const char*> m_MaterialNames; // 0x8
}; // size = 0x10

#endif // FBGEN_CustomizedMeshMaterialsData_H
