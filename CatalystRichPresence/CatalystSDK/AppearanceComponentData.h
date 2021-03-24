//
// Generated with FrostbiteGen by Chod
// File: SDK\AppearanceComponentData.h
// Created: Wed Mar 10 19:08:41 2021
//

#ifndef FBGEN_AppearanceComponentData_H
#define FBGEN_AppearanceComponentData_H

#include "Array.h"
#include "BundleHeapInfo.h"
#include "GameComponentData.h"

class AppearanceComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B57F0;
	}
	Array<AppearanceItemData*> m_DefaultItems; // 0x70
	Array<BundleRefTable*> m_BundleRefTables; // 0x78
	BundleHeapInfo m_Heap; // 0x80
	float m_DefaultStreamPriorityMultiplier; // 0x8c
	bool m_MotionBlurEnable; // 0x90
	bool m_UseDefaultRenderer; // 0x91
	bool m_AssertIfBundleNotFound; // 0x92
	unsigned char _0x93[0xd];
}; // size = 0xa0

#endif // FBGEN_AppearanceComponentData_H
