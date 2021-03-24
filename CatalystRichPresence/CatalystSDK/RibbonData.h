//
// Generated with FrostbiteGen by Chod
// File: SDK\RibbonData.h
// Created: Wed Mar 10 19:02:36 2021
//

#ifndef FBGEN_RibbonData_H
#define FBGEN_RibbonData_H

#include "Array.h"
#include "VisualVectorShapeData.h"

class RibbonData :
	public VisualVectorShapeData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283A9F0;
	}
	Array<RibbonPointData> m_RibbonPoints; // 0x40
}; // size = 0x48

#endif // FBGEN_RibbonData_H
