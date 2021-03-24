//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerTagLayer.h
// Created: Wed Mar 10 19:04:14 2021
//

#ifndef FBGEN_PamPlayerTagLayer_H
#define FBGEN_PamPlayerTagLayer_H

#include "Array.h"
#include "DataContainer.h"

class PamPlayerTagLayer :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428784E0;
	}
	const char* m_LayerName; // 0x10
	const char* m_NameSid; // 0x18
	Array<unsigned int> m_DefaultTags; // 0x20
	Array<PamPlayerTagImage*> m_Tags; // 0x28
}; // size = 0x30

#endif // FBGEN_PamPlayerTagLayer_H
