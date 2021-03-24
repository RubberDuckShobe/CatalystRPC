//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementEnemyScannerEntityData.h
// Created: Wed Mar 10 19:03:35 2021
//

#ifndef FBGEN_PamUIElementEnemyScannerEntityData_H
#define FBGEN_PamUIElementEnemyScannerEntityData_H

#include "LinearTransform.h"
#include "Array.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementEnemyScannerEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888A80;
	}
	LinearTransform m_PlayerTransform; // 0x110
	Array<PamUIEnemyType> m_EnemyTypes; // 0x150
	Array<PamUIEnemyType> m_ZoomToFitEnemyTypes; // 0x158
	Array<PamUIEnemyType> m_MagneticEnemyTypes; // 0x160
	float m_SquareSize; // 0x168
	float m_MetersPerSquare; // 0x16c
	float m_Zoom; // 0x170
	float m_CullDistanceSquares; // 0x174
	float m_Radius; // 0x178
	float m_ExtraZoomRadius; // 0x17c
}; // size = 0x180

#endif // FBGEN_PamUIElementEnemyScannerEntityData_H
