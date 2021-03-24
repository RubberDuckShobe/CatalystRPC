//
// Generated with FrostbiteGen by Chod
// File: SDK\PathfindingBlob.h
// Created: Wed Mar 10 19:03:16 2021
//

#ifndef FBGEN_PathfindingBlob_H
#define FBGEN_PathfindingBlob_H

#include "Guid.h"
#include "Array.h"
struct PathfindingBlob
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428094E8;
	}
	Guid m_BlobId; // 0x0
	unsigned int m_BlobSize; // 0x10
	unsigned char _0x14[0x4];
	Array<unsigned int> m_ChunkSizes; // 0x18
}; // size = 0x20

#endif // FBGEN_PathfindingBlob_H
