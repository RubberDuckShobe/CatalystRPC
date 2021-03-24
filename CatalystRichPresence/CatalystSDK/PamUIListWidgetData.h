//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIListWidgetData.h
// Created: Wed Mar 10 19:03:29 2021
//

#ifndef FBGEN_PamUIListWidgetData_H
#define FBGEN_PamUIListWidgetData_H

#include "Vec4.h"
#include "PamUIWidgetEntityData.h"

class PamUIListWidgetData :
	public PamUIWidgetEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288DA80;
	}
	Vec4 m_CullPadding; // 0x90
	float m_RowOffset; // 0xa0
	int m_GridColumns; // 0xa4
	const char* m_UserString; // 0xa8
	int m_MaxEntries; // 0xb0
	int m_SelectedIndex; // 0xb4
	bool m_TopDown; // 0xb8
	bool m_Vertical; // 0xb9
	bool m_GridMode; // 0xba
	bool m_WrapSelection; // 0xbb
	bool m_IsCullingEnabled; // 0xbc
	unsigned char _0xbd[0x3];
}; // size = 0xc0

#endif // FBGEN_PamUIListWidgetData_H
