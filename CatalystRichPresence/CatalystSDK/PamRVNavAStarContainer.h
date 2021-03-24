//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRVNavAStarContainer.h
// Created: Wed Mar 10 19:04:08 2021
//

#ifndef FBGEN_PamRVNavAStarContainer_H
#define FBGEN_PamRVNavAStarContainer_H

#include "Array.h"
struct PamRVNavAStarContainer
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872680;
	}
	Array<PamRVNavAStarNode> m_nodes; // 0x0
	Array<PamRVNavAStarLink> m_links; // 0x8
}; // size = 0x10

#endif // FBGEN_PamRVNavAStarContainer_H
