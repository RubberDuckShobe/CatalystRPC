//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNetworkFlowUIEvent.h
// Created: Wed Mar 10 19:04:18 2021
//

#ifndef FBGEN_PamNetworkFlowUIEvent_H
#define FBGEN_PamNetworkFlowUIEvent_H

#include "PamNetworkFlowUIEventType.h"
struct PamNetworkFlowUIEvent
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428727C0;
	}
	PamNetworkFlowUIEventType m_EventType; // 0x0
	int m_Slot; // 0x4
	int m_Move; // 0x8
}; // size = 0xc

#endif // FBGEN_PamNetworkFlowUIEvent_H
