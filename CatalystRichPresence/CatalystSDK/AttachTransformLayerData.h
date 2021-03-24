//
// Generated with FrostbiteGen by Chod
// File: SDK\AttachTransformLayerData.h
// Created: Wed Mar 10 19:08:38 2021
//

#ifndef FBGEN_AttachTransformLayerData_H
#define FBGEN_AttachTransformLayerData_H

#include "LinearTransform.h"
#include "GameObjectData.h"
#include "Array.h"
#include "TransformLayerData.h"

class AttachTransformLayerData :
	public TransformLayerData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142824300;
	}
	unsigned char _0x38[0x8];
	LinearTransform m_AttachOffset; // 0x40
	GameObjectData* m_AttachEntity; // 0x80
	const char* m_ChildBoneName; // 0x88
	const char* m_ParentBoneName; // 0x90
	Array<Guid> m_AttachEntityGuidChain; // 0x98
	bool m_AlignAxisX; // 0xa0
	bool m_AlignAxisY; // 0xa1
	bool m_AlignAxisZ; // 0xa2
	unsigned char _0xa3[0xd];
}; // size = 0xb0

#endif // FBGEN_AttachTransformLayerData_H
