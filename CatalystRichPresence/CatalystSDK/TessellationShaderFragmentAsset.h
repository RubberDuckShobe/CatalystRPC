//
// Generated with FrostbiteGen by Chod
// File: SDK\TessellationShaderFragmentAsset.h
// Created: Wed Mar 10 19:00:25 2021
//

#ifndef FBGEN_TessellationShaderFragmentAsset_H
#define FBGEN_TessellationShaderFragmentAsset_H

#include "FileRef.h"
#include "Array.h"
#include "Asset.h"

class TessellationShaderFragmentAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142838000;
	}
	FileRef m_SourceFile; // 0x18
	const char* m_HSControlPointFunctionName; // 0x20
	const char* m_HSPatchConstantFunctionName; // 0x28
	const char* m_DSFunctionName; // 0x30
	const char* m_VSOutputStructName; // 0x38
	const char* m_HSControlPointOutputStructName; // 0x40
	const char* m_HSPatchConstantOutputStructName; // 0x48
	const char* m_DSOutputStructName; // 0x50
	Array<TessellationShaderFragmentDefinition> m_Definitions; // 0x58
}; // size = 0x60

#endif // FBGEN_TessellationShaderFragmentAsset_H
