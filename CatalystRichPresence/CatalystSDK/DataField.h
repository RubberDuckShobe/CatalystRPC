//
// Generated with FrostbiteGen by Chod
// File: SDK\DataField.h
// Created: Wed Mar 10 19:07:19 2021
//

#ifndef FBGEN_DataField_H
#define FBGEN_DataField_H

#include "DataContainer.h"
#include "FieldAccessType.h"
struct DataField
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B1FB8;
	}
	const char* m_Value; // 0x0
	DataContainer* m_ValueRef; // 0x8
	int m_Id; // 0x10
	FieldAccessType m_AccessType; // 0x14
}; // size = 0x18

#endif // FBGEN_DataField_H
