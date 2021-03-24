//
// Generated with FrostbiteGen by Chod
// File: SDK\LogicalExpressionNodeData.h
// Created: Wed Mar 10 19:06:06 2021
//

#ifndef FBGEN_LogicalExpressionNodeData_H
#define FBGEN_LogicalExpressionNodeData_H

#include "Array.h"
#include "AudioGraphNodePort.h"
#include "LogicalExpressionOperator.h"
#include "AudioGraphNodeData.h"

class LogicalExpressionNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2B70;
	}
	AudioGraphNodePort m_Reset; // 0x10
	Array<LogicalExpressionEntry*> m_Inputs; // 0x18
	AudioGraphNodePort m_Trigger; // 0x20
	LogicalExpressionOperator m_Operator; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_LogicalExpressionNodeData_H
