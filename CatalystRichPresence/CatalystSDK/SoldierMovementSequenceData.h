//
// Generated with FrostbiteGen by Chod
// File: SDK\SoldierMovementSequenceData.h
// Created: Wed Mar 10 19:01:19 2021
//

#ifndef FBGEN_SoldierMovementSequenceData_H
#define FBGEN_SoldierMovementSequenceData_H

#include "RecordedInputData.h"
#include "MovementActionData.h"

class SoldierMovementSequenceData :
	public MovementActionData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FD70;
	}
	RecordedInputData* m_RecordedInput; // 0x10
	int m_InputRecordingIndex; // 0x18
	bool m_IgnoreRecordingIndexFilter; // 0x1c
	bool m_ReportWhenFinished; // 0x1d
	unsigned char _0x1e[0x2];
}; // size = 0x20

#endif // FBGEN_SoldierMovementSequenceData_H
