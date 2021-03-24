//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIDebugStartPointCategoryDataProviderEntityData.h
// Created: Wed Mar 10 19:03:38 2021
//

#ifndef FBGEN_PamUIDebugStartPointCategoryDataProviderEntityData_H
#define FBGEN_PamUIDebugStartPointCategoryDataProviderEntityData_H

#include "PamListRow.h"
#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamUIDebugStartPointCategoryDataProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889800;
	}
	PamListRow* m_SelectedData; // 0x20
	int m_MaxCategories; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_PamUIDebugStartPointCategoryDataProviderEntityData_H
