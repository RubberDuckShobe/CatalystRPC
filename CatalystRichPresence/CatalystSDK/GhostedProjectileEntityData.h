//
// Generated with FrostbiteGen by Chod
// File: SDK\GhostedProjectileEntityData.h
// Created: Wed Mar 10 19:06:38 2021
//

#ifndef FBGEN_GhostedProjectileEntityData_H
#define FBGEN_GhostedProjectileEntityData_H

#include "MeshProjectileEntityData.h"

class GhostedProjectileEntityData :
	public MeshProjectileEntityData // size = 0x130
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289E180;
	}
	float m_ProxyConvergenceDelay; // 0x130
	float m_ProxyConvergenceDuration; // 0x134
	bool m_ProxyConvergenceInstantOnAttach; // 0x138
	bool m_ForceProxyConvergence; // 0x139
	unsigned char _0x13a[0x6];
}; // size = 0x140

#endif // FBGEN_GhostedProjectileEntityData_H
