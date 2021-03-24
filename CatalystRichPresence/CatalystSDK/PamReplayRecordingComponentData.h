//
// Generated with FrostbiteGen by Chod
// File: SDK\PamReplayRecordingComponentData.h
// Created: Wed Mar 10 19:04:06 2021
//

#ifndef FBGEN_PamReplayRecordingComponentData_H
#define FBGEN_PamReplayRecordingComponentData_H

#include "BoneNameId.h"
#include "Array.h"
#include "SkeletonAsset.h"
#include "GameComponentData.h"

class PamReplayRecordingComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B8F0;
	}
	BoneNameId m_TrailBone; // 0x70
	unsigned char _0x74[0x4];
	Array<BoneNameId> m_RecordingBones; // 0x78
	Array<BoneNameId> m_TranslationBones; // 0x80
	SkeletonAsset* m_SkeletonAsset; // 0x88
}; // size = 0x90

#endif // FBGEN_PamReplayRecordingComponentData_H
