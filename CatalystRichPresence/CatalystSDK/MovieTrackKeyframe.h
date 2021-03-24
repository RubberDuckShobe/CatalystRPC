//
// Generated with FrostbiteGen by Chod
// File: SDK\MovieTrackKeyframe.h
// Created: Wed Mar 10 19:05:43 2021
//

#ifndef FBGEN_MovieTrackKeyframe_H
#define FBGEN_MovieTrackKeyframe_H

#include "MovieTextureAsset.h"
#include "DataContainer.h"

class MovieTrackKeyframe :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A1F0;
	}
	float m_Time; // 0x10
	float m_Length; // 0x14
	MovieTextureAsset* m_Movie; // 0x18
}; // size = 0x20

#endif // FBGEN_MovieTrackKeyframe_H
