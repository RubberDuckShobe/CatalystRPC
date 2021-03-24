//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStaticModelEntityData.h
// Created: Wed Mar 10 19:03:46 2021
//

#ifndef FBGEN_PamStaticModelEntityData_H
#define FBGEN_PamStaticModelEntityData_H

#include "StaticModelEntityData.h"

class PamStaticModelEntityData :
	public StaticModelEntityData // size = 0xe0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D140;
	}
	unsigned int m_RunnersVisionVariation; // 0xe0
	bool m_PrimaryInRVLayer; // 0xe4
	bool m_EnableOutOfBoundsCheck; // 0xe5
	bool m_RunnersVisionEnable; // 0xe6
	bool m_CantClimb; // 0xe7
	bool m_CantStand; // 0xe8
	bool m_CantVault; // 0xe9
	bool m_CantWallrun; // 0xea
	unsigned char _0xeb[0x5];
}; // size = 0xf0

#endif // FBGEN_PamStaticModelEntityData_H
