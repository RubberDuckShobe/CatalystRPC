//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSpatialFilterRules.h
// Created: Wed Mar 10 19:03:48 2021
//

#ifndef FBGEN_PamSpatialFilterRules_H
#define FBGEN_PamSpatialFilterRules_H

struct PamSpatialFilterRules
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872660;
	}
	float m_FilterDistanceStart; // 0x0
	float m_FilterDistanceEnd; // 0x4
	float m_MaxZoomStart; // 0x8
	float m_MaxZoomEnd; // 0xc
	bool m_EnableZoomBlending; // 0x10
	unsigned char _0x11[0x3];
}; // size = 0x14

#endif // FBGEN_PamSpatialFilterRules_H
