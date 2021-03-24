//
// Generated with FrostbiteGen by Chod
// File: SDK\EmitterData.h
// Created: Wed Mar 10 19:07:01 2021
//

#ifndef FBGEN_EmitterData_H
#define FBGEN_EmitterData_H

#include "Array.h"
#include "ProcessorData.h"

class EmitterData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBA80;
	}
	Array<EmitterDocument*> m_EmitterAssets; // 0x30
}; // size = 0x38

#endif // FBGEN_EmitterData_H
