//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIScreenResolutionWidgetDataProviderEntityData.h
// Created: Wed Mar 10 19:03:24 2021
//

#ifndef FBGEN_PamUIScreenResolutionWidgetDataProviderEntityData_H
#define FBGEN_PamUIScreenResolutionWidgetDataProviderEntityData_H

#include "VideoOptionsScreens.h"
#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamUIScreenResolutionWidgetDataProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889C20;
	}
	int m_SelectedScreen; // 0x20
	int m_SelectedResolution; // 0x24
	int m_SelectedRefreshRate; // 0x28
	unsigned char _0x2c[0x4];
	VideoOptionsScreens* m_Screens; // 0x30
}; // size = 0x38

#endif // FBGEN_PamUIScreenResolutionWidgetDataProviderEntityData_H
