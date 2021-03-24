//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTEnumTrackData.h
// Created: Wed Mar 10 19:08:50 2021
//

#ifndef FBGEN_ANTEnumTrackData_H
#define FBGEN_ANTEnumTrackData_H

#include "Array.h"
#include "AntRef.h"
#include "PropertyTrackBaseData.h"

class ANTEnumTrackData :
	public PropertyTrackBaseData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817D60;
	}
	Array<ANTEnumKeyframe> m_Keyframes; // 0x38
	AntRef m_Signal; // 0x40
	int m_ResetValue; // 0x54
	bool m_ResetOnLeave; // 0x58
	unsigned char _0x59[0x7];
}; // size = 0x60

#endif // FBGEN_ANTEnumTrackData_H
