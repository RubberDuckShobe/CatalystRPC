//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalizedString.h
// Created: Wed Mar 10 19:06:09 2021
//

#ifndef FBGEN_LocalizedString_H
#define FBGEN_LocalizedString_H

#include "LocalizedStringEncoding.h"
#include "DataContainer.h"

class LocalizedString :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899B60;
	}
	const char* m_String; // 0x10
	LocalizedStringEncoding m_Encoding; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_LocalizedString_H
