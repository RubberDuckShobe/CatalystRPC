//
// Generated with FrostbiteGen by Chod
// File: SDK\Ps3PresenceBackendData.h
// Created: Wed Mar 10 19:02:47 2021
//

#ifndef FBGEN_Ps3PresenceBackendData_H
#define FBGEN_Ps3PresenceBackendData_H

#include "Array.h"
#include "PresenceBackendData.h"

class Ps3PresenceBackendData :
	public PresenceBackendData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284EA30;
	}
	const char* m_CommunicationId; // 0x18
	const char* m_CommunicationSignature; // 0x20
	Array<Ps3ParentalLockAgeSettings> m_ParentalLockAgeSettings; // 0x28
	Array<Ps3ServiceSettings> m_ServiceSettings; // 0x30
}; // size = 0x38

#endif // FBGEN_Ps3PresenceBackendData_H
