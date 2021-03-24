//
// Generated with FrostbiteGen by Chod
// File: SDK\IesProfileAsset.h
// Created: Wed Mar 10 19:06:32 2021
//

#ifndef FBGEN_IesProfileAsset_H
#define FBGEN_IesProfileAsset_H

#include "ResourceRef.h"
#include "Asset.h"

class IesProfileAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428346D0;
	}
	ResourceRef m_SourceResource; // 0x18
}; // size = 0x20

#endif // FBGEN_IesProfileAsset_H
