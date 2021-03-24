//
// Generated with FrostbiteGen by Chod
// File: SDK\FloatTrackData.h
// Created: Wed Mar 10 19:06:44 2021
//

#ifndef FBGEN_FloatTrackData_H
#define FBGEN_FloatTrackData_H

#include "CurveData.h"
#include "PropertyTrackBaseData.h"

class FloatTrackData :
	public PropertyTrackBaseData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283E050;
	}
	CurveData* m_CurveData; // 0x38
}; // size = 0x40

#endif // FBGEN_FloatTrackData_H
