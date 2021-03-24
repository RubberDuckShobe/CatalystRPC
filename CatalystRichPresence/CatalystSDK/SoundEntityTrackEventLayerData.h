//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundEntityTrackEventLayerData.h
// Created: Wed Mar 10 19:01:15 2021
//

#ifndef FBGEN_SoundEntityTrackEventLayerData_H
#define FBGEN_SoundEntityTrackEventLayerData_H

#include "Array.h"
#include "SoundEntityTrackLayerData.h"

class SoundEntityTrackEventLayerData :
	public SoundEntityTrackLayerData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7E60;
	}
	Array<SoundEntityTrackEventKeyframeData*> m_Keyframes; // 0x30
}; // size = 0x38

#endif // FBGEN_SoundEntityTrackEventLayerData_H
