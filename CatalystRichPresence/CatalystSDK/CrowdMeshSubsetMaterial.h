//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdMeshSubsetMaterial.h
// Created: Wed Mar 10 19:07:26 2021
//

#ifndef FBGEN_CrowdMeshSubsetMaterial_H
#define FBGEN_CrowdMeshSubsetMaterial_H

#include "CrowdVertexMaterial.h"
#include "CrowdSurfaceMaterial.h"
struct CrowdMeshSubsetMaterial
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428943F0;
	}
	CrowdVertexMaterial m_VertexMaterial; // 0x0
	CrowdSurfaceMaterial m_SurfaceMaterial; // 0x8
}; // size = 0xc

#endif // FBGEN_CrowdMeshSubsetMaterial_H
