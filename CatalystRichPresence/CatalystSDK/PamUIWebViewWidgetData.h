//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIWebViewWidgetData.h
// Created: Wed Mar 10 19:03:21 2021
//

#ifndef FBGEN_PamUIWebViewWidgetData_H
#define FBGEN_PamUIWebViewWidgetData_H

#include "Array.h"
#include "PamUIWidgetEntityData.h"

class PamUIWebViewWidgetData :
	public PamUIWidgetEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288D7E0;
	}
	const char* m_URL; // 0x90
	Array<const char*> m_JavascriptOutputEvents; // 0x98
}; // size = 0xa0

#endif // FBGEN_PamUIWebViewWidgetData_H
