//
// Generated with FrostbiteGen by Chod
// File: SDK\InputCurveData.h
// Created: Wed Mar 10 19:06:29 2021
//

#ifndef FBGEN_InputCurveData_H
#define FBGEN_InputCurveData_H

#include "Array.h"
#include "DataContainer.h"

class InputCurveData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280FEA0;
	}
	Array<int> m_AffectedInputs; // 0x10
	Array<Vec2> m_InputModifierCurve; // 0x18
	bool m_HandleMultipleInputsAsSquare; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_InputCurveData_H
