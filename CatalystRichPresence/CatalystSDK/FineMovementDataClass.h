//
// Generated with FrostbiteGen by Chod
// File: SDK\FineMovementDataClass.h
// Created: Wed Mar 10 19:06:47 2021
//

#ifndef FBGEN_FineMovementDataClass_H
#define FBGEN_FineMovementDataClass_H

#include "PamCreatureFineMovementBinding.h"
#include "AntRef.h"
#include "DataContainer.h"

class FineMovementDataClass :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CC60;
	}
	PamCreatureFineMovementBinding m_FineMovementBinding; // 0x10
	AntRef m_FineMovementContextDatabase; // 0x60
	unsigned char _0x74[0x4];
}; // size = 0x78

#endif // FBGEN_FineMovementDataClass_H
