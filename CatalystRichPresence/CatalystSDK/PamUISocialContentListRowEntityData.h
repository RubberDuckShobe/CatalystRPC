//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUISocialContentListRowEntityData.h
// Created: Wed Mar 10 19:03:23 2021
//

#ifndef FBGEN_PamUISocialContentListRowEntityData_H
#define FBGEN_PamUISocialContentListRowEntityData_H

#include "Realm.h"
#include "PamSharedContentListRow.h"
#include "EntityData.h"

class PamUISocialContentListRowEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889740;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	PamSharedContentListRow* m_ListRow; // 0x20
}; // size = 0x28

#endif // FBGEN_PamUISocialContentListRowEntityData_H
