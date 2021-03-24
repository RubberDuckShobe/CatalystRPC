//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMapInfoPanelWidgetData.h
// Created: Wed Mar 10 19:03:28 2021
//

#ifndef FBGEN_PamUIMapInfoPanelWidgetData_H
#define FBGEN_PamUIMapInfoPanelWidgetData_H

#include "Vec2.h"
#include "PamUIWidgetEntityData.h"

class PamUIMapInfoPanelWidgetData :
	public PamUIWidgetEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288D600;
	}
	unsigned int m_NumPanels; // 0x90
	float m_TransitionTime; // 0x94
	Vec2 m_StepDirection; // 0x98
	Vec2 m_FirstOffset; // 0xa0
	bool m_DivideSize; // 0xa8
	unsigned char _0xa9[0x7];
}; // size = 0xb0

#endif // FBGEN_PamUIMapInfoPanelWidgetData_H
