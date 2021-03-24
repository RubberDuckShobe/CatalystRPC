//
// Generated with FrostbiteGen by Chod
// File: SDK\ForceManagerSettings.h
// Created: Wed Mar 10 19:06:43 2021
//

#ifndef FBGEN_ForceManagerSettings_H
#define FBGEN_ForceManagerSettings_H

#include "DataContainer.h"

class ForceManagerSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EAB00;
	}
	float m_VectorFieldNormValue; // 0x10
	float m_VectorFieldCellSize; // 0x14
	float m_VectorFieldPlanarHeightPosition; // 0x18
	float m_VectorFieldSizeX; // 0x1c
	float m_VectorFieldSizeY; // 0x20
	float m_VectorFieldSizeZ; // 0x24
	float m_VectorFieldCenterX; // 0x28
	float m_VectorFieldCenterY; // 0x2c
	float m_VectorFieldCenterZ; // 0x30
	float m_VectorFieldPointSize; // 0x34
	bool m_WindEnable; // 0x38
	bool m_ForcesEnable; // 0x39
	bool m_DrawStats; // 0x3a
	bool m_DrawWindGraph; // 0x3b
	bool m_DrawBoundingVolumes; // 0x3c
	bool m_DrawSelectionBoundingVolumes; // 0x3d
	bool m_DrawSelectionVectorField; // 0x3e
	bool m_DrawSelectionForceVectorField; // 0x3f
	bool m_DrawPlanarVectorField; // 0x40
	bool m_DrawExternalVectorField; // 0x41
	bool m_VectorFieldEnableWind; // 0x42
	bool m_VectorFieldEnableSphere; // 0x43
	bool m_VectorFieldEnableCone; // 0x44
	bool m_VectorFieldEnableBaked; // 0x45
	bool m_VectorFieldCameraCentered; // 0x46
	bool m_VectorFieldArrow; // 0x47
	bool m_VectorFieldLockSelection; // 0x48
	unsigned char _0x49[0x7];
}; // size = 0x50

#endif // FBGEN_ForceManagerSettings_H
