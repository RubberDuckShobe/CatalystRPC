//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdVertexMaterial.h
// Created: Wed Mar 10 19:07:23 2021
//

#ifndef FBGEN_CrowdVertexMaterial_H
#define FBGEN_CrowdVertexMaterial_H

#include "CrowdVertexFormat.h"
#include "CrowdSkinningType.h"
struct CrowdVertexMaterial
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428942B0;
	}
	CrowdVertexFormat m_VertexFormat; // 0x0
	CrowdSkinningType m_SkinningType; // 0x4
}; // size = 0x8

#endif // FBGEN_CrowdVertexMaterial_H
