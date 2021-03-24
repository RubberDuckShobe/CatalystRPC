//
// Generated with FrostbiteGen by Chod
// File: SDK\GroundAttachTransformLayerData.h
// Created: Wed Mar 10 19:06:37 2021
//

#ifndef FBGEN_GroundAttachTransformLayerData_H
#define FBGEN_GroundAttachTransformLayerData_H

#include "GroundAttachMethod.h"
#include "TransformLayerData.h"

class GroundAttachTransformLayerData :
	public TransformLayerData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823E80;
	}
	GroundAttachMethod m_AttachMethod; // 0x38
	float m_RaycastStartHeight; // 0x3c
	float m_RaycastEndHeight; // 0x40
	bool m_AllowAboveGround; // 0x44
	unsigned char _0x45[0x3];
}; // size = 0x48

#endif // FBGEN_GroundAttachTransformLayerData_H
