//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUICrossfadeColorTrack.h
// Created: Wed Mar 10 19:03:39 2021
//

#ifndef FBGEN_PamUICrossfadeColorTrack_H
#define FBGEN_PamUICrossfadeColorTrack_H

#include "Vec3.h"
struct PamUICrossfadeColorTrack
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888740;
	}
	Vec3 m_FromColor; // 0x0
	Vec3 m_ToColor; // 0x10
	float m_FromAlpha; // 0x20
	float m_ToAlpha; // 0x24
	unsigned char _0x28[0x8];
}; // size = 0x30

#endif // FBGEN_PamUICrossfadeColorTrack_H
