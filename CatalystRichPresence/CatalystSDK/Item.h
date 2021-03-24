//
// Generated with FrostbiteGen by Chod
// File: SDK\Item.h
// Created: Wed Mar 10 19:06:25 2021
//

#ifndef FBGEN_Item_H
#define FBGEN_Item_H

#include "Part.h"

class Item :
	public Part // size = 0xb8
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B3E00;
	}
	unsigned char _0xb8[0x188];
}; // size = 0x240

#endif // FBGEN_Item_H
