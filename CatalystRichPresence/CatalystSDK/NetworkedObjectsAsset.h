//
// Generated with FrostbiteGen by Chod
// File: SDK\NetworkedObjectsAsset.h
// Created: Wed Mar 10 19:05:33 2021
//

#ifndef FBGEN_NetworkedObjectsAsset_H
#define FBGEN_NetworkedObjectsAsset_H

#include "Array.h"
#include "Asset.h"

class NetworkedObjectsAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA200;
	}
	Array<DataContainer*> m_Objects; // 0x18
}; // size = 0x20

#endif // FBGEN_NetworkedObjectsAsset_H
