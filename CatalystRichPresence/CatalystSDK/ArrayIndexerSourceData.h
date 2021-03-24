//
// Generated with FrostbiteGen by Chod
// File: SDK\ArrayIndexerSourceData.h
// Created: Wed Mar 10 19:08:39 2021
//

#ifndef FBGEN_ArrayIndexerSourceData_H
#define FBGEN_ArrayIndexerSourceData_H

#include "EffectParameter.h"
#include "ArrayIndexerSourceIndexSelection.h"
#include "ProcessorData.h"

class ArrayIndexerSourceData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DAE20;
	}
	EffectParameter* m_IndexStorageParam; // 0x30
	EffectParameter* m_SpawnRateStorageParam; // 0x38
	ArrayIndexerSourceIndexSelection m_IndexSelectionMethod; // 0x40
	unsigned int m_MaxArrayIndex; // 0x44
}; // size = 0x48

#endif // FBGEN_ArrayIndexerSourceData_H
