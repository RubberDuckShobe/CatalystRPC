//
// Generated with FrostbiteGen by Chod
// File: SDK\UIHudIcon.h
// Created: Wed Mar 10 18:59:56 2021
//

#ifndef FBGEN_UIHudIcon_H
#define FBGEN_UIHudIcon_H

enum UIHudIcon
{
	UIHudIcon_Unused = 0x0,
	UIHudIcon_LocalPlayer = 0x1,
	UIHudIcon_LocalDirection = 0x2,
	UIHudIcon_FriendlyPlayer = 0x3,
	UIHudIcon_EnemyPlayer = 0x4,
	UIHudIcon_NeutralPlayer = 0x5,
	UIHudIcon_SquadMember = 0x6,
	UIHudIcon_SquadLeader = 0x7,
	UIHudIcon_SquadLeaderTargeted = 0x8,
	UIHudIcon_Vehicle = 0x9,
	UIHudIcon_PrimaryObjective = 0xa,
	UIHudIcon_PrimaryObjectiveBlink = 0xb,
	UIHudIcon_SecondaryObjective = 0xc,
	UIHudIcon_AreaMapMarker = 0xd,
	UIHudIcon_ObjectiveDestroy = 0xe,
	UIHudIcon_ObjectiveScout = 0xf,
	UIHudIcon_ObjectiveDefend = 0x10,
	UIHudIcon_ObjectiveMoveTo = 0x11,
	UIHudIcon_ObjectiveAttack = 0x12,
	UIHudIcon_ObjectiveFollow = 0x13,
	UIHudIcon_ObjectiveGeneral = 0x14,
	UIHudICon_UAV = 0x15,
	UIHudIcon_AmmoCrate = 0x16,
	UIHudIcon_MedicBag = 0x17,
	UIHudIcon_C4 = 0x18,
	UIHudIcon_ATMine = 0x19,
	UIHudIcon_StationaryWeapon = 0x1a,
	UIHudIcon_North = 0x1b,
	UIHudIcon_South = 0x1c,
	UIHudIcon_West = 0x1d,
	UIHudIcon_East = 0x1e,
	UIHudIcon_NeutralFlag = 0x1f,
	UIHudIcon_FriendlyFlag = 0x20,
	UIHudIcon_EnemyFlag = 0x21,
	UIHudIcon_FriendlyBase = 0x22,
	UIHudIcon_EnemyBase = 0x23,
	UIHudIcon_Team1Flag = 0x24,
	UIHudIcon_Team2Flag = 0x25,
	UIHudIcon_NeutralFlagLit = 0x26,
	UIHudIcon_FriendlyFlagLit = 0x27,
	UIHudIcon_EnemyFlagLit = 0x28,
	UIHudIcon_SelectableSpawnPoint = 0x29,
	UIHudIcon_SelectedSpawnPoint = 0x2a,
	UIHudIcon_NonSelectableSpawnPoint = 0x2b,
	UIHudIcon_FriendlyFlagUnderAttack = 0x2c,
	UIHudIcon_EnemyFlagUnderAttack = 0x2d,
	UIHudIcon_OrderAttack = 0x2e,
	UIHudIcon_OrderDefend = 0x2f,
	UIHudIcon_OrderAttackObserved = 0x30,
	UIHudIcon_OrderDefendObserved = 0x31,
	UIHudIcon_Boat = 0x32,
	UIHudIcon_Car = 0x33,
	UIHudIcon_Jeep = 0x34,
	UIHudIcon_HeliAttack = 0x35,
	UIHudIcon_HeliScout = 0x36,
	UIHudIcon_Tank = 0x37,
	UIHudIcon_TankIFV = 0x38,
	UIHudIcon_TankArty = 0x39,
	UIHudIcon_TankAA = 0x3a,
	UIHudIcon_TankAT = 0x3b,
	UIHudIcon_Jet = 0x3c,
	UIHudIcon_JetBomber = 0x3d,
	UIHudIcon_Stationary = 0x3e,
	UIHudIcon_Strategic = 0x3f,
	UIHudIcon_MotionRadarSweep = 0x40,
	UIHudIcon_NeedBackup = 0x41,
	UIHudIcon_NeedAmmo = 0x42,
	UIHudIcon_NeedMedic = 0x43,
	UIHudIcon_NeedPickup = 0x44,
	UIHudIcon_NeedRepair = 0x45,
	UIHudIcon_KitAssault = 0x46,
	UIHudIcon_KitDemolition = 0x47,
	UIHudIcon_KitRecon = 0x48,
	UIHudIcon_KitSpecialist = 0x49,
	UIHudIcon_KitSupport = 0x4a,
	UIHudIcon_KitMedic = 0x4b,
	UIHudIcon_KitEngineer = 0x4c,
	UIHudIcon_KitPickupAssault = 0x4d,
	UIHudIcon_KitPickupDemolition = 0x4e,
	UIHudIcon_KitPickupRecon = 0x4f,
	UIHudIcon_KitPickupSpecialist = 0x50,
	UIHudIcon_KitPickupSupport = 0x51,
	UIHudIcon_KitPickupMedic = 0x52,
	UIHudIcon_KitPickupEngineer = 0x53,
	UIHudIcon_Pickup = 0x54,
	UIHudIcon_TaggedVehicle = 0x55,
	UIHudIcon_LaserPaintedVehicle = 0x56,
	UIHudIcon_HeliTargetEnemy = 0x57,
	UIHudIcon_HeliTargetFriendly = 0x58,
	UIHudIcon_ArtilleryTarget = 0x59,
	UIHudIcon_NeutralFlagAttacker = 0x5a,
	UIHudIcon_FriendlyFlagAttacker = 0x5b,
	UIHudIcon_EnemyFlagAttacker = 0x5c,
	UIHudIcon_LaserTarget = 0x5d,
	UIHudIcon_ObjectiveAttacker = 0x5e,
	UIHudIcon_ObjectiveDefender = 0x5f,
	UIHudIcon_HealthbarBackground = 0x60,
	UIHudIcon_Healthbar = 0x61,
	UIHudIcon_RadarSweepComponent = 0x62,
	UIHudIcon_Blank = 0x63,
	UIHudIcon_LocalPlayerBigIcon = 0x64,
	UIHudIcon_LocalPlayerOutOfMap = 0x65,
	UIHudIcon_PrimaryObjectiveLarge = 0x66,
	UIHudIcon_TargetUnlocked = 0x67,
	UIHudIcon_TargetLocked = 0x68,
	UIHudIcon_TargetLocking = 0x69,
	UIHudIcon_ArtilleryStrikeNametag = 0x6a,
	UIHudIcon_ArtilleryStrikeMinimap = 0x6b,
	UIHudIcon_CapturePointContested = 0x6c,
	UIHudIcon_CapturePointDefended = 0x6d,
	UIHudIcon_RoundBar = 0x6e,
	UIHudIcon_RoundBarBg = 0x6f,
	UIHudIcon_RoundBarBgPlate = 0x70,
	UIHudIcon_SnapOvalArrow = 0x71,
	UIHudIcon_SquadleaderBg = 0x72,
	UIHudIcon_VehicleBg = 0x73,
	UIHudIcon_NonTakeableControlPoint = 0x74,
	UIHudIcon_SpottedPosition = 0x75,
	UIHudIcon_Grenade = 0x76,
	UIHudIcon_Revive = 0x77,
	UIHudIcon_Repair = 0x78,
	UIHudIcon_Interact = 0x79,
	UIHudIcon_Voip = 0x7a,
	UIHudIcon_Claymore = 0x7b,
	UIHudIcon_EodBot = 0x7c,
	UIHudIcon_Explosive = 0x7d,
	UIHudIcon_LaserDesignator = 0x7e,
	UIHudIcon_Mav = 0x7f,
	UIHudIcon_Mortar = 0x80,
	UIHudIcon_RadioBeacon = 0x81,
	UIHudIcon_Ugs = 0x82,
	UIHudIcon_PercetageBarMiddle = 0x83,
	UIHudIcon_PercetageBarEdge = 0x84,
	UIHudIcon_PercentageBarBackground = 0x85,
	UIHudIcon_TankLC = 0x86,
	UIHudIcon_HeliTrans = 0x87,
	UIHudIcon_StaticAT = 0x88,
	UIHudIcon_StaticAA = 0x89,
	UIHudIcon_SprintBoost = 0x8a,
	UIHudIcon_AmmoBoost = 0x8b,
	UIHudIcon_ExplosiveBoost = 0x8c,
	UIHudIcon_ExplosiveResistBoost = 0x8d,
	UIHudIcon_SuppressionBoost = 0x8e,
	UIHudIcon_SuppressionResistBoost = 0x8f,
	UIHudIcon_GrenadeBoost = 0x90,
	UIHudIcon_HealSpeedBoost = 0x91,
	UIHudIcon_NeedAmmoHighlight = 0x92,
	UIHudIcon_NeedMedicHighlight = 0x93,
	UIHudIcon_NeedRepairHighlight = 0x94,
	UIHudIcon_NeedPickupHighlight = 0x95,
	UIHudIcon_PlayerDead = 0x96,
	UIHudIcon_Player = 0x97,
	UIHudIcon_Flag = 0x98,
	UIHudIcon_Base = 0x99,
	UIHudIcon_ObjectiveNeutralBomb = 0x9a,
	UIHudIcon_ObjectiveFriendlyBomb = 0x9b,
	UIHudIcon_ObjectiveEnemyBomb = 0x9c,
	UIHudIcon_ObjectiveEnemyHVT = 0x9d,
	UIHudIcon_ObjectiveFriendlyHVT = 0x9e,
	UIHudIcon_Count = 0x9f,
};

#endif // FBGEN_UIHudIcon_H