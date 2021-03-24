//
// Generated with FrostbiteGen by Chod
// File: SDK\PamFinisherCameraOriginTransformLayerData.h
// Created: Wed Mar 10 19:04:38 2021
//

#ifndef FBGEN_PamFinisherCameraOriginTransformLayerData_H
#define FBGEN_PamFinisherCameraOriginTransformLayerData_H

#include "TransformLayerData.h"

class PamFinisherCameraOriginTransformLayerData :
	public TransformLayerData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852340;
	}
	bool m_LockCameraToEnemy; // 0x38
	bool m_ApplyFrostEdCamera180Flip; // 0x39
	unsigned char _0x3a[0x6];
}; // size = 0x40

#endif // FBGEN_PamFinisherCameraOriginTransformLayerData_H
