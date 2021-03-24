//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerCameraTransformLayerData.h
// Created: Wed Mar 10 19:04:15 2021
//

#ifndef FBGEN_PamPlayerCameraTransformLayerData_H
#define FBGEN_PamPlayerCameraTransformLayerData_H

#include "EntityTrackBaseData.h"
#include "TransformLayerData.h"

class PamPlayerCameraTransformLayerData :
	public TransformLayerData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428522E0;
	}
	EntityTrackBaseData* m_CharacterEntityTrack; // 0x38
	bool m_ApplyFrostEdCamera180Flip; // 0x40
	unsigned char _0x41[0x7];
}; // size = 0x48

#endif // FBGEN_PamPlayerCameraTransformLayerData_H
