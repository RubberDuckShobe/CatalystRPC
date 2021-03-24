//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateMeshEmitterMaskData.h
// Created: Wed Mar 10 18:59:37 2021
//

#ifndef FBGEN_UpdateMeshEmitterMaskData_H
#define FBGEN_UpdateMeshEmitterMaskData_H

#include "MeshEmitterMaskAsset.h"
#include "ProcessorData.h"

class UpdateMeshEmitterMaskData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DAF40;
	}
	MeshEmitterMaskAsset* m_MeshEmitterMask; // 0x30
}; // size = 0x38

#endif // FBGEN_UpdateMeshEmitterMaskData_H
