//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsRenderSettings.h
// Created: Wed Mar 10 19:03:08 2021
//

#ifndef FBGEN_PhysicsRenderSettings_H
#define FBGEN_PhysicsRenderSettings_H

#include "DataContainer.h"

class PhysicsRenderSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282EE10;
	}
	int m_RenderTerrainMinMaxLevel; // 0x10
	float m_ViewDistance; // 0x14
	int m_RenderSpecificPart; // 0x18
	bool m_RenderServer; // 0x1c
	bool m_RenderClient; // 0x1d
	bool m_RenderEffectWorld; // 0x1e
	bool m_RenderStatic; // 0x1f
	bool m_RenderDetail; // 0x20
	bool m_RenderGroup; // 0x21
	bool m_RenderUngrouped; // 0x22
	bool m_RenderRagdoll; // 0x23
	bool m_RenderWater; // 0x24
	bool m_RenderTerrain; // 0x25
	bool m_RenderCharacters; // 0x26
	bool m_RenderAabbTrigger; // 0x27
	bool m_RenderCharacterCollision; // 0x28
	bool m_RenderSolidGeometry; // 0x29
	bool m_UseShapeCache; // 0x2a
	bool m_RenderConstraints; // 0x2b
	bool m_RenderOnlyContactConstraints; // 0x2c
	bool m_RenderConstraintCount; // 0x2d
	bool m_RenderActiveConstraintCount; // 0x2e
	bool m_RenderSimulationIslands; // 0x2f
	bool m_RenderBroadphaseHandles; // 0x30
	bool m_RenderCollisionVertexCount; // 0x31
	bool m_RenderInteractingVertexCount; // 0x32
	bool m_RenderInteractingShapeCount; // 0x33
	bool m_RenderPenetrationDistance; // 0x34
	bool m_RenderMidphaseCheckCount; // 0x35
	bool m_RenderDestructionConnections; // 0x36
	bool m_RenderActions; // 0x37
	bool m_RenderSleepStatus; // 0x38
	bool m_RenderQualityType; // 0x39
	bool m_RenderPartBoundingBoxes; // 0x3a
	bool m_RenderOnlyBoundingBoxes; // 0x3b
	bool m_RenderRigidBodyTransform; // 0x3c
	bool m_RenderInertia; // 0x3d
	bool m_RenderCenterOfMass; // 0x3e
	bool m_RenderLinearVelocity; // 0x3f
	bool m_RenderCollidesWithTerrain; // 0x40
	bool m_RenderCollisionSpheres; // 0x41
	bool m_RenderEntityStats; // 0x42
	bool m_RenderWorldStats; // 0x43
	bool m_ShowContactsInWorldStats; // 0x44
	bool m_ShowInactiveContactsInWorldStats; // 0x45
	bool m_ShowPhantomsInWorldStats; // 0x46
	bool m_ShowFixedObjectsInWorldStats; // 0x47
	bool m_RenderMemoryUsed; // 0x48
	bool m_CollisionSpawnDebug; // 0x49
	bool m_RenderHeatMap; // 0x4a
	bool m_RenderHeatMapFromToi; // 0x4b
	bool m_RenderInvalidSpawnPositions; // 0x4c
	bool m_RenderAddToWorldMap; // 0x4d
	unsigned char _0x4e[0x2];
}; // size = 0x50

#endif // FBGEN_PhysicsRenderSettings_H
