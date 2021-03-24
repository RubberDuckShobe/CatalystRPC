//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStatUpdateTrackerEntityData.h
// Created: Wed Mar 10 19:03:46 2021
//

#ifndef FBGEN_PamStatUpdateTrackerEntityData_H
#define FBGEN_PamStatUpdateTrackerEntityData_H

#include "EntityData.h"

class PamStatUpdateTrackerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873AE0;
	}
	const char* m_Code; // 0x18
	bool m_UseRawStatCode; // 0x20
	bool m_Enabled; // 0x21
	unsigned char _0x22[0x6];
}; // size = 0x28

#endif // FBGEN_PamStatUpdateTrackerEntityData_H
