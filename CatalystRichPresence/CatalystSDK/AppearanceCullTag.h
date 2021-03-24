//
// Generated with FrostbiteGen by Chod
// File: SDK\AppearanceCullTag.h
// Created: Wed Mar 10 19:08:41 2021
//

#ifndef FBGEN_AppearanceCullTag_H
#define FBGEN_AppearanceCullTag_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class AppearanceCullTag :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B5610;
	}
	Array<unsigned int> m_TagHashes; // 0x18
}; // size = 0x20

#endif // FBGEN_AppearanceCullTag_H
