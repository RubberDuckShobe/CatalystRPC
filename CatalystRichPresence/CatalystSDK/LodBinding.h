//
// Generated with FrostbiteGen by Chod
// File: SDK\LodBinding.h
// Created: Wed Mar 10 19:06:07 2021
//

#ifndef FBGEN_LodBinding_H
#define FBGEN_LodBinding_H

#include "AntRef.h"
struct LodBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142815F00;
	}
	AntRef m_DisableControllerUpdate; // 0x0
	AntRef m_DisablePoseUpdate; // 0x14
	AntRef m_DistanceFromCamera; // 0x28
	AntRef m_HadVisualUpdate; // 0x3c
	AntRef m_ExternallyCalculatedDistanceFromCamera; // 0x50
	AntRef m_AnimatableInstanceId; // 0x64
	AntRef m_ResetController; // 0x78
}; // size = 0x8c

#endif // FBGEN_LodBinding_H
