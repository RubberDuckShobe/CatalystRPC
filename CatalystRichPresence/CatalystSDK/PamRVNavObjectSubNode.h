//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRVNavObjectSubNode.h
// Created: Wed Mar 10 19:04:08 2021
//

#ifndef FBGEN_PamRVNavObjectSubNode_H
#define FBGEN_PamRVNavObjectSubNode_H

#include "Vec3.h"
#include "PamRVNavObject.h"
struct PamRVNavObjectSubNode
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872860;
	}
	Vec3 m_entryPoint; // 0x0
	Vec3 m_exitPoint; // 0x10
	PamRVNavObject* m_parent; // 0x20
	unsigned char _0x28[0x8];
}; // size = 0x30

#endif // FBGEN_PamRVNavObjectSubNode_H
