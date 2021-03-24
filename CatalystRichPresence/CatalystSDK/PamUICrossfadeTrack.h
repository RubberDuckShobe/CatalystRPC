//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUICrossfadeTrack.h
// Created: Wed Mar 10 19:03:38 2021
//

#ifndef FBGEN_PamUICrossfadeTrack_H
#define FBGEN_PamUICrossfadeTrack_H

#include "PamUICrossfadeVec3Track.h"
#include "PamUICrossfadeVec4Track.h"
#include "PamUICrossfadeColorTrack.h"
#include "PamUICrossfadeTrackLoopType.h"
#include "PamUICrossfadeFloatTrack.h"
#include "PamUICrossfadeIntTrack.h"
#include "PamUICrossfadeVec2Track.h"
#include "PamUICrossfadeTransformTrack.h"
struct PamUICrossfadeTrack
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888860;
	}
	PamUICrossfadeVec3Track m_Vec3Track; // 0x0
	PamUICrossfadeVec4Track m_Vec4Track; // 0x20
	PamUICrossfadeColorTrack m_ColorTrack; // 0x40
	const char* m_Name; // 0x70
	float m_Duration; // 0x78
	PamUICrossfadeTrackLoopType m_LoopType; // 0x7c
	PamUICrossfadeFloatTrack m_FloatTrack; // 0x80
	PamUICrossfadeIntTrack m_IntTrack; // 0x88
	PamUICrossfadeVec2Track m_Vec2Track; // 0x90
	PamUICrossfadeTransformTrack m_TransformTrack; // 0xa0
	unsigned char _0xe8[0x8];
}; // size = 0xf0

#endif // FBGEN_PamUICrossfadeTrack_H
