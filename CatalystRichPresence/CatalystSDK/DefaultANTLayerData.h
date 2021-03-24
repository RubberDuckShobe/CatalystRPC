//
// Generated with FrostbiteGen by Chod
// File: SDK\DefaultANTLayerData.h
// Created: Wed Mar 10 19:07:16 2021
//

#ifndef FBGEN_DefaultANTLayerData_H
#define FBGEN_DefaultANTLayerData_H

#include "AntRef.h"
#include "ANTClipKeyframeTrackData.h"
#include "ANTBlendKeyframeTrackData.h"
#include "ANTLayerData.h"

class DefaultANTLayerData :
	public ANTLayerData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428187E0;
	}
	AntRef m_BlendMaskList; // 0x30
	unsigned char _0x44[0x4];
	ANTClipKeyframeTrackData* m_ClipTrack; // 0x48
	ANTBlendKeyframeTrackData* m_BlendTrack; // 0x50
}; // size = 0x58

#endif // FBGEN_DefaultANTLayerData_H
