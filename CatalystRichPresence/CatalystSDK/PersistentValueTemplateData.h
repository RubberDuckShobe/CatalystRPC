//
// Generated with FrostbiteGen by Chod
// File: SDK\PersistentValueTemplateData.h
// Created: Wed Mar 10 19:03:12 2021
//

#ifndef FBGEN_PersistentValueTemplateData_H
#define FBGEN_PersistentValueTemplateData_H

#include "PersistentValueType.h"
#include "PersistentValueDataType.h"
#include "PersistentValueHistoryType.h"
struct PersistentValueTemplateData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809168;
	}
	const char* m_Name; // 0x0
	const char* m_DefaultValue; // 0x8
	float m_DefaultFloatValue; // 0x10
	PersistentValueType m_ValueType; // 0x14
	PersistentValueDataType m_DataType; // 0x18
	PersistentValueHistoryType m_HistoryType; // 0x1c
}; // size = 0x20

#endif // FBGEN_PersistentValueTemplateData_H
