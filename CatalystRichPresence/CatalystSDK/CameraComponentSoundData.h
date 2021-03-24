//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraComponentSoundData.h
// Created: Wed Mar 10 19:08:21 2021
//

#ifndef FBGEN_CameraComponentSoundData_H
#define FBGEN_CameraComponentSoundData_H

#include "SoundAsset.h"
#include "DataContainer.h"

class CameraComponentSoundData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428165C0;
	}
	SoundAsset* m_SwitchToAlternateViewSound; // 0x10
	SoundAsset* m_SwitchToNormalViewSound; // 0x18
}; // size = 0x20

#endif // FBGEN_CameraComponentSoundData_H
