//
// Generated with FrostbiteGen by Chod
// File: SDK\RenderFramesKeyframe.h
// Created: Wed Mar 10 19:02:38 2021
//

#ifndef FBGEN_RenderFramesKeyframe_H
#define FBGEN_RenderFramesKeyframe_H

#include "DataContainer.h"

class RenderFramesKeyframe :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846FA0;
	}
	float m_Time; // 0x10
	float m_Length; // 0x14
	const char* m_RenderFileName; // 0x18
	const char* m_RenderFolderName; // 0x20
}; // size = 0x28

#endif // FBGEN_RenderFramesKeyframe_H
