//
// Generated with FrostbiteGen by Chod
// File: SDK\EntityBusData.h
// Created: Wed Mar 10 19:06:57 2021
//

#ifndef FBGEN_EntityBusData_H
#define FBGEN_EntityBusData_H

#include "Array.h"
#include "DataBusData.h"

class EntityBusData :
	public DataBusData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7F70;
	}
	Array<EventConnection> m_EventConnections; // 0x38
}; // size = 0x40

#endif // FBGEN_EntityBusData_H
