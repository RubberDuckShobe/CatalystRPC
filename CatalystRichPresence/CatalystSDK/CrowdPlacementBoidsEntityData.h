//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdPlacementBoidsEntityData.h
// Created: Wed Mar 10 19:07:25 2021
//

#ifndef FBGEN_CrowdPlacementBoidsEntityData_H
#define FBGEN_CrowdPlacementBoidsEntityData_H

#include "CrowdBoidsSettings.h"
#include "CrowdPlacementBaseEntityData.h"

class CrowdPlacementBoidsEntityData :
	public CrowdPlacementBaseEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428949F0;
	}
	unsigned int m_MaxCrowdMembers; // 0x70
	float m_CullDistance; // 0x74
	float m_TargetSpawnedPercentage; // 0x78
	unsigned char _0x7c[0x4];
	CrowdBoidsSettings* m_BoidsSettings; // 0x80
	bool m_Enabled; // 0x88
	unsigned char _0x89[0x7];
}; // size = 0x90

#endif // FBGEN_CrowdPlacementBoidsEntityData_H
