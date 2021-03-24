//
// Generated with FrostbiteGen by Chod
// File: SDK\PerfJournalSettings.h
// Created: Wed Mar 10 19:03:14 2021
//

#ifndef FBGEN_PerfJournalSettings_H
#define FBGEN_PerfJournalSettings_H

#include "DataContainer.h"

class PerfJournalSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B2400;
	}
	int m_JournalSampleInterval; // 0x10
	int m_JournalFrameCount; // 0x14
	float m_AutoJournalThresholdMs; // 0x18
	int m_AutoJournalMinFrames; // 0x1c
	bool m_Enable; // 0x20
	bool m_JournalExpensiveStats; // 0x21
	bool m_JournalAllSPU; // 0x22
	bool m_JournalReportAverage; // 0x23
	bool m_AutoJournalEnable; // 0x24
	bool m_AutoJournalScreenshot; // 0x25
	unsigned char _0x26[0x2];
}; // size = 0x28

#endif // FBGEN_PerfJournalSettings_H
