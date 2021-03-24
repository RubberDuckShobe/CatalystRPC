//
// Generated with FrostbiteGen by Chod
// File: SDK\DataContainerCollectionBlueprint.h
// Created: Wed Mar 10 19:07:19 2021
//

#ifndef FBGEN_DataContainerCollectionBlueprint_H
#define FBGEN_DataContainerCollectionBlueprint_H

#include "Array.h"
#include "Blueprint.h"

class DataContainerCollectionBlueprint :
	public Blueprint // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7D30;
	}
	Array<DataContainer*> m_DataContainers; // 0x40
}; // size = 0x48

#endif // FBGEN_DataContainerCollectionBlueprint_H
