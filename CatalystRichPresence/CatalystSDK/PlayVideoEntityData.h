//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayVideoEntityData.h
// Created: Wed Mar 10 19:03:06 2021
//

#ifndef FBGEN_PlayVideoEntityData_H
#define FBGEN_PlayVideoEntityData_H

#include "MovieTextureAsset.h"
#include "Array.h"
#include "EntityData.h"

class PlayVideoEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B690;
	}
	MovieTextureAsset* m_Movie; // 0x18
	const char* m_NetworkStreamingUrl; // 0x20
	const char* m_VideoIdentifier; // 0x28
	float m_MarkerOffset; // 0x30
	unsigned char _0x34[0x4];
	Array<Marker> m_MarkerOffsets; // 0x38
	bool m_Loop; // 0x40
	bool m_KeepBlackScreen; // 0x41
	bool m_AllowSkip; // 0x42
	bool m_DrawInWidget; // 0x43
	bool m_RenderWorld; // 0x44
	bool m_DrawOnTop; // 0x45
	bool m_Force30HzFramerate; // 0x46
	bool m_DisableNonCubemapRootViews; // 0x47
}; // size = 0x48

#endif // FBGEN_PlayVideoEntityData_H
