//
// Generated with FrostbiteGen by Chod
// File: SDK\VideoOptionsScreen.h
// Created: Wed Mar 10 18:59:15 2021
//

#ifndef FBGEN_VideoOptionsScreen_H
#define FBGEN_VideoOptionsScreen_H

#include "Array.h"
#include "DataContainer.h"

class VideoOptionsScreen :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428793E0;
	}
	Array<VideoOptionResolution*> m_Resolutions; // 0x10
	int m_CurrentResolution; // 0x18
	int m_CurrentRefreshRateIndex; // 0x1c
}; // size = 0x20

#endif // FBGEN_VideoOptionsScreen_H
