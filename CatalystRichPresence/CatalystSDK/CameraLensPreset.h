//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraLensPreset.h
// Created: Wed Mar 10 19:08:20 2021
//

#ifndef FBGEN_CameraLensPreset_H
#define FBGEN_CameraLensPreset_H

#include "VisualEnvironmentBlueprint.h"
#include "Asset.h"

class CameraLensPreset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428174C0;
	}
	float m_DefaultFocalLength; // 0x18
	float m_SensorWidth; // 0x1c
	float m_SensorHeight; // 0x20
	unsigned char _0x24[0x4];
	VisualEnvironmentBlueprint* m_VisualEnvironment; // 0x28
}; // size = 0x30

#endif // FBGEN_CameraLensPreset_H
