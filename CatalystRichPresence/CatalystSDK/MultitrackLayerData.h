//
// Generated with FrostbiteGen by Chod
// File: SDK\MultitrackLayerData.h
// Created: Wed Mar 10 19:05:42 2021
//

#ifndef FBGEN_MultitrackLayerData_H
#define FBGEN_MultitrackLayerData_H

#include "Array.h"
#include "DataContainer.h"

class MultitrackLayerData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7620;
	}
	float m_MinValue; // 0x10
	float m_MaxValue; // 0x14
	Array<MusicParameterData*> m_Amplitudes; // 0x18
}; // size = 0x20

#endif // FBGEN_MultitrackLayerData_H
