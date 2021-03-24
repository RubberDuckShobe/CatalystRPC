//
// Generated with FrostbiteGen by Chod
// File: SDK\UnlockComponentData.h
// Created: Wed Mar 10 18:59:42 2021
//

#ifndef FBGEN_UnlockComponentData_H
#define FBGEN_UnlockComponentData_H

#include "UnlockAssetBase.h"
#include "Guid.h"
#include "GameComponentData.h"

class UnlockComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816500;
	}
	UnlockAssetBase* m_UnlockAsset; // 0x70
	Guid m_UnlockAssetGuid; // 0x78
	unsigned int m_UnlockIdentifier; // 0x88
	bool m_InvertUnlockTest; // 0x8c
	bool m_UnlockableFromAllEntries; // 0x8d
	bool m_DeactivateCheckOnEnteringEntry; // 0x8e
	unsigned char _0x8f[0x1];
}; // size = 0x90

#endif // FBGEN_UnlockComponentData_H
