//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMovementExclusionEntityData.h
// Created: Wed Mar 10 19:04:21 2021
//

#ifndef FBGEN_PamMovementExclusionEntityData_H
#define FBGEN_PamMovementExclusionEntityData_H

#include "PamFindableMovementVolumeEntityData.h"

class PamMovementExclusionEntityData :
	public PamFindableMovementVolumeEntityData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878C00;
	}
	bool m_ExcludeVault; // 0xa0
	bool m_ExcludeHeaveUp; // 0xa1
	bool m_ExcludeHang; // 0xa2
	bool m_ExcludeWallrun; // 0xa3
	bool m_ExcludeMagrope; // 0xa4
	unsigned char _0xa5[0xb];
}; // size = 0xb0

#endif // FBGEN_PamMovementExclusionEntityData_H
