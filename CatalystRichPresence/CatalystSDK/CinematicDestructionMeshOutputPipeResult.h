//
// Generated with FrostbiteGen by Chod
// File: SDK\CinematicDestructionMeshOutputPipeResult.h
// Created: Wed Mar 10 19:08:12 2021
//

#ifndef FBGEN_CinematicDestructionMeshOutputPipeResult_H
#define FBGEN_CinematicDestructionMeshOutputPipeResult_H

#include "CinematicDestructionAutoMeshGeneratedIndexBuffer.h"
#include "Array.h"
#include "CinematicDestructionOutputPipeResult.h"

class CinematicDestructionMeshOutputPipeResult :
	public CinematicDestructionOutputPipeResult // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142848A30;
	}
	CinematicDestructionAutoMeshGeneratedIndexBuffer m_IndexBuffer; // 0x10
	Array<CinematicDestructionAutoMeshGeneratedVertexAttribute> m_VertexAttributes; // 0x18
	Array<CinematicDestructionAutoMeshGeneratedTextureAttribute> m_TextureAttributes; // 0x20
	bool m_ReplaceIndexBuffer; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_CinematicDestructionMeshOutputPipeResult_H
