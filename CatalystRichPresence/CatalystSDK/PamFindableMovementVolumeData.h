//
// Generated with FrostbiteGen by Chod
// File: SDK\PamFindableMovementVolumeData.h
// Created: Wed Mar 10 19:04:39 2021
//

#ifndef FBGEN_PamFindableMovementVolumeData_H
#define FBGEN_PamFindableMovementVolumeData_H

#include "OBBData.h"

class PamFindableMovementVolumeData :
	public OBBData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884E00;
	}
	bool m_Enabled; // 0x70
	unsigned char _0x71[0xf];
}; // size = 0x80

#endif // FBGEN_PamFindableMovementVolumeData_H
