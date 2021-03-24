//
// Generated with FrostbiteGen by Chod
// File: SDK\MultitrackData.h
// Created: Wed Mar 10 19:05:42 2021
//

#ifndef FBGEN_MultitrackData_H
#define FBGEN_MultitrackData_H

#include "MusicParameterData.h"
#include "SynchedFadeData.h"
#include "Array.h"
#include "DataContainer.h"

class MultitrackData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C75C0;
	}
	MusicParameterData* m_LayerControlParameter; // 0x10
	SynchedFadeData* m_RangeFade; // 0x18
	Array<MultitrackLayerData*> m_Layers; // 0x20
}; // size = 0x28

#endif // FBGEN_MultitrackData_H
