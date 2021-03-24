#pragma once
#include "discord-game-sdk/discord.h"
#include "DistrictUtils.h"

class PresenceManager {
public:
	District lastDistrict;
	const char* lastMission;
	District currentDistrict;
	const char* currentMission;
	bool lastLoading;
	bool isLoading;

	discord::Core* core{};
	discord::User currentUser;

	PresenceManager();
	~PresenceManager();
	void UpdatePresence();
	void RunCallbacks();

private:
	
};