//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioSettings.h
// Created: Wed Mar 10 19:08:35 2021
//

#ifndef FBGEN_AudioSettings_H
#define FBGEN_AudioSettings_H

#include "DataContainer.h"

class AudioSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0950;
	}
	unsigned int m_DataManagerCacheSize; // 0x10
	unsigned int m_DataManagerCacheRsxSize; // 0x14
	unsigned int m_DataManagerMaxReadIssueCount; // 0x18
	unsigned int m_DataManagerMaxReadActiveCount; // 0x1c
	unsigned int m_DataManagerMaxTrimSize; // 0x20
	float m_GraphCpuLoadLimit; // 0x24
	float m_GraphCpuLoadRecovery; // 0x28
	float m_AudioCoreCpuLoadLimit; // 0x2c
	float m_AudioCoreCpuLoadRecovery; // 0x30
	int m_AudioCoreThread; // 0x34
	int m_AudioCoreMixJobThreadCount; // 0x38
	int m_AudioCoreMaxMixJobThreadCount; // 0x3c
	int m_AudioCoreMinProcStageVoicesToGoWide; // 0x40
	float m_AudioCoreMiniumMixAhead; // 0x44
	float m_AudioCoreTargetMixAhead; // 0x48
	unsigned int m_AudioCoreMaxChannelCount; // 0x4c
	unsigned int m_DelayLineAllocSize; // 0x50
	unsigned int m_ReverbAllocSize; // 0x54
	float m_HdrSuspensionThreshold; // 0x58
	float m_HdrZombieThreshold; // 0x5c
	float m_HdrEnableSuspensionThreshold; // 0x60
	float m_SoundSpeed; // 0x64
	float m_SoundDopplerFactor; // 0x68
	float m_SoundDopplerSmoothFactor; // 0x6c
	float m_MusicRequestBufferTime; // 0x70
	unsigned int m_DacDelay; // 0x74
	float m_DacAmplitude; // 0x78
	unsigned int m_DacMaxSpeakerCount; // 0x7c
	unsigned int m_ObstructionMaxQueriesPerFrame; // 0x80
	float m_ObstructionQueryStageThreshold; // 0x84
	float m_ObstructionMaxObstruction; // 0x88
	float m_ObstructionMaxObstructionDistance; // 0x8c
	float m_ObstructionRelativeVelocityThreshold; // 0x90
	float m_ObstructionMaxInactiveTime; // 0x94
	float m_ObstructionMultiStageRaycastsOuterDistance; // 0x98
	float m_ObstructionMultiStageRaycastsSecondStageScalar; // 0x9c
	float m_ObstructionMultiStageRaycastsAttackSpeed; // 0xa0
	float m_ObstructionMultiStageRaycastsReleaseSpeed; // 0xa4
	float m_ObstructionMultiStageRaycastsFirstStageAngle; // 0xa8
	float m_ObstructionMultiStageRaycastsMaxObstruction; // 0xac
	bool m_AudioCoreMultipleMixJobsEnabled; // 0xb0
	bool m_AudioCoreSystemJobsEnabled; // 0xb1
	bool m_AudioCoreWatchDogThreadEnabled; // 0xb2
	bool m_ObstructionUseRadiusAngleAsObstructionValue; // 0xb3
	bool m_ObstructionMultiStageRaycastsEnabled; // 0xb4
	unsigned char _0xb5[0x3];
}; // size = 0xb8

#endif // FBGEN_AudioSettings_H
