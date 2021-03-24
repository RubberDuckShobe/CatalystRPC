//
// Generated with FrostbiteGen by Chod
// File: SDK\EdgeModelLightMapData.h
// Created: Wed Mar 10 19:07:04 2021
//

#ifndef FBGEN_EdgeModelLightMapData_H
#define FBGEN_EdgeModelLightMapData_H

#include "Array.h"
#include "DataContainer.h"

class EdgeModelLightMapData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CFE0;
	}
	Array<Vec4> m_LightMapUvs; // 0x10
}; // size = 0x18

#endif // FBGEN_EdgeModelLightMapData_H
