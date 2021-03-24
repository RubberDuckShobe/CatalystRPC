//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundEntityTrackParameterLayerData.h
// Created: Wed Mar 10 19:01:15 2021
//

#ifndef FBGEN_SoundEntityTrackParameterLayerData_H
#define FBGEN_SoundEntityTrackParameterLayerData_H

#include "CurveData.h"
#include "SoundEntityTrackLayerData.h"

class SoundEntityTrackParameterLayerData :
	public SoundEntityTrackLayerData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7E00;
	}
	CurveData* m_CurveData; // 0x30
}; // size = 0x38

#endif // FBGEN_SoundEntityTrackParameterLayerData_H
