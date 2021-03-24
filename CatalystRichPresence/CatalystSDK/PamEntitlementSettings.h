//
// Generated with FrostbiteGen by Chod
// File: SDK\PamEntitlementSettings.h
// Created: Wed Mar 10 19:04:39 2021
//

#ifndef FBGEN_PamEntitlementSettings_H
#define FBGEN_PamEntitlementSettings_H

#include "Array.h"
#include "SystemSettings.h"

class PamEntitlementSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428805F0;
	}
	Array<EntitlementsToLicenseMapping> m_EntitlementsToLicenseMapping; // 0x20
	Array<const char*> m_EAEntitlementPCGroupNames; // 0x28
	Array<const char*> m_EAEntitlementXboxOneGroupNames; // 0x30
	Array<const char*> m_EAEntitlementPS4GroupNames; // 0x38
	Array<EntitlementQuery*> m_EntitlementQueries; // 0x40
}; // size = 0x48

#endif // FBGEN_PamEntitlementSettings_H
