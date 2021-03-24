//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUILevelLoadData.h
// Created: Wed Mar 10 19:03:29 2021
//

#ifndef FBGEN_PamUILevelLoadData_H
#define FBGEN_PamUILevelLoadData_H

#include "DataContainer.h"

class PamUILevelLoadData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428819D0;
	}
	const char* m_ScreenDataPath; // 0x10
	const char* m_WidgetDataPath; // 0x18
	const char* m_LoadingMoviePath; // 0x20
	float m_LoadingMusicDelay; // 0x28
	float m_LoadingVideoDelay; // 0x2c
	const char* m_LoadingMusicPath; // 0x30
}; // size = 0x38

#endif // FBGEN_PamUILevelLoadData_H
