//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTBlendKeyframe.h
// Created: Wed Mar 10 19:08:51 2021
//

#ifndef FBGEN_ANTBlendKeyframe_H
#define FBGEN_ANTBlendKeyframe_H

#include "ANTBlendCurveType.h"
#include "CurveData.h"
#include "TimelineKeyframeData.h"

class ANTBlendKeyframe :
	public TimelineKeyframeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818960;
	}
	float m_Time; // 0x10
	float m_Length; // 0x14
	ANTBlendCurveType m_BlendCurveType; // 0x18
	float m_BlendScale; // 0x1c
	CurveData* m_CurveData; // 0x20
}; // size = 0x28

#endif // FBGEN_ANTBlendKeyframe_H
