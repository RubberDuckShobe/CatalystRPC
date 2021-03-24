//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsSettings.h
// Created: Wed Mar 10 19:03:08 2021
//

#ifndef FBGEN_PhysicsSettings_H
#define FBGEN_PhysicsSettings_H

#include "DataContainer.h"

class PhysicsSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282EDB0;
	}
	unsigned int m_ClientClothWorldThreadCount; // 0x10
	float m_WindManagerAwakeningRadius; // 0x14
	unsigned int m_BlockStreamAllocatorMemory; // 0x18
	unsigned int m_StepLocalStreamAllocator; // 0x1c
	unsigned int m_BodyBufferCapacity; // 0x20
	unsigned int m_MotionBufferCapacity; // 0x24
	unsigned int m_ConstraintBufferCapacity; // 0x28
	bool m_Enable; // 0x2c
	bool m_EnableClothInterpolationJobs; // 0x2d
	bool m_EnableClothUpdateJob; // 0x2e
	bool m_ClothVelocityVectorEnable; // 0x2f
	bool m_RunClientSimulationSingleThreaded; // 0x30
	bool m_RunEffectSimulationSingleThreaded; // 0x31
	bool m_RunServerSimulationSingleThreaded; // 0x32
	bool m_EnableAIRigidBody; // 0x33
	bool m_ForestEnable; // 0x34
	bool m_EnableJobs; // 0x35
	bool m_RemoveRagdollWhenWoken; // 0x36
	bool m_RemoveFromWorldOnCollisionOverflow; // 0x37
	bool m_SingleStepCharacter; // 0x38
	bool m_ForceSingleStepCharacterInSP; // 0x39
	bool m_EnableFollowWheelRaycasts; // 0x3a
	bool m_EnableClientWheelRaycasts; // 0x3b
	bool m_EnableASyncWheelRaycasts; // 0x3c
	bool m_UseDelayedWakeUpClient; // 0x3d
	bool m_UseDelayedWakeUpServer; // 0x3e
	bool m_SuppressDebrisSpawnUntilReady; // 0x3f
	bool m_EnablePlayerVSAICollisions; // 0x40
	bool m_AllowClientAuthoritativeSurfaceVelocity; // 0x41
	bool m_EnableClientKeyframedCollisions; // 0x42
	bool m_EnableFXKeyframedCollisions; // 0x43
	bool m_EnableRemoveFromWorldKeepActive; // 0x44
	unsigned char _0x45[0x3];
}; // size = 0x48

#endif // FBGEN_PhysicsSettings_H
