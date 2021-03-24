//
// Generated with FrostbiteGen by Chod
// File: SDK\BillboardTransformEntityData.h
// Created: Wed Mar 10 19:08:30 2021
//

#ifndef FBGEN_BillboardTransformEntityData_H
#define FBGEN_BillboardTransformEntityData_H

#include "LinearTransform.h"
#include "Realm.h"
#include "BillboardTransformRotationAxis.h"
#include "SpatialEntityData.h"

class BillboardTransformEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A310;
	}
	LinearTransform m_In; // 0x60
	Realm m_Realm; // 0xa0
	BillboardTransformRotationAxis m_RotationAxis; // 0xa4
	bool m_IgnoreTranslation; // 0xa8
	unsigned char _0xa9[0x7];
}; // size = 0xb0

#endif // FBGEN_BillboardTransformEntityData_H
