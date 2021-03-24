//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMapDistrictEntityData.h
// Created: Wed Mar 10 19:04:24 2021
//

#ifndef FBGEN_PamMapDistrictEntityData_H
#define FBGEN_PamMapDistrictEntityData_H

#include "PamMapDistrictDescription.h"
#include "EntityData.h"

class PamMapDistrictEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880BF0;
	}
	PamMapDistrictDescription* m_District; // 0x18
}; // size = 0x20

#endif // FBGEN_PamMapDistrictEntityData_H
