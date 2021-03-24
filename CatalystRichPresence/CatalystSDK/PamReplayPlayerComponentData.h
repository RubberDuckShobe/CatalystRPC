//
// Generated with FrostbiteGen by Chod
// File: SDK\PamReplayPlayerComponentData.h
// Created: Wed Mar 10 19:04:06 2021
//

#ifndef FBGEN_PamReplayPlayerComponentData_H
#define FBGEN_PamReplayPlayerComponentData_H

#include "Array.h"
#include "SkeletonAsset.h"
#include "GameComponentData.h"

class PamReplayPlayerComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B890;
	}
	Array<BoneNameId> m_RecordingBones; // 0x70
	Array<BoneNameId> m_TranslationBones; // 0x78
	SkeletonAsset* m_SkeletonAsset; // 0x80
	float m_TimeScale; // 0x88
	unsigned char _0x8c[0x4];
}; // size = 0x90

#endif // FBGEN_PamReplayPlayerComponentData_H
