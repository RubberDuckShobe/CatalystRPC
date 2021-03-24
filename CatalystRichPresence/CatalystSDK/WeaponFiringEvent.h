//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponFiringEvent.h
// Created: Wed Mar 10 18:58:50 2021
//

#ifndef FBGEN_WeaponFiringEvent_H
#define FBGEN_WeaponFiringEvent_H

enum WeaponFiringEvent
{
	WeaponFiringEvent_Push = 0x0,
	WeaponFiringEvent_Pop = 0x1,
	WeaponFiringEvent_PrimaryStartedFiringCallback = 0x2,
	WeaponFiringEvent_PrimaryFireCallback = 0x3,
	WeaponFiringEvent_PrimaryFireReleaseCallback = 0x4,
	WeaponFiringEvent_PrimaryFireShotSpawnedCallback = 0x5,
	WeaponFiringEvent_PrimaryFireAutomaticBeginCallback = 0x6,
	WeaponFiringEvent_PrimaryFireAutomaticEndCallback = 0x7,
	WeaponFiringEvent_PrimaryStoppedFiringCallback = 0x8,
	WeaponFiringEvent_ReloadPrimaryCallback = 0x9,
	WeaponFiringEvent_ReloadPrimaryEndCallback = 0xa,
	WeaponFiringEvent_BoltActionCallback = 0xb,
	WeaponFiringEvent_BoltActionEndCallback = 0xc,
	WeaponFiringEvent_DetonationSwitchCallback = 0xd,
	WeaponFiringEvent_HoldAndReleaseReleaseCallback = 0xe,
	WeaponFiringEvent_UpdateRequired = 0xf,
};

#endif // FBGEN_WeaponFiringEvent_H
