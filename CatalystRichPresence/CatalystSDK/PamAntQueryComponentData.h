//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAntQueryComponentData.h
// Created: Wed Mar 10 19:05:08 2021
//

#ifndef FBGEN_PamAntQueryComponentData_H
#define FBGEN_PamAntQueryComponentData_H

#include "Array.h"
#include "GameComponentData.h"

class PamAntQueryComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B950;
	}
	Array<FbToAntMaterialMapping> m_FrostbiteToAntMaterialMapping; // 0x70
	bool m_EnableSpatialQueries; // 0x78
	bool m_CanFindMAGRopeSwing; // 0x79
	bool m_CanFindMAGRopePullUp; // 0x7a
	bool m_CanFindMAGRopePullDown; // 0x7b
	bool m_CanFindMAGRopeLineConnector; // 0x7c
	unsigned char _0x7d[0x3];
}; // size = 0x80

#endif // FBGEN_PamAntQueryComponentData_H
