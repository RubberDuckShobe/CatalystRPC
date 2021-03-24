//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioGraphData.h
// Created: Wed Mar 10 19:08:37 2021
//

#ifndef FBGEN_AudioGraphData_H
#define FBGEN_AudioGraphData_H

#include "Array.h"
#include "DataContainer.h"

class AudioGraphData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1D30;
	}
	Array<AudioGraphNodeData*> m_Nodes; // 0x10
	Array<AudioGraphParameter*> m_PublicParameters; // 0x18
	Array<AudioGraphEvent*> m_PublicEvents; // 0x20
	Array<AudioGraphAssetParameter*> m_PublicAssetParameters; // 0x28
	unsigned short m_PublicValueCount; // 0x30
	unsigned short m_ValueCount; // 0x32
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_AudioGraphData_H
