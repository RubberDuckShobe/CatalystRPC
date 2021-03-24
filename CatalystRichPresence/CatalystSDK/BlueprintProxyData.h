//
// Generated with FrostbiteGen by Chod
// File: SDK\BlueprintProxyData.h
// Created: Wed Mar 10 19:08:28 2021
//

#ifndef FBGEN_BlueprintProxyData_H
#define FBGEN_BlueprintProxyData_H

#include "LinearTransform.h"
#include "Array.h"
#include "BlueprintProxyPropertyFilterData.h"

class BlueprintProxyData :
	public BlueprintProxyPropertyFilterData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C2200;
	}
	LinearTransform m_PreviewSpawnPosition; // 0xa0
	Array<ProxyPropertyContainer> m_ConnectedProperties; // 0xe0
	bool m_PreviewInGameView; // 0xe8
	unsigned char _0xe9[0x7];
}; // size = 0xf0

#endif // FBGEN_BlueprintProxyData_H
