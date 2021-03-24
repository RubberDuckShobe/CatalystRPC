//
// Generated with FrostbiteGen by Chod
// File: SDK\LayerData.h
// Created: Wed Mar 10 19:06:20 2021
//

#ifndef FBGEN_LayerData_H
#define FBGEN_LayerData_H

#include "Guid.h"
#include "PrefabBlueprint.h"

class LayerData :
	public PrefabBlueprint // size = 0x50
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EC450;
	}
	Guid m_HackToSolveRealTimeTweakingIssue; // 0x50
	bool m_Enabled; // 0x60
	unsigned char _0x61[0x7];
}; // size = 0x68

#endif // FBGEN_LayerData_H
