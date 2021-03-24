//
// Generated with FrostbiteGen by Chod
// File: SDK\MultiColorInterpData.h
// Created: Wed Mar 10 19:05:43 2021
//

#ifndef FBGEN_MultiColorInterpData_H
#define FBGEN_MultiColorInterpData_H

#include "MultiColorGradient.h"
#include "EvaluatorData.h"

class MultiColorInterpData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC320;
	}
	MultiColorGradient m_Gradient; // 0x18
}; // size = 0x20

#endif // FBGEN_MultiColorInterpData_H
