//
// Generated with FrostbiteGen by Chod
// File: SDK\StateNodeEntityData.h
// Created: Wed Mar 10 19:00:56 2021
//

#ifndef FBGEN_StateNodeEntityData_H
#define FBGEN_StateNodeEntityData_H

#include "Array.h"
#include "StateNodeEntityBaseData.h"

class StateNodeEntityData :
	public StateNodeEntityBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899680;
	}
	Array<StateNavEventInfo> m_EventTriggersInfo; // 0x28
	Array<StateNavEventInfo> m_ConsumedEventsInfo; // 0x30
}; // size = 0x38

#endif // FBGEN_StateNodeEntityData_H
