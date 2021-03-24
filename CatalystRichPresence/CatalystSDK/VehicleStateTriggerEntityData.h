//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleStateTriggerEntityData.h
// Created: Wed Mar 10 18:59:17 2021
//

#ifndef FBGEN_VehicleStateTriggerEntityData_H
#define FBGEN_VehicleStateTriggerEntityData_H

#include "TriggerEntityData.h"

class VehicleStateTriggerEntityData :
	public TriggerEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F770;
	}
	float m_LockAmount; // 0x70
	unsigned int m_SeatSpecificIndexForHuman; // 0x74
	unsigned int m_SeatSpecificIndexForAi; // 0x78
	unsigned int m_BulletCount; // 0x7c
	unsigned int m_HealthToSet; // 0x80
	unsigned int m_HealthToCheck; // 0x84
	float m_DestructionRadius; // 0x88
	bool m_AllowHumanToEnterAllSeats; // 0x8c
	bool m_RestrictHumanToSpecificSeat; // 0x8d
	bool m_AllowAiToEnterAllSeats; // 0x8e
	bool m_BanAiFromSpecificSeat; // 0x8f
	bool m_TriggerCriticalOnHealthSet; // 0x90
	bool m_CheckHealthGreaterOrEqual; // 0x91
	bool m_ShouldDestroyVehicles; // 0x92
	bool m_ShouldDestroyBangers; // 0x93
	unsigned char _0x94[0xc];
}; // size = 0xa0

#endif // FBGEN_VehicleStateTriggerEntityData_H
