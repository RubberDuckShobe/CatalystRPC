//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshDataReplaceVertexAttribute.h
// Created: Wed Mar 10 19:05:56 2021
//

#ifndef FBGEN_MeshDataReplaceVertexAttribute_H
#define FBGEN_MeshDataReplaceVertexAttribute_H

#include "VertexElementUsage.h"
#include "MeshDataReplaceAttribute.h"

class MeshDataReplaceVertexAttribute :
	public MeshDataReplaceAttribute // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142848BB0;
	}
	VertexElementUsage m_Usage; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_MeshDataReplaceVertexAttribute_H
