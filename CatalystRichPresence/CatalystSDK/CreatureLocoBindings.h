//
// Generated with FrostbiteGen by Chod
// File: SDK\CreatureLocoBindings.h
// Created: Wed Mar 10 19:07:29 2021
//

#ifndef FBGEN_CreatureLocoBindings_H
#define FBGEN_CreatureLocoBindings_H

#include "CreatureCommonBinding.h"
#include "CreatureMiscBinding.h"
#include "CreatureIdleBinding.h"
#include "CreatureLocoBinding.h"
#include "CreatureStartBinding.h"
#include "CreatureStopBinding.h"
#include "CreatureTurnBinding.h"
#include "AntRef.h"
#include "CreaturePlayAnimationBinding.h"
#include "DataContainerPolicyAsset.h"

class CreatureLocoBindings :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BBB80;
	}
	CreatureCommonBinding m_CommonBinding; // 0x18
	CreatureMiscBinding m_MiscBinding; // 0x60
	CreatureIdleBinding m_IdleBinding; // 0x13c
	CreatureLocoBinding m_LocoBinding; // 0x18c
	AntRef m_LocoContextDatabase; // 0x1c8
	CreatureStartBinding m_StartBinding; // 0x1dc
	AntRef m_StartContextDatabase; // 0x240
	CreatureStopBinding m_StopBinding; // 0x254
	AntRef m_StopContextDatabase; // 0x2b8
	CreatureTurnBinding m_TurnBinding; // 0x2cc
	AntRef m_TurnContextDatabase; // 0x31c
	AntRef m_AccelContextDatabase; // 0x330
	CreaturePlayAnimationBinding m_PlayAnimationBinding; // 0x344
}; // size = 0x3a8

#endif // FBGEN_CreatureLocoBindings_H
