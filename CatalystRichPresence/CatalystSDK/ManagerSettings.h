//
// Generated with FrostbiteGen by Chod
// File: SDK\ManagerSettings.h
// Created: Wed Mar 10 19:06:04 2021
//

#ifndef FBGEN_ManagerSettings_H
#define FBGEN_ManagerSettings_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class ManagerSettings :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B85F0;
	}
	Array<AISettingsBase*> m_Settings; // 0x18
}; // size = 0x20

#endif // FBGEN_ManagerSettings_H
