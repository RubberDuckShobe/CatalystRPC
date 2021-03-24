//
// Generated with FrostbiteGen by Chod
// File: SDK\DataBusData.h
// Created: Wed Mar 10 19:07:20 2021
//

#ifndef FBGEN_DataBusData_H
#define FBGEN_DataBusData_H

#include "Array.h"
#include "DynamicDataContainer.h"
#include "Asset.h"

class DataBusData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B2100;
	}
	Array<PropertyConnection> m_PropertyConnections; // 0x18
	Array<LinkConnection> m_LinkConnections; // 0x20
	DynamicDataContainer* m_Interface; // 0x28
	unsigned short m_Flags; // 0x30
	unsigned char _0x32[0x6];
}; // size = 0x38

#endif // FBGEN_DataBusData_H
