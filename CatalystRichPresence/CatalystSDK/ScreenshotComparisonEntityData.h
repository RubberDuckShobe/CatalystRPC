//
// Generated with FrostbiteGen by Chod
// File: SDK\ScreenshotComparisonEntityData.h
// Created: Wed Mar 10 19:02:30 2021
//

#ifndef FBGEN_ScreenshotComparisonEntityData_H
#define FBGEN_ScreenshotComparisonEntityData_H

#include "EntityData.h"

class ScreenshotComparisonEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820310;
	}
	int m_AllowedDiffPercentage; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_ScreenshotName; // 0x20
	unsigned int m_WaitFrames; // 0x28
	bool m_WaitForStreaming; // 0x2c
	bool m_EnableDebugRendering; // 0x2d
	unsigned char _0x2e[0x2];
}; // size = 0x30

#endif // FBGEN_ScreenshotComparisonEntityData_H
