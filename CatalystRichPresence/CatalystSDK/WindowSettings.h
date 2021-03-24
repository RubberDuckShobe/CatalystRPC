//
// Generated with FrostbiteGen by Chod
// File: SDK\WindowSettings.h
// Created: Wed Mar 10 18:58:45 2021
//

#ifndef FBGEN_WindowSettings_H
#define FBGEN_WindowSettings_H

#include "SystemSettings.h"

class WindowSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810860;
	}
	int m_PosX; // 0x20
	int m_PosY; // 0x24
	unsigned int m_Width; // 0x28
	unsigned int m_Height; // 0x2c
	bool m_AutoSize; // 0x30
	bool m_FullscreenAutoSize; // 0x31
	bool m_EnableEscape; // 0x32
	bool m_EnableInputOnActivate; // 0x33
	bool m_HibernateOnClose; // 0x34
	bool m_Hidden; // 0x35
	bool m_Minimized; // 0x36
	bool m_AllowWindowsLargerThanDesktop; // 0x37
	bool m_Borderless; // 0x38
	bool m_Layered; // 0x39
	bool m_ClipChildren; // 0x3a
	unsigned char _0x3b[0x5];
}; // size = 0x40

#endif // FBGEN_WindowSettings_H
