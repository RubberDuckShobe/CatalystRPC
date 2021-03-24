//
// Generated with FrostbiteGen by Chod
// File: SDK\VideoOptionResolution.h
// Created: Wed Mar 10 18:59:15 2021
//

#ifndef FBGEN_VideoOptionResolution_H
#define FBGEN_VideoOptionResolution_H

#include "Array.h"
#include "DataContainer.h"

class VideoOptionResolution :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142879440;
	}
	int m_Width; // 0x10
	int m_Height; // 0x14
	Array<VideoOptionResolutionRefreshRate*> m_RefreshRates; // 0x18
}; // size = 0x20

#endif // FBGEN_VideoOptionResolution_H
