//
// Generated with FrostbiteGen by Chod
// File: SDK\RecordedInputData.h
// Created: Wed Mar 10 19:02:40 2021
//

#ifndef FBGEN_RecordedInputData_H
#define FBGEN_RecordedInputData_H

#include "Array.h"
#include "Asset.h"

class RecordedInputData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FDD0;
	}
	Array<InputRecorderTrackData> m_TrackData; // 0x18
}; // size = 0x20

#endif // FBGEN_RecordedInputData_H
