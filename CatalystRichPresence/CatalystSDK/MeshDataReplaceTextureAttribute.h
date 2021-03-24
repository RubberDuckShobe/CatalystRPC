//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshDataReplaceTextureAttribute.h
// Created: Wed Mar 10 19:05:56 2021
//

#ifndef FBGEN_MeshDataReplaceTextureAttribute_H
#define FBGEN_MeshDataReplaceTextureAttribute_H

#include "CinematicDestructionTextureReplaceUsage.h"
#include "MeshDataReplaceAttribute.h"

class MeshDataReplaceTextureAttribute :
	public MeshDataReplaceAttribute // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142848B50;
	}
	CinematicDestructionTextureReplaceUsage m_Usage; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_MeshDataReplaceTextureAttribute_H
