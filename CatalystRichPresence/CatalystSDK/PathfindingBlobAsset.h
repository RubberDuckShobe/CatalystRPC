//
// Generated with FrostbiteGen by Chod
// File: SDK\PathfindingBlobAsset.h
// Created: Wed Mar 10 19:03:16 2021
//

#ifndef FBGEN_PathfindingBlobAsset_H
#define FBGEN_PathfindingBlobAsset_H

#include "Array.h"
#include "Asset.h"

class PathfindingBlobAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280BE10;
	}
	Array<PathfindingBlob> m_Blobs; // 0x18
}; // size = 0x20

#endif // FBGEN_PathfindingBlobAsset_H
