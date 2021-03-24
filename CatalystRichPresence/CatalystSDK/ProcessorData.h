//
// Generated with FrostbiteGen by Chod
// File: SDK\ProcessorData.h
// Created: Wed Mar 10 19:02:53 2021
//

#ifndef FBGEN_ProcessorData_H
#define FBGEN_ProcessorData_H

#include "EvaluatorData.h"
#include "ProcessorData.h"
#include "EmittableField.h"
#include "EffectParameter.h"
#include "DataContainer.h"

class ProcessorData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DAAC0;
	}
	EvaluatorData* m_Pre; // 0x10
	ProcessorData* m_NextProcessor; // 0x18
	EmittableField m_EvaluatorInput; // 0x20
	unsigned char _0x24[0x4];
	EffectParameter* m_EvaluatorInputParam; // 0x28
}; // size = 0x30

#endif // FBGEN_ProcessorData_H
