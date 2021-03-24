//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMapIconData.h
// Created: Wed Mar 10 19:03:28 2021
//

#ifndef FBGEN_PamUIMapIconData_H
#define FBGEN_PamUIMapIconData_H

#include "DiceUIVectorShapeAsset.h"
#include "DataContainer.h"

class PamUIMapIconData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428788A0;
	}
	DiceUIVectorShapeAsset* m_IconShape; // 0x10
	DiceUIVectorShapeAsset* m_SelectedIconShape; // 0x18
}; // size = 0x20

#endif // FBGEN_PamUIMapIconData_H
