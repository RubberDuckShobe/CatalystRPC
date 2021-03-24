//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUICellAnimationWidgetData.h
// Created: Wed Mar 10 19:03:39 2021
//

#ifndef FBGEN_PamUICellAnimationWidgetData_H
#define FBGEN_PamUICellAnimationWidgetData_H

#include "PamUIWidgetEntityData.h"

class PamUICellAnimationWidgetData :
	public PamUIWidgetEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288D960;
	}
	const char* m_TemplateName; // 0x90
	const char* m_Prefix; // 0x98
	int m_From; // 0xa0
	int m_To; // 0xa4
	float m_FrameRate; // 0xa8
	unsigned char _0xac[0x4];
}; // size = 0xb0

#endif // FBGEN_PamUICellAnimationWidgetData_H
