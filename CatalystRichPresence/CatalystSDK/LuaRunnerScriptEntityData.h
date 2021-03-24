//
// Generated with FrostbiteGen by Chod
// File: SDK\LuaRunnerScriptEntityData.h
// Created: Wed Mar 10 19:06:05 2021
//

#ifndef FBGEN_LuaRunnerScriptEntityData_H
#define FBGEN_LuaRunnerScriptEntityData_H

#include "Array.h"
#include "ExecuteOnPropertyChangeType.h"
#include "Realm.h"
#include "LuaRunnerCompiledLua.h"
#include "EntityData.h"

class LuaRunnerScriptEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142849B30;
	}
	const char* m_Script; // 0x18
	Array<const char*> m_InputEvents; // 0x20
	Array<const char*> m_OutputEvents; // 0x28
	Array<const char*> m_InputFloatProperties; // 0x30
	Array<const char*> m_OutputFloatProperties; // 0x38
	Array<const char*> m_InputIntProperties; // 0x40
	Array<const char*> m_OutputIntProperties; // 0x48
	Array<const char*> m_InputBoolProperties; // 0x50
	Array<const char*> m_OutputBoolProperties; // 0x58
	Array<const char*> m_InputStringProperties; // 0x60
	Array<const char*> m_OutputStringProperties; // 0x68
	Array<const char*> m_InputTransformProperties; // 0x70
	Array<const char*> m_OutputTransformProperties; // 0x78
	Array<const char*> m_InputVec2Properties; // 0x80
	Array<const char*> m_OutputVec2Properties; // 0x88
	Array<const char*> m_InputVec3Properties; // 0x90
	Array<const char*> m_OutputVec3Properties; // 0x98
	Array<const char*> m_InputVec4Properties; // 0xa0
	Array<const char*> m_OutputVec4Properties; // 0xa8
	Array<CustomProperty> m_InputCustomProperties; // 0xb0
	Array<CustomProperty> m_OutputCustomProperties; // 0xb8
	ExecuteOnPropertyChangeType m_ExecuteOnPropertyChange; // 0xc0
	int m_PriorityForExecutingPerFrame; // 0xc4
	Realm m_Realm; // 0xc8
	unsigned char _0xcc[0x4];
	LuaRunnerCompiledLua* m_CompiledLua; // 0xd0
	bool m_AutoStartExecutingPerFrame; // 0xd8
	bool m_AutoStartForInitialization; // 0xd9
	bool m_RunOnPropertyChange; // 0xda
	bool m_AddToDebugDisplay; // 0xdb
	unsigned char _0xdc[0x4];
}; // size = 0xe0

#endif // FBGEN_LuaRunnerScriptEntityData_H
