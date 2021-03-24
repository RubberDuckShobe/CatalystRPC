//
// Generated with FrostbiteGen by Chod
// File: SDK\PropertyConnection.h
// Created: Wed Mar 10 19:02:50 2021
//

#ifndef FBGEN_PropertyConnection_H
#define FBGEN_PropertyConnection_H

#include "DataContainer.h"
struct PropertyConnection
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B1FF8;
	}
	DataContainer* m_Source; // 0x0
	DataContainer* m_Target; // 0x8
	int m_SourceFieldId; // 0x10
	int m_TargetFieldId; // 0x14
	unsigned int m_Flags; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_PropertyConnection_H
