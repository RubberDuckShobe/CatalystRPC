//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPathLinkBinding.h
// Created: Wed Mar 10 19:04:16 2021
//

#ifndef FBGEN_PamPathLinkBinding_H
#define FBGEN_PamPathLinkBinding_H

#include "AntRef.h"
struct PamPathLinkBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C078;
	}
	AntRef m_AntInPathLink; // 0x0
	AntRef m_TurnAngle; // 0x14
	AntRef m_TurnPhase; // 0x28
	AntRef m_PathLinkTrigger; // 0x3c
	AntRef m_PathLinkIsMoving; // 0x50
	AntRef m_PathLinkType; // 0x64
	AntRef m_WaypointFocalPoint; // 0x78
	AntRef m_WaypointFocalPointDirection; // 0x8c
	AntRef m_WaypointHeightOffset; // 0xa0
	AntRef m_PathLinkDepth; // 0xb4
}; // size = 0xc8

#endif // FBGEN_PamPathLinkBinding_H
