//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMissionDescription.h
// Created: Wed Mar 10 19:04:23 2021
//

#ifndef FBGEN_PamMissionDescription_H
#define FBGEN_PamMissionDescription_H

#include "Array.h"
struct PamMissionDescription
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142871E80;
	}
	unsigned int m_FlagNameHash; // 0x0
	unsigned char _0x4[0x4];
	const char* m_ActiveNameSid; // 0x8
	const char* m_ActiveLongDescriptionSid; // 0x10
	const char* m_AvailableNameSid; // 0x18
	const char* m_AvailableLongDescriptionSid; // 0x20
	Array<const char*> m_ObjectiveSids; // 0x28
	const char* m_AvailableObjectiveSid; // 0x30
	const char* m_AcceptLabelSid; // 0x38
	const char* m_MissionTextureId; // 0x40
	const char* m_LoadScreenTextureId; // 0x48
}; // size = 0x50

#endif // FBGEN_PamMissionDescription_H
