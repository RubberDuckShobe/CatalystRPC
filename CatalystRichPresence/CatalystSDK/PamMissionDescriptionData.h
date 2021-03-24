//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMissionDescriptionData.h
// Created: Wed Mar 10 19:04:23 2021
//

#ifndef FBGEN_PamMissionDescriptionData_H
#define FBGEN_PamMissionDescriptionData_H

#include "PamMissionDescription.h"
#include "DataContainer.h"

class PamMissionDescriptionData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872EE0;
	}
	PamMissionDescription m_MissionDescription; // 0x10
	int m_Reputation; // 0x60
	int m_Currency; // 0x64
}; // size = 0x68

#endif // FBGEN_PamMissionDescriptionData_H
