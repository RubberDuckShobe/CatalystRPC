//
// Generated with FrostbiteGen by Chod
// File: SDK\PersistentValueTemplateStatRef.h
// Created: Wed Mar 10 19:03:12 2021
//

#ifndef FBGEN_PersistentValueTemplateStatRef_H
#define FBGEN_PersistentValueTemplateStatRef_H

#include "PersistentValueTemplate.h"
#include "AbstractPersistentStatRef.h"

class PersistentValueTemplateStatRef :
	public AbstractPersistentStatRef // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809DD0;
	}
	PersistentValueTemplate* m_Definition; // 0x10
}; // size = 0x18

#endif // FBGEN_PersistentValueTemplateStatRef_H
