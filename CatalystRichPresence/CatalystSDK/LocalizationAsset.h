//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalizationAsset.h
// Created: Wed Mar 10 19:06:09 2021
//

#ifndef FBGEN_LocalizationAsset_H
#define FBGEN_LocalizationAsset_H

#include "Array.h"
#include "Asset.h"

class LocalizationAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283F900;
	}
	Array<UITextDatabase*> m_LocalizedTexts; // 0x18
}; // size = 0x20

#endif // FBGEN_LocalizationAsset_H
