//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshMaterialVariation.h
// Created: Wed Mar 10 19:05:55 2021
//

#ifndef FBGEN_MeshMaterialVariation_H
#define FBGEN_MeshMaterialVariation_H

#include "SurfaceShaderInstanceDataStruct.h"
#include "DataContainer.h"

class MeshMaterialVariation :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428342B0;
	}
	SurfaceShaderInstanceDataStruct m_Shader; // 0x10
}; // size = 0x38

#endif // FBGEN_MeshMaterialVariation_H
