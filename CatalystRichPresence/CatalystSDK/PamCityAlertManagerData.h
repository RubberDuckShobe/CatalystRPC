//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCityAlertManagerData.h
// Created: Wed Mar 10 19:05:03 2021
//

#ifndef FBGEN_PamCityAlertManagerData_H
#define FBGEN_PamCityAlertManagerData_H

#include "Realm.h"
#include "EntityData.h"

class PamCityAlertManagerData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D740;
	}
	Realm m_Realm; // 0x18
	float m_NoticedByHumanAITimeThreshold; // 0x1c
	float m_NoticedByHelicopterTimeThreshold; // 0x20
	float m_NoticedByDroneTimeThreshold; // 0x24
	float m_NoticedByCameraTimeThreshold; // 0x28
	float m_NoticedByHumanAICooldown; // 0x2c
	float m_NoticedByHelicopterCooldown; // 0x30
	float m_NoticedByDroneCooldown; // 0x34
	float m_NoticedByCameraCooldown; // 0x38
	float m_NoticedBySecHubCooldown; // 0x3c
	float m_DefaultCooldown; // 0x40
	float m_NoticedBySecHubTime; // 0x44
	float m_MinimumCityAlertTime; // 0x48
	float m_ActivationTimeUntilLevel4; // 0x4c
	float m_TimeNoticedByCameraInLevel1UntilDroneIsSpawned; // 0x50
	float m_SpawnDroneWhenInactiveAndSensedByAITime; // 0x54
	int m_MaximumCityAlertLevel; // 0x58
	int m_AIsToKillToTriggerLevel4; // 0x5c
	int m_HotSpotsToActivateToGoToLevel3; // 0x60
	int m_HelicopterAllowedToSpawnAtLevel; // 0x64
	int m_DroneAllowedToSpawnAtLevel; // 0x68
	float m_TimeAllowedBetweenCameraDestruction; // 0x6c
	float m_CityAlertRadius; // 0x70
	bool m_NoticedByHumanAI; // 0x74
	bool m_NoticedByHelicopterAI; // 0x75
	bool m_NoticedByDroneAI; // 0x76
	bool m_ForceActivateCityAlert; // 0x77
	bool m_ForceDeactivateCityAlert; // 0x78
	bool m_PauseCityAlert; // 0x79
	bool m_HelicopterAvailable; // 0x7a
	bool m_DroneAvailable; // 0x7b
	unsigned char _0x7c[0x4];
}; // size = 0x80

#endif // FBGEN_PamCityAlertManagerData_H
