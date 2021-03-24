//
// Generated with FrostbiteGen by Chod
// File: SDK\StanceCameraData.h
// Created: Wed Mar 10 19:00:58 2021
//

#ifndef FBGEN_StanceCameraData_H
#define FBGEN_StanceCameraData_H

#include "Array.h"
struct StanceCameraData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281D848;
	}
	Array<int> m_ValidStances; // 0x0
	Array<int> m_DefaultCameraForStances; // 0x8
}; // size = 0x10

#endif // FBGEN_StanceCameraData_H
