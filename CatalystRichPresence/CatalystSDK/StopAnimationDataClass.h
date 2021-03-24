//
// Generated with FrostbiteGen by Chod
// File: SDK\StopAnimationDataClass.h
// Created: Wed Mar 10 19:00:53 2021
//

#ifndef FBGEN_StopAnimationDataClass_H
#define FBGEN_StopAnimationDataClass_H

#include "PamStopWaypointAnimationBinding.h"
#include "AntRef.h"
#include "DataContainer.h"

class StopAnimationDataClass :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CB40;
	}
	PamStopWaypointAnimationBinding m_WaypointAnimationAntBinding; // 0x10
	AntRef m_StopAnimationContextDatabase; // 0x74
}; // size = 0x88

#endif // FBGEN_StopAnimationDataClass_H
