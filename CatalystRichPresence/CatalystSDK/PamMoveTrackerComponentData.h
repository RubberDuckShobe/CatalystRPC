//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMoveTrackerComponentData.h
// Created: Wed Mar 10 19:04:22 2021
//

#ifndef FBGEN_PamMoveTrackerComponentData_H
#define FBGEN_PamMoveTrackerComponentData_H

#include "PamMoveTrackerAntBinding.h"
#include "AntRef.h"
#include "GameComponentData.h"

class PamMoveTrackerComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142885340;
	}
	PamMoveTrackerAntBinding m_AntBindings; // 0x70
	AntRef m_MoveTrackerAsset; // 0xe8
	bool m_IsInFlow; // 0xfc
	unsigned char _0xfd[0x3];
}; // size = 0x100

#endif // FBGEN_PamMoveTrackerComponentData_H
