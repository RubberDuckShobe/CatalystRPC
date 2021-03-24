//
// Generated with FrostbiteGen by Chod
// File: SDK\EntityTrackData.h
// Created: Wed Mar 10 19:06:56 2021
//

#ifndef FBGEN_EntityTrackData_H
#define FBGEN_EntityTrackData_H

#include "Array.h"
#include "EntityTrackBaseData.h"

class EntityTrackData :
	public EntityTrackBaseData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283E170;
	}
	Array<Guid> m_GuidChain; // 0x38
}; // size = 0x40

#endif // FBGEN_EntityTrackData_H
