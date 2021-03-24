//
// Generated with FrostbiteGen by Chod
// File: SDK\LanguageCollection.h
// Created: Wed Mar 10 19:06:21 2021
//

#ifndef FBGEN_LanguageCollection_H
#define FBGEN_LanguageCollection_H

#include "Array.h"
#include "DataContainer.h"

class LanguageCollection :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C0990;
	}
	Array<LanguageCollectionElement*> m_LanguagesString; // 0x10
}; // size = 0x18

#endif // FBGEN_LanguageCollection_H
