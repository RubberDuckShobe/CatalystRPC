//
// Generated with FrostbiteGen by Chod
// File: SDK\AntMemorySettings.h
// Created: Wed Mar 10 19:08:43 2021
//

#ifndef FBGEN_AntMemorySettings_H
#define FBGEN_AntMemorySettings_H

#include "DataContainer.h"

class AntMemorySettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C2D70;
	}
	int m_RTPoolLayersControllers; // 0x10
	int m_RTPoolStateflowControllers; // 0x14
	int m_RTPoolStateflowNodeControllers; // 0x18
	int m_RTPoolTransitionControllers; // 0x1c
	int m_RTPoolClipControllers; // 0x20
	int m_RTPoolChooserControllers; // 0x24
	int m_RTPoolLoopingControllers; // 0x28
	int m_RTPoolTransparentControllers; // 0x2c
}; // size = 0x30

#endif // FBGEN_AntMemorySettings_H
