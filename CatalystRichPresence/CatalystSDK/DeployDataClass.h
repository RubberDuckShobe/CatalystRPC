//
// Generated with FrostbiteGen by Chod
// File: SDK\DeployDataClass.h
// Created: Wed Mar 10 19:07:14 2021
//

#ifndef FBGEN_DeployDataClass_H
#define FBGEN_DeployDataClass_H

#include "PamCreatureDeployBinding.h"
#include "AntRef.h"
#include "DataContainer.h"

class DeployDataClass :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CBA0;
	}
	PamCreatureDeployBinding m_DeployAntBinding; // 0x10
	AntRef m_DeployContextDatabase; // 0x74
}; // size = 0x88

#endif // FBGEN_DeployDataClass_H
