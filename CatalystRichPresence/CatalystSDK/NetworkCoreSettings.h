//
// Generated with FrostbiteGen by Chod
// File: SDK\NetworkCoreSettings.h
// Created: Wed Mar 10 19:05:39 2021
//

#ifndef FBGEN_NetworkCoreSettings_H
#define FBGEN_NetworkCoreSettings_H

#include "DataContainer.h"

class NetworkCoreSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142826A60;
	}
	unsigned int m_DedicatedServerMaxSendJobCount; // 0x10
	unsigned int m_ServerMaxSendJobCount; // 0x14
}; // size = 0x18

#endif // FBGEN_NetworkCoreSettings_H
