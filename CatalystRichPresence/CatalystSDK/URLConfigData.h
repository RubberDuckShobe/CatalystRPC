//
// Generated with FrostbiteGen by Chod
// File: SDK\URLConfigData.h
// Created: Wed Mar 10 18:59:44 2021
//

#ifndef FBGEN_URLConfigData_H
#define FBGEN_URLConfigData_H

#include "WebUtilsEnvironment.h"
#include "DataContainer.h"

class URLConfigData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289E9E0;
	}
	const char* m_Name; // 0x10
	const char* m_BaseUrl; // 0x18
	const char* m_Url; // 0x20
	WebUtilsEnvironment m_Environment; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_URLConfigData_H
