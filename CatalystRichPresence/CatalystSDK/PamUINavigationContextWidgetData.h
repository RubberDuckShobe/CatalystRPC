//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUINavigationContextWidgetData.h
// Created: Wed Mar 10 19:03:26 2021
//

#ifndef FBGEN_PamUINavigationContextWidgetData_H
#define FBGEN_PamUINavigationContextWidgetData_H

#include "PamUIWidgetEntityData.h"

class PamUINavigationContextWidgetData :
	public PamUIWidgetEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288D720;
	}
	int m_AutoSelectIndex; // 0x90
	bool m_AutoActivate; // 0x94
	bool m_AutoSelectFirst; // 0x95
	bool m_ForceSelection; // 0x96
	bool m_AutoSelectOnPropertyChanged; // 0x97
}; // size = 0x98

#endif // FBGEN_PamUINavigationContextWidgetData_H
