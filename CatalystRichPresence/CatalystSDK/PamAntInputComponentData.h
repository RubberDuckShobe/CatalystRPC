//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAntInputComponentData.h
// Created: Wed Mar 10 19:05:08 2021
//

#ifndef FBGEN_PamAntInputComponentData_H
#define FBGEN_PamAntInputComponentData_H

#include "PamAntInputBinding.h"
#include "AntInputComponentData.h"

class PamAntInputComponentData :
	public AntInputComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B710;
	}
	PamAntInputBinding m_AntInputBinding; // 0x70
	unsigned char _0x98[0x8];
}; // size = 0xa0

#endif // FBGEN_PamAntInputComponentData_H
