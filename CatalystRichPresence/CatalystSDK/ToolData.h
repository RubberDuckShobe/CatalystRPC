//
// Generated with FrostbiteGen by Chod
// File: SDK\ToolData.h
// Created: Wed Mar 10 19:00:11 2021
//

#ifndef FBGEN_ToolData_H
#define FBGEN_ToolData_H

#include "DataContainer.h"

class ToolData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428115E0;
	}
	bool m_IsAlwaysActive; // 0x10
	unsigned char _0x11[0x7];
}; // size = 0x18

#endif // FBGEN_ToolData_H
