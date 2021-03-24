//
// Generated with FrostbiteGen by Chod
// File: SDK\EntitlementData.h
// Created: Wed Mar 10 19:06:58 2021
//

#ifndef FBGEN_EntitlementData_H
#define FBGEN_EntitlementData_H

#include "EntitlementType.h"
struct EntitlementData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280F8F8;
	}
	const char* m_License; // 0x0
	const char* m_EntitlementTag; // 0x8
	const char* m_GroupName; // 0x10
	const char* m_ProductId; // 0x18
	const char* m_ProjectId; // 0x20
	EntitlementType m_UsageType; // 0x28
	bool m_VerifyOwnership; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_EntitlementData_H
