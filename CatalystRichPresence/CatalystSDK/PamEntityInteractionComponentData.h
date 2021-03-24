//
// Generated with FrostbiteGen by Chod
// File: SDK\PamEntityInteractionComponentData.h
// Created: Wed Mar 10 19:04:39 2021
//

#ifndef FBGEN_PamEntityInteractionComponentData_H
#define FBGEN_PamEntityInteractionComponentData_H

#include "GameComponentData.h"

class PamEntityInteractionComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D020;
	}
	float m_LookAtSurfaceMaxDistance; // 0x70
	bool m_LookAtSurfaceEnabled; // 0x74
	unsigned char _0x75[0xb];
}; // size = 0x80

#endif // FBGEN_PamEntityInteractionComponentData_H
