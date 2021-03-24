//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSharedContentBlockEntityData.h
// Created: Wed Mar 10 19:03:52 2021
//

#ifndef FBGEN_PamSharedContentBlockEntityData_H
#define FBGEN_PamSharedContentBlockEntityData_H

#include "PamPaddedSphereData.h"

class PamSharedContentBlockEntityData :
	public PamPaddedSphereData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D860;
	}
	bool m_Enabled; // 0x80
	unsigned char _0x81[0xf];
}; // size = 0x90

#endif // FBGEN_PamSharedContentBlockEntityData_H
