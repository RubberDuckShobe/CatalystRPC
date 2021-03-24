//
// Generated with FrostbiteGen by Chod
// File: SDK\EventConnection.h
// Created: Wed Mar 10 19:06:54 2021
//

#ifndef FBGEN_EventConnection_H
#define FBGEN_EventConnection_H

#include "DataContainer.h"
#include "EventSpec.h"
#include "EventConnectionTargetType.h"
struct EventConnection
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E51F0;
	}
	DataContainer* m_Source; // 0x0
	DataContainer* m_Target; // 0x8
	EventSpec m_SourceEvent; // 0x10
	EventSpec m_TargetEvent; // 0x14
	EventConnectionTargetType m_TargetType; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_EventConnection_H
