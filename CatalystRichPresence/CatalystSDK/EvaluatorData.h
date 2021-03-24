//
// Generated with FrostbiteGen by Chod
// File: SDK\EvaluatorData.h
// Created: Wed Mar 10 19:06:54 2021
//

#ifndef FBGEN_EvaluatorData_H
#define FBGEN_EvaluatorData_H

#include "EffectParameter.h"
#include "DataContainer.h"

class EvaluatorData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DAB20;
	}
	EffectParameter* m_Parameter; // 0x10
}; // size = 0x18

#endif // FBGEN_EvaluatorData_H
