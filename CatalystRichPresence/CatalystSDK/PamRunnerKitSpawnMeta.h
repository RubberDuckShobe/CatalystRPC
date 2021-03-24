//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRunnerKitSpawnMeta.h
// Created: Wed Mar 10 19:04:03 2021
//

#ifndef FBGEN_PamRunnerKitSpawnMeta_H
#define FBGEN_PamRunnerKitSpawnMeta_H

#include "LinearTransform.h"
#include "Array.h"
struct PamRunnerKitSpawnMeta
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877800;
	}
	LinearTransform m_WorldTransform; // 0x0
	Array<Guid> m_KitTypeGuids; // 0x40
	unsigned char _0x48[0x8];
}; // size = 0x50

#endif // FBGEN_PamRunnerKitSpawnMeta_H
