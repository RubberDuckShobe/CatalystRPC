//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIScrollPanelWidgetData.h
// Created: Wed Mar 10 19:03:24 2021
//

#ifndef FBGEN_PamUIScrollPanelWidgetData_H
#define FBGEN_PamUIScrollPanelWidgetData_H

#include "Vec4.h"
#include "PamUIWidgetEntityData.h"

class PamUIScrollPanelWidgetData :
	public PamUIWidgetEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288D540;
	}
	Vec4 m_ScrollRectIntoView; // 0x90
	float m_HorizontalOffset; // 0xa0
	float m_VerticalOffset; // 0xa4
	bool m_AutoScrollRectIntoView; // 0xa8
	bool m_ScrollHorizontally; // 0xa9
	bool m_ScrollVertically; // 0xaa
	unsigned char _0xab[0x5];
}; // size = 0xb0

#endif // FBGEN_PamUIScrollPanelWidgetData_H
