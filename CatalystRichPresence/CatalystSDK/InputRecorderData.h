//
// Generated with FrostbiteGen by Chod
// File: SDK\InputRecorderData.h
// Created: Wed Mar 10 19:06:28 2021
//

#ifndef FBGEN_InputRecorderData_H
#define FBGEN_InputRecorderData_H

#include "DataContainer.h"

class InputRecorderData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FE30;
	}
	const char* m_FileNamePrefix; // 0x10
	const char* m_FileName; // 0x18
	int m_ToggleRecordAction; // 0x20
	bool m_AutoIncrementFileName; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_InputRecorderData_H
