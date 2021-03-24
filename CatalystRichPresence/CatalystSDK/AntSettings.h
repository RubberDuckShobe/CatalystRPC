//
// Generated with FrostbiteGen by Chod
// File: SDK\AntSettings.h
// Created: Wed Mar 10 19:08:42 2021
//

#ifndef FBGEN_AntSettings_H
#define FBGEN_AntSettings_H

#include "DataContainer.h"

class AntSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C2DD0;
	}
	float m_ForceLodDistance; // 0x10
	int m_MaxAnimatablesPerPoseJob; // 0x14
	float m_ReducedInterpolationDistance; // 0x18
	float m_TrajectoryInterpolationDistance; // 0x1c
	int m_MaxInterpolationSlots; // 0x20
	int m_MaxSingleBoneInterpolationSlots; // 0x24
	float m_CheckGiantSoldiers; // 0x28
	float m_LeanSignalScale; // 0x2c
	float m_LeanSignalClamp; // 0x30
	float m_DetailedCollisionSpeedLimit; // 0x34
	float m_MaxInterpolationDistance; // 0x38
	int m_MaxInterpolationTicks; // 0x3c
	int m_AutoCullPixelSize; // 0x40
	bool m_UsePA; // 0x44
	bool m_UseHIK; // 0x45
	bool m_BlockOnJobs; // 0x46
	bool m_InterpolatePoses; // 0x47
	bool m_AllowVariableTickLength; // 0x48
	bool m_UseWeaponFov; // 0x49
	bool m_ForcePoseUpdate; // 0x4a
	bool m_UseCameraFov; // 0x4b
	bool m_EnablePA; // 0x4c
	bool m_ClientEmulatesServer; // 0x4d
	bool m_UpdateEnable; // 0x4e
	bool m_EnablePackageCache; // 0x4f
	bool m_EnableDebugLogFile; // 0x50
	bool m_EnablePoseJobs; // 0x51
	bool m_DisableAILodFeature; // 0x52
	bool m_DisableModelAnimationCulling; // 0x53
	bool m_EnableJobs; // 0x54
	bool m_RunAsHighPriority; // 0x55
	bool m_UpdateLoddingEnable; // 0x56
	bool m_EnableFrostbiteAntPhysicsWorld; // 0x57
}; // size = 0x58

#endif // FBGEN_AntSettings_H
