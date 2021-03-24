//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateClipScaleData.h
// Created: Wed Mar 10 18:59:38 2021
//

#ifndef FBGEN_UpdateClipScaleData_H
#define FBGEN_UpdateClipScaleData_H

#include "Array.h"
#include "ProcessorData.h"

class UpdateClipScaleData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DB2A0;
	}
	Array<short> m_Lookup; // 0x30
}; // size = 0x38

#endif // FBGEN_UpdateClipScaleData_H
