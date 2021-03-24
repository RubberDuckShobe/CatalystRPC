//
// Generated with FrostbiteGen by Chod
// File: SDK\UIInputActionDataAsset.h
// Created: Wed Mar 10 18:59:54 2021
//

#ifndef FBGEN_UIInputActionDataAsset_H
#define FBGEN_UIInputActionDataAsset_H

#include "Array.h"
#include "Asset.h"

class UIInputActionDataAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280FA20;
	}
	float m_DefaultRepeatDelaySec; // 0x18
	float m_DefaultRepeatSpeedSec; // 0x1c
	float m_DefaultOneAxisDeadZone; // 0x20
	float m_DefaultTwoAxisDeadZone; // 0x24
	Array<UIInputActionMapData> m_InputActionMaps; // 0x28
	Array<UIAnalogInputMapData> m_AnalogInputMaps; // 0x30
}; // size = 0x38

#endif // FBGEN_UIInputActionDataAsset_H
