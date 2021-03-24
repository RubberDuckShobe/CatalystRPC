//
// Generated with FrostbiteGen by Chod
// File: SDK\VisualEnvironmentSettings.h
// Created: Wed Mar 10 18:59:12 2021
//

#ifndef FBGEN_VisualEnvironmentSettings_H
#define FBGEN_VisualEnvironmentSettings_H

#include "DataContainer.h"

class VisualEnvironmentSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846340;
	}
	float m_SunRotationX; // 0x10
	float m_SunRotationY; // 0x14
	float m_SkyRotationPhi; // 0x18
	int m_DrawStats; // 0x1c
	bool m_DrawOnlyVisibleStats; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_VisualEnvironmentSettings_H
