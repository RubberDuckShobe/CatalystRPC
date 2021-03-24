//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIDebugStartPointDataProviderEntityData.h
// Created: Wed Mar 10 19:03:38 2021
//

#ifndef FBGEN_PamUIDebugStartPointDataProviderEntityData_H
#define FBGEN_PamUIDebugStartPointDataProviderEntityData_H

#include "PamListRow.h"
#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamUIDebugStartPointDataProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428897A0;
	}
	const char* m_Category; // 0x20
	int m_MaxStartPoints; // 0x28
	unsigned char _0x2c[0x4];
	PamListRow* m_SelectedData; // 0x30
}; // size = 0x38

#endif // FBGEN_PamUIDebugStartPointDataProviderEntityData_H
