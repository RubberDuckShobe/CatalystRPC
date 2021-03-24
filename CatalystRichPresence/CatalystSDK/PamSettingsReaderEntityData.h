//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSettingsReaderEntityData.h
// Created: Wed Mar 10 19:03:53 2021
//

#ifndef FBGEN_PamSettingsReaderEntityData_H
#define FBGEN_PamSettingsReaderEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class PamSettingsReaderEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287DC80;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Array<PamSettingsReaderVariableInt> m_IntVariables; // 0x20
	Array<PamSettingsReaderVariableFloat> m_FloatVariables; // 0x28
	Array<PamSettingsReaderVariableBool> m_BoolVariables; // 0x30
	Array<PamSettingsReaderVariableString> m_StringVariables; // 0x38
	Array<PamSettingsReaderVariableVec3> m_Vec3Variables; // 0x40
}; // size = 0x48

#endif // FBGEN_PamSettingsReaderEntityData_H
