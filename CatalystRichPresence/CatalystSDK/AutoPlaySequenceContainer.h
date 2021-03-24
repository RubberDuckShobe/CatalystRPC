//
// Generated with FrostbiteGen by Chod
// File: SDK\AutoPlaySequenceContainer.h
// Created: Wed Mar 10 19:08:34 2021
//

#ifndef FBGEN_AutoPlaySequenceContainer_H
#define FBGEN_AutoPlaySequenceContainer_H

#include "Array.h"
#include "Asset.h"

class AutoPlaySequenceContainer :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BFC10;
	}
	Array<AutoPlaySequence> m_Sequences; // 0x18
}; // size = 0x20

#endif // FBGEN_AutoPlaySequenceContainer_H
