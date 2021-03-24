//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkConnection.h
// Created: Wed Mar 10 19:06:15 2021
//

#ifndef FBGEN_LinkConnection_H
#define FBGEN_LinkConnection_H

#include "DataContainer.h"
struct LinkConnection
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B1FD8;
	}
	DataContainer* m_Source; // 0x0
	DataContainer* m_Target; // 0x8
	int m_SourceFieldId; // 0x10
	int m_TargetFieldId; // 0x14
}; // size = 0x18

#endif // FBGEN_LinkConnection_H
