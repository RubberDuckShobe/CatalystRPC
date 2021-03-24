//
// Generated with FrostbiteGen by Chod
// File: SDK\VisualEnvironmentComponentData.h
// Created: Wed Mar 10 18:59:13 2021
//

#ifndef FBGEN_VisualEnvironmentComponentData_H
#define FBGEN_VisualEnvironmentComponentData_H

#include "Array.h"
#include "GameComponentData.h"

class VisualEnvironmentComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7670;
	}
	Array<const char*> m_PropertyOverrides; // 0x70
	Array<unsigned int> m_PropertyOverrideMasks; // 0x78
}; // size = 0x80

#endif // FBGEN_VisualEnvironmentComponentData_H
