//
// Generated with FrostbiteGen by Chod
// File: SDK\VertexShaderFragmentAsset.h
// Created: Wed Mar 10 18:59:16 2021
//

#ifndef FBGEN_VertexShaderFragmentAsset_H
#define FBGEN_VertexShaderFragmentAsset_H

#include "FileRef.h"
#include "Asset.h"

class VertexShaderFragmentAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142838060;
	}
	FileRef m_SourceFile; // 0x18
	const char* m_Function; // 0x20
}; // size = 0x28

#endif // FBGEN_VertexShaderFragmentAsset_H
