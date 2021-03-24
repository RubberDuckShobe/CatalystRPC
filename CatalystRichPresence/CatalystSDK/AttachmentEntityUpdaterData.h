//
// Generated with FrostbiteGen by Chod
// File: SDK\AttachmentEntityUpdaterData.h
// Created: Wed Mar 10 19:08:38 2021
//

#ifndef FBGEN_AttachmentEntityUpdaterData_H
#define FBGEN_AttachmentEntityUpdaterData_H

#include "Realm.h"
#include "EntityData.h"

class AttachmentEntityUpdaterData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1A80;
	}
	Realm m_Realm; // 0x18
	float m_Weight; // 0x1c
}; // size = 0x20

#endif // FBGEN_AttachmentEntityUpdaterData_H
