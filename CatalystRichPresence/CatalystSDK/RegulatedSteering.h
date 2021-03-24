//
// Generated with FrostbiteGen by Chod
// File: SDK\RegulatedSteering.h
// Created: Wed Mar 10 19:02:39 2021
//

#ifndef FBGEN_RegulatedSteering_H
#define FBGEN_RegulatedSteering_H

#include "PID.h"
#include "DataContainer.h"

class RegulatedSteering :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811400;
	}
	PID m_PID; // 0x10
}; // size = 0x30

#endif // FBGEN_RegulatedSteering_H
