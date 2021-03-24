//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTClipKeyframe.h
// Created: Wed Mar 10 19:08:51 2021
//

#ifndef FBGEN_ANTClipKeyframe_H
#define FBGEN_ANTClipKeyframe_H

#include "AntRef.h"
#include "ANTClipEndRule.h"
#include "TimelineKeyframeData.h"

class ANTClipKeyframe :
	public TimelineKeyframeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428189C0;
	}
	float m_Time; // 0x10
	float m_Length; // 0x14
	AntRef m_Controller; // 0x18
	float m_ClipStartTrim; // 0x2c
	float m_ClipEndTrim; // 0x30
	float m_ClipCycleStartOffset; // 0x34
	float m_ClipTimeScale; // 0x38
	ANTClipEndRule m_ClipEndRule; // 0x3c
}; // size = 0x40

#endif // FBGEN_ANTClipKeyframe_H
