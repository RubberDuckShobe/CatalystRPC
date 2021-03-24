//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSharedContentInfo.h
// Created: Wed Mar 10 19:03:52 2021
//

#ifndef FBGEN_PamSharedContentInfo_H
#define FBGEN_PamSharedContentInfo_H

#include "PamSharedContentId.h"
struct PamSharedContentInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142851D78;
	}
	PamSharedContentId m_ContentId; // 0x0
	float m_MaxZoomLevel; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_PamSharedContentInfo_H
