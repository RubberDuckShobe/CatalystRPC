//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCreatureDeployBinding.h
// Created: Wed Mar 10 19:04:44 2021
//

#ifndef FBGEN_PamCreatureDeployBinding_H
#define FBGEN_PamCreatureDeployBinding_H

#include "AntRef.h"
struct PamCreatureDeployBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C0B8;
	}
	AntRef m_DeployTrigger; // 0x0
	AntRef m_PrevAlertMode; // 0x14
	AntRef m_CurrentAlertMode; // 0x28
	AntRef m_AIAlertMode; // 0x3c
	AntRef m_InDeploy; // 0x50
}; // size = 0x64

#endif // FBGEN_PamCreatureDeployBinding_H
