//
// Generated with FrostbiteGen by Chod
// File: SDK\AntEnumeration.h
// Created: Wed Mar 10 19:08:43 2021
//

#ifndef FBGEN_AntEnumeration_H
#define FBGEN_AntEnumeration_H

#include "AntRef.h"
#include "DataContainer.h"

class AntEnumeration :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818BA0;
	}
	AntRef m_AntAsset; // 0x10
	int m_Value; // 0x24
}; // size = 0x28

#endif // FBGEN_AntEnumeration_H
