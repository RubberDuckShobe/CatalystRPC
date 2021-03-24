//
// Generated with FrostbiteGen by Chod
// File: SDK\AnimatedPoseTransition.h
// Created: Wed Mar 10 19:08:45 2021
//

#ifndef FBGEN_AnimatedPoseTransition_H
#define FBGEN_AnimatedPoseTransition_H

#include "AntRef.h"
#include "PoseTransitionBase.h"

class AnimatedPoseTransition :
	public PoseTransitionBase // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823B20;
	}
	AntRef m_TransitionAnimation; // 0x18
	float m_AnimationBlendInTime; // 0x2c
	float m_AnimationBlendOutTime; // 0x30
	float m_TransitionAnimationDuration; // 0x34
}; // size = 0x38

#endif // FBGEN_AnimatedPoseTransition_H
