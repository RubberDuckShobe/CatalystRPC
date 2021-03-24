//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformPropertyTrackData.h
// Created: Wed Mar 10 19:00:07 2021
//

#ifndef FBGEN_TransformPropertyTrackData_H
#define FBGEN_TransformPropertyTrackData_H

#include "Array.h"
#include "SimplePropertyTrackData.h"

class TransformPropertyTrackData :
	public SimplePropertyTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA440;
	}
	Array<LinearTransform> m_Values; // 0x28
}; // size = 0x30

#endif // FBGEN_TransformPropertyTrackData_H
