//
// Generated with FrostbiteGen by Chod
// File: SDK\InputConfigurationAsset.h
// Created: Wed Mar 10 19:06:29 2021
//

#ifndef FBGEN_InputConfigurationAsset_H
#define FBGEN_InputConfigurationAsset_H

#include "EntryInputActionMapsData.h"
#include "EntryInputActionBindingsData.h"
#include "UIInputActionDataAsset.h"
#include "Array.h"
#include "Asset.h"

class InputConfigurationAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280FF00;
	}
	EntryInputActionMapsData* m_DefaultInputConceptDefinition; // 0x18
	Array<InputConceptIdentifiers> m_DefaultExclusiveInputConcepts; // 0x20
	EntryInputActionBindingsData* m_EntryInputActionBindings; // 0x28
	Array<EditableActionMap> m_UserConfigurableActionMaps; // 0x30
	UIInputActionDataAsset* m_UIInputActions; // 0x38
	int m_TogglePoseAction; // 0x40
	int m_CrouchAction; // 0x44
	int m_CrouchAndHoldAction; // 0x48
	int m_PickupInteractionAction; // 0x4c
	int m_PickupInteractionActionKeyboard; // 0x50
	float m_SprintReleaseTime; // 0x54
	float m_ThrottleInputRequiredForSprint; // 0x58
	float m_VehicleBoostIsToggleMinInput; // 0x5c
	float m_EnterVehicleHoldTime; // 0x60
	unsigned char _0x64[0x4];
	Array<PoseTransition> m_FiringDisablingTransitions; // 0x68
	bool m_ReverseInputConceptExclusion; // 0x70
	bool m_ProneToStandOnJump; // 0x71
	bool m_StandAutomaticallyIfSprinting; // 0x72
	bool m_DisableCrouch; // 0x73
	bool m_DisableProne; // 0x74
	bool m_DisableCrawlingWhileFiring; // 0x75
	bool m_DisableCrawlingWhileReloading; // 0x76
	bool m_DisableFiringWhileDeployingBipod; // 0x77
	bool m_DisableFiringWhileJumping; // 0x78
	bool m_DisableSprintingWhileReloading; // 0x79
	bool m_EnableSprintToCrouchTransition; // 0x7a
	bool m_StopSprintingWhenReleasingThrottle; // 0x7b
	bool m_StopSprintingWhenReleasingSprint; // 0x7c
	bool m_WaitForSprintReleaseBeforeSprintAgain; // 0x7d
	bool m_VehicleBoostIsToggle; // 0x7e
	bool m_InputCurvesEnabled; // 0x7f
}; // size = 0x80

#endif // FBGEN_InputConfigurationAsset_H
