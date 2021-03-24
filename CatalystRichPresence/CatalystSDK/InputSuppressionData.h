//
// Generated with FrostbiteGen by Chod
// File: SDK\InputSuppressionData.h
// Created: Wed Mar 10 19:06:28 2021
//

#ifndef FBGEN_InputSuppressionData_H
#define FBGEN_InputSuppressionData_H

#include "Array.h"
struct InputSuppressionData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142815D00;
	}
	Array<ActionSuppressor> m_SuppressVehicleInput; // 0x0
}; // size = 0x8

#endif // FBGEN_InputSuppressionData_H
