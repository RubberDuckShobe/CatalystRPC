//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionFlagRewardCondition.h
// Created: Wed Mar 10 19:04:11 2021
//

#ifndef FBGEN_PamProgressionFlagRewardCondition_H
#define FBGEN_PamProgressionFlagRewardCondition_H

#include "PamProgressionFlag.h"
#include "PamRewardCondition.h"

class PamProgressionFlagRewardCondition :
	public PamRewardCondition // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142879140;
	}
	PamProgressionFlag* m_ProgressionFlag; // 0x10
	unsigned int m_Threshold; // 0x18
	bool m_ReportFlagValuesAsCount; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_PamProgressionFlagRewardCondition_H
