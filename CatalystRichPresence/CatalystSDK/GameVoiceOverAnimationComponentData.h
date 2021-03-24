//
// Generated with FrostbiteGen by Chod
// File: SDK\GameVoiceOverAnimationComponentData.h
// Created: Wed Mar 10 19:06:39 2021
//

#ifndef FBGEN_GameVoiceOverAnimationComponentData_H
#define FBGEN_GameVoiceOverAnimationComponentData_H

#include "FaceFlappyMouthBinding.h"
#include "GameComponentData.h"

class GameVoiceOverAnimationComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C420;
	}
	const char* m_FaceFlappyAplitudeParam; // 0x70
	FaceFlappyMouthBinding m_FaceFlappyMouth; // 0x78
}; // size = 0xa0

#endif // FBGEN_GameVoiceOverAnimationComponentData_H
