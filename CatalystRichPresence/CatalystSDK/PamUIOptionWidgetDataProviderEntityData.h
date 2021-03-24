//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIOptionWidgetDataProviderEntityData.h
// Created: Wed Mar 10 19:03:25 2021
//

#ifndef FBGEN_PamUIOptionWidgetDataProviderEntityData_H
#define FBGEN_PamUIOptionWidgetDataProviderEntityData_H

#include "ProfileOptionDataEnum.h"
#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamUIOptionWidgetDataProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889DA0;
	}
	ProfileOptionDataEnum* m_OptionData; // 0x20
}; // size = 0x28

#endif // FBGEN_PamUIOptionWidgetDataProviderEntityData_H
