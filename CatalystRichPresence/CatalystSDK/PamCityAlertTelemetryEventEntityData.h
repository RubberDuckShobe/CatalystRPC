//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCityAlertTelemetryEventEntityData.h
// Created: Wed Mar 10 19:05:03 2021
//

#ifndef FBGEN_PamCityAlertTelemetryEventEntityData_H
#define FBGEN_PamCityAlertTelemetryEventEntityData_H

#include "EntityData.h"

class PamCityAlertTelemetryEventEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287DCE0;
	}
	int m_CityAlertLevel; // 0x18
	int m_XpGained; // 0x1c
	int m_FlowDurationPercent; // 0x20
	bool m_CityAlertActive; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_PamCityAlertTelemetryEventEntityData_H
