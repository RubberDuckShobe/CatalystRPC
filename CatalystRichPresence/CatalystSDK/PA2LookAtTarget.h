//
// Generated with FrostbiteGen by Chod
// File: SDK\PA2LookAtTarget.h
// Created: Wed Mar 10 19:05:23 2021
//

#ifndef FBGEN_PA2LookAtTarget_H
#define FBGEN_PA2LookAtTarget_H

#include "EntityTrackBaseData.h"
#include "DataContainer.h"

class PA2LookAtTarget :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427F73C0;
	}
	EntityTrackBaseData* m_EntityTrack; // 0x10
}; // size = 0x18

#endif // FBGEN_PA2LookAtTarget_H
