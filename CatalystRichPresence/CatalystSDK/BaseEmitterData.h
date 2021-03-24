//
// Generated with FrostbiteGen by Chod
// File: SDK\BaseEmitterData.h
// Created: Wed Mar 10 19:08:32 2021
//

#ifndef FBGEN_BaseEmitterData_H
#define FBGEN_BaseEmitterData_H

#include "EmitterDocument.h"
#include "ProcessorData.h"

class BaseEmitterData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC2C0;
	}
	EmitterDocument* m_EmitterAsset; // 0x30
}; // size = 0x38

#endif // FBGEN_BaseEmitterData_H
