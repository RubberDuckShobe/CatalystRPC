//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIListRowWidgetData.h
// Created: Wed Mar 10 19:03:29 2021
//

#ifndef FBGEN_PamUIListRowWidgetData_H
#define FBGEN_PamUIListRowWidgetData_H

#include "Vec4.h"
#include "PamUIWidgetEntityData.h"

class PamUIListRowWidgetData :
	public PamUIWidgetEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288DA20;
	}
	Vec4 m_SelectedRect; // 0x90
	unsigned int m_RowDataTypeHash; // 0xa0
	unsigned char _0xa4[0xc];
}; // size = 0xb0

#endif // FBGEN_PamUIListRowWidgetData_H
