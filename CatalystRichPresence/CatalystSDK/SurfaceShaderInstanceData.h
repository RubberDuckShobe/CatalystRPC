//
// Generated with FrostbiteGen by Chod
// File: SDK\SurfaceShaderInstanceData.h
// Created: Wed Mar 10 19:00:40 2021
//

#ifndef FBGEN_SurfaceShaderInstanceData_H
#define FBGEN_SurfaceShaderInstanceData_H

#include "SurfaceShaderBaseAsset.h"
#include "DataContainer.h"

class SurfaceShaderInstanceData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837F40;
	}
	SurfaceShaderBaseAsset* m_Shader; // 0x10
}; // size = 0x18

#endif // FBGEN_SurfaceShaderInstanceData_H
