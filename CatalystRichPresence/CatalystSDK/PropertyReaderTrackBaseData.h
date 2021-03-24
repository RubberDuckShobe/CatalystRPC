//
// Generated with FrostbiteGen by Chod
// File: SDK\PropertyReaderTrackBaseData.h
// Created: Wed Mar 10 19:02:50 2021
//

#ifndef FBGEN_PropertyReaderTrackBaseData_H
#define FBGEN_PropertyReaderTrackBaseData_H

#include "Realm.h"
#include "SchematicPinTrackData.h"

class PropertyReaderTrackBaseData :
	public SchematicPinTrackData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283DC90;
	}
	Realm m_Realm; // 0x38
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_PropertyReaderTrackBaseData_H
