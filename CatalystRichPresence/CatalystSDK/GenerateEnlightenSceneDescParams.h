//
// Generated with FrostbiteGen by Chod
// File: SDK\GenerateEnlightenSceneDescParams.h
// Created: Wed Mar 10 19:06:38 2021
//

#ifndef FBGEN_GenerateEnlightenSceneDescParams_H
#define FBGEN_GenerateEnlightenSceneDescParams_H

#include "Array.h"
#include "DataContainer.h"

class GenerateEnlightenSceneDescParams :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428347F0;
	}
	Array<Guid> m_InstanceFilter; // 0x10
	Array<Guid> m_EnlightenAssetFilter; // 0x18
	bool m_ApproximateSystemInfluences; // 0x20
	bool m_DistributedBuild; // 0x21
	bool m_CacheEnable; // 0x22
	bool m_VerboseLogging; // 0x23
	bool m_SaveGeomericsDebugData; // 0x24
	bool m_PreVisualizationOnly; // 0x25
	bool m_GlobalSolutionEnable; // 0x26
	bool m_DisableTerrain; // 0x27
	bool m_DebugDataOnly; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_GenerateEnlightenSceneDescParams_H
