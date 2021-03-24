//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCreateSharedHighlightEntityData.h
// Created: Wed Mar 10 19:04:44 2021
//

#ifndef FBGEN_PamCreateSharedHighlightEntityData_H
#define FBGEN_PamCreateSharedHighlightEntityData_H

#include "LinearTransform.h"
#include "PamDynamicContentDefinition.h"
#include "EntityData.h"

class PamCreateSharedHighlightEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852C40;
	}
	float m_HeadSeconds; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_MarkerTransform; // 0x20
	float m_MidSeconds; // 0x60
	float m_TailSeconds; // 0x64
	int m_StartTrim; // 0x68
	int m_EndTrim; // 0x6c
	PamDynamicContentDefinition* m_ContentDefinition; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_PamCreateSharedHighlightEntityData_H
