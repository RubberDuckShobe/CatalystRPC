//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSharedContentMapMarkerUpdate.h
// Created: Wed Mar 10 19:03:52 2021
//

#ifndef FBGEN_PamSharedContentMapMarkerUpdate_H
#define FBGEN_PamSharedContentMapMarkerUpdate_H

#include "PamSharedContentId.h"
struct PamSharedContentMapMarkerUpdate
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142851D98;
	}
	PamSharedContentId m_ContentId; // 0x0
	bool m_Blocked; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_PamSharedContentMapMarkerUpdate_H
