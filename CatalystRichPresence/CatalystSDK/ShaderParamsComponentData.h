//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderParamsComponentData.h
// Created: Wed Mar 10 19:01:32 2021
//

#ifndef FBGEN_ShaderParamsComponentData_H
#define FBGEN_ShaderParamsComponentData_H

#include "Vec4.h"
#include "Realm.h"
#include "VisualEnvironmentComponentData.h"

class ShaderParamsComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846AC0;
	}
	Vec4 m_Value; // 0x80
	Realm m_Realm; // 0x90
	unsigned char _0x94[0x4];
	const char* m_ParameterName; // 0x98
}; // size = 0xa0

#endif // FBGEN_ShaderParamsComponentData_H
