//
// Generated with FrostbiteGen by Chod
// File: SDK\VideoOptionsScreens.h
// Created: Wed Mar 10 18:59:15 2021
//

#ifndef FBGEN_VideoOptionsScreens_H
#define FBGEN_VideoOptionsScreens_H

#include "Array.h"
#include "DataContainer.h"

class VideoOptionsScreens :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142879380;
	}
	Array<VideoOptionsScreen*> m_Screens; // 0x10
}; // size = 0x18

#endif // FBGEN_VideoOptionsScreens_H
