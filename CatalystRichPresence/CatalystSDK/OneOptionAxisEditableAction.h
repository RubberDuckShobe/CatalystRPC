//
// Generated with FrostbiteGen by Chod
// File: SDK\OneOptionAxisEditableAction.h
// Created: Wed Mar 10 19:05:29 2021
//

#ifndef FBGEN_OneOptionAxisEditableAction_H
#define FBGEN_OneOptionAxisEditableAction_H

#include "EditableAction.h"

class OneOptionAxisEditableAction :
	public EditableAction // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280FF60;
	}
	const char* m_Header; // 0x18
	bool m_Invert; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_OneOptionAxisEditableAction_H
