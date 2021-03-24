//
// Generated with FrostbiteGen by Chod
// File: SDK\JobAffinitySettings.h
// Created: Wed Mar 10 19:06:24 2021
//

#ifndef FBGEN_JobAffinitySettings_H
#define FBGEN_JobAffinitySettings_H

#include "JobAffinitySet.h"
#include "SystemSettings.h"

class JobAffinitySettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B32D0;
	}
	JobAffinitySet m_ClientIdle; // 0x20
	JobAffinitySet m_ClientUpdateRenderer; // 0x48
	JobAffinitySet m_ClientUpdateGame; // 0x70
	JobAffinitySet m_ClientSimAsync; // 0x98
	JobAffinitySet m_ClientAntAsync; // 0xc0
	JobAffinitySet m_ClientPhysicsAsync; // 0xe8
}; // size = 0x110

#endif // FBGEN_JobAffinitySettings_H
