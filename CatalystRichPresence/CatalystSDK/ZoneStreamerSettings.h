//
// Generated with FrostbiteGen by Chod
// File: SDK\ZoneStreamerSettings.h
// Created: Wed Mar 10 18:58:40 2021
//

#ifndef FBGEN_ZoneStreamerSettings_H
#define FBGEN_ZoneStreamerSettings_H

#include "DataContainer.h"

class ZoneStreamerSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289FBA0;
	}
	float m_Draw3dNameScale; // 0x10
	float m_Draw2dScale; // 0x14
	float m_Draw2dPointSize; // 0x18
	float m_Draw2dBgAlpha; // 0x1c
	const char* m_SelectedStreamer; // 0x20
	bool m_TestZoneHeights; // 0x28
	bool m_PinVisitedZones; // 0x29
	bool m_PauseAll; // 0x2a
	bool m_DrawStats; // 0x2b
	bool m_Draw3dDebug; // 0x2c
	bool m_Draw2dDebug; // 0x2d
	bool m_Draw2dZones; // 0x2e
	bool m_Draw2dRotate; // 0x2f
	bool m_Draw2dZoneStates; // 0x30
	bool m_Draw2dCentroids; // 0x31
	bool m_Draw2dNames; // 0x32
	unsigned char _0x33[0x5];
}; // size = 0x38

#endif // FBGEN_ZoneStreamerSettings_H
