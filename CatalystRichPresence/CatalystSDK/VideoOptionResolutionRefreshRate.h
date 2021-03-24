//
// Generated with FrostbiteGen by Chod
// File: SDK\VideoOptionResolutionRefreshRate.h
// Created: Wed Mar 10 18:59:15 2021
//

#ifndef FBGEN_VideoOptionResolutionRefreshRate_H
#define FBGEN_VideoOptionResolutionRefreshRate_H

#include "DataContainer.h"

class VideoOptionResolutionRefreshRate :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428794A0;
	}
	float m_RefreshRate; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_VideoOptionResolutionRefreshRate_H
