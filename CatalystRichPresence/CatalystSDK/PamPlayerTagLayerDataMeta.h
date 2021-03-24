//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerTagLayerDataMeta.h
// Created: Wed Mar 10 19:04:14 2021
//

#ifndef FBGEN_PamPlayerTagLayerDataMeta_H
#define FBGEN_PamPlayerTagLayerDataMeta_H

#include "Array.h"
struct PamPlayerTagLayerDataMeta
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877880;
	}
	const char* m_LayerName; // 0x0
	Array<unsigned int> m_DefaultTags; // 0x8
	bool m_IsBackground; // 0x10
	unsigned char _0x11[0x7];
}; // size = 0x18

#endif // FBGEN_PamPlayerTagLayerDataMeta_H
