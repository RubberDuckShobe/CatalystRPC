//
// Generated with FrostbiteGen by Chod
// File: SDK\BlazeServerBackendData.h
// Created: Wed Mar 10 19:08:30 2021
//

#ifndef FBGEN_BlazeServerBackendData_H
#define FBGEN_BlazeServerBackendData_H

#include "BlazeCreateGameParameters.h"
#include "OnlineEnvironmentConsoleUrl.h"
#include "ServerBackendData.h"

class BlazeServerBackendData :
	public ServerBackendData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284E790;
	}
	BlazeCreateGameParameters m_CreateParameters; // 0x18
	OnlineEnvironmentConsoleUrl m_ConfigUrl; // 0x20
}; // size = 0x28

#endif // FBGEN_BlazeServerBackendData_H
