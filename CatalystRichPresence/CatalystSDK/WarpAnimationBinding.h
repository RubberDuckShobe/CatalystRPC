//
// Generated with FrostbiteGen by Chod
// File: SDK\WarpAnimationBinding.h
// Created: Wed Mar 10 18:58:54 2021
//

#ifndef FBGEN_WarpAnimationBinding_H
#define FBGEN_WarpAnimationBinding_H

#include "AntRef.h"
struct WarpAnimationBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821A80;
	}
	AntRef m_ConnectJointGroup; // 0x0
	AntRef m_ConnectJointWeight; // 0x14
	AntRef m_EnableAlign; // 0x28
	AntRef m_DisableCulling; // 0x3c
	AntRef m_TranslationYWarpTolerance; // 0x50
	AntRef m_AttachToAnimatableInstanceId; // 0x64
	AntRef m_JoinAttachment; // 0x78
}; // size = 0x8c

#endif // FBGEN_WarpAnimationBinding_H
