//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraActionData.h
// Created: Wed Mar 10 19:08:22 2021
//

#ifndef FBGEN_CameraActionData_H
#define FBGEN_CameraActionData_H

#include "CameraMovementActionMode.h"
#include "SimpleMovementActionBaseData.h"

class CameraActionData :
	public SimpleMovementActionBaseData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FEF0;
	}
	CameraMovementActionMode m_ActionMode; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_CameraActionData_H
