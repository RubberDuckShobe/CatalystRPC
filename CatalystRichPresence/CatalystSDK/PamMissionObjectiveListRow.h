//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMissionObjectiveListRow.h
// Created: Wed Mar 10 19:04:23 2021
//

#ifndef FBGEN_PamMissionObjectiveListRow_H
#define FBGEN_PamMissionObjectiveListRow_H

#include "LocalizedString.h"
#include "PamListRow.h"

class PamMissionObjectiveListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288AD00;
	}
	LocalizedString* m_Objective; // 0x18
	bool m_Active; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_PamMissionObjectiveListRow_H
