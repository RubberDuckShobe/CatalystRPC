//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSubLevelLoadTrigger.h
// Created: Wed Mar 10 19:03:45 2021
//

#ifndef FBGEN_PamSubLevelLoadTrigger_H
#define FBGEN_PamSubLevelLoadTrigger_H

#include "MathEntityAssembly.h"
#include "Array.h"
#include "BundleHeapType.h"
struct PamSubLevelLoadTrigger
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880390;
	}
	MathEntityAssembly m_Assembly; // 0x0
	Array<PamSubLevelLoadTriggerExpressionInput> m_Inputs; // 0x10
	int m_InstallGroupHash; // 0x18
	unsigned char _0x1c[0x4];
	Array<Vec3> m_Area; // 0x20
	float m_AreaHeight; // 0x28
	unsigned char _0x2c[0x4];
	const char* m_SubLevelPath; // 0x30
	BundleHeapType m_HeapType; // 0x38
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_PamSubLevelLoadTrigger_H
