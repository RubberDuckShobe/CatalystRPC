//
// Generated with FrostbiteGen by Chod
// File: SDK\BlendedPoseTransition.h
// Created: Wed Mar 10 19:08:30 2021
//

#ifndef FBGEN_BlendedPoseTransition_H
#define FBGEN_BlendedPoseTransition_H

#include "PoseTransitionBase.h"

class BlendedPoseTransition :
	public PoseTransitionBase // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823AC0;
	}
	float m_BlendTime; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_BlendedPoseTransition_H
