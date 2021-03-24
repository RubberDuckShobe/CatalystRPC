//
// Generated with FrostbiteGen by Chod
// File: SDK\PersistenceData.h
// Created: Wed Mar 10 19:03:13 2021
//

#ifndef FBGEN_PersistenceData_H
#define FBGEN_PersistenceData_H

#include "PersistenceStatGroup.h"
#include "PersistenceRetentionPolicy.h"
#include "Array.h"
#include "AbstractPersistenceData.h"

class PersistenceData :
	public AbstractPersistenceData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809D10;
	}
	const char* m_PersistenceName; // 0x18
	Array<PersistentValueTemplateData> m_Values; // 0x20
	PersistenceStatGroup* m_ServerDefaultGroup; // 0x28
	PersistenceStatGroup* m_ClientDefaultGroup; // 0x30
	PersistenceRetentionPolicy* m_RetentionPolicy; // 0x38
	Array<PersistenceConsumableMapping> m_ConsumableMappings; // 0x40
	bool m_DeltaGameReports; // 0x48
	bool m_HistoryDaily; // 0x49
	bool m_HistoryWeekly; // 0x4a
	bool m_HistoryMonthly; // 0x4b
	bool m_OutputProperties; // 0x4c
	unsigned char _0x4d[0x3];
}; // size = 0x50

#endif // FBGEN_PersistenceData_H
