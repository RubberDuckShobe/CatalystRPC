//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateMeshEmitterSourceData.h
// Created: Wed Mar 10 18:59:37 2021
//

#ifndef FBGEN_UpdateMeshEmitterSourceData_H
#define FBGEN_UpdateMeshEmitterSourceData_H

#include "MeshEmitterAsset.h"
#include "ProcessorData.h"

class UpdateMeshEmitterSourceData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DAFA0;
	}
	MeshEmitterAsset* m_MeshEmitter; // 0x30
	bool m_GeneratePosition; // 0x38
	bool m_GenerateNormal; // 0x39
	bool m_GenerateUVs; // 0x3a
	bool m_SendMeshUvsToShaderGraph; // 0x3b
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_UpdateMeshEmitterSourceData_H
