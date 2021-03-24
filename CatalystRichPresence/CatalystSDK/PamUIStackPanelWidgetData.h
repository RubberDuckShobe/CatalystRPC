//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIStackPanelWidgetData.h
// Created: Wed Mar 10 19:03:23 2021
//

#ifndef FBGEN_PamUIStackPanelWidgetData_H
#define FBGEN_PamUIStackPanelWidgetData_H

#include "PamUIStackPanelMode.h"
#include "UIElementAlignment.h"
#include "PamUIStackPanelModeGridAnchor.h"
#include "PamUIWidgetEntityData.h"

class PamUIStackPanelWidgetData :
	public PamUIWidgetEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288D5A0;
	}
	PamUIStackPanelMode m_Mode; // 0x90
	UIElementAlignment m_Alignment; // 0x94
	PamUIStackPanelModeGridAnchor m_GridAnchor; // 0x98
	float m_Spacing; // 0x9c
	float m_VerticalSpacing; // 0xa0
	bool m_ExpandElements; // 0xa4
	unsigned char _0xa5[0x3];
}; // size = 0xa8

#endif // FBGEN_PamUIStackPanelWidgetData_H
