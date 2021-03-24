//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementShapeFanProgressEntityData.h
// Created: Wed Mar 10 19:03:32 2021
//

#ifndef FBGEN_PamUIElementShapeFanProgressEntityData_H
#define FBGEN_PamUIElementShapeFanProgressEntityData_H

#include "Vec3.h"
#include "PamUIElementShapeFanEntityData.h"

class PamUIElementShapeFanProgressEntityData :
	public PamUIElementShapeFanEntityData // size = 0x150
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889080;
	}
	Vec3 m_StartColor; // 0x150
	Vec3 m_EndColor; // 0x160
	float m_StartAlpha; // 0x170
	float m_EndAlpha; // 0x174
	float m_FadeWidth; // 0x178
	float m_Progress; // 0x17c
}; // size = 0x180

#endif // FBGEN_PamUIElementShapeFanProgressEntityData_H
