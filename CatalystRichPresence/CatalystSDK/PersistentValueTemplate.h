//
// Generated with FrostbiteGen by Chod
// File: SDK\PersistentValueTemplate.h
// Created: Wed Mar 10 19:03:12 2021
//

#ifndef FBGEN_PersistentValueTemplate_H
#define FBGEN_PersistentValueTemplate_H

#include "PersistentValueTemplateData.h"
#include "Array.h"
#include "DataContainer.h"

class PersistentValueTemplate :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809E90;
	}
	PersistentValueTemplateData m_Data; // 0x10
	Array<AbstractPersistentStatRef*> m_DerivedFormulaRefs; // 0x30
}; // size = 0x38

#endif // FBGEN_PersistentValueTemplate_H
