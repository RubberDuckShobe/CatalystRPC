#include "PresenceManager.h"
#include "discord-game-sdk/discord.h"
#include "DistrictUtils.h"
#include <Windows.h>

//worst fix to ever exist.
namespace DistrictUtils {
	const char* EnumToString(District districtEnum) {
		switch (districtEnum)
		{
		case 0:
			return "Zephyr Transit Hub";
			break;
		case 1:
			return "Triumvirate Drive";
			break;
		case 2:
			return "Centurian Yards";
			break;
		case 3:
			return "Concord Plaza";
			break;
		case 4:
			return "Charter Hill";
			break;
		case 5:
			return "Shimmering Heights";
			break;
		case 6:
			return "Crystal Valley";
			break;
		case 7:
			return "Eden Village";
			break;
		case 8:
			return "Ocean Pier";
			break;
		case 9:
			return "Regatta Bay";
			break;
		case 10:
			return "Development Zone";
			break;
		case 11:
			return "OmniStat Tunnels";
			break;
		case 12:
			return "The Shard";
			break;
		case 13:
			return "City of Glass";
			break;
		default:
			return "Unknown location";
			break;
		}
	}
}

PresenceManager::PresenceManager() {
	lastDistrict = District::Glass;
	lastMission = "None";
	currentDistrict = District::Glass;
	currentMission = "None";
	lastLoading = true;
	isLoading = true;

	auto result = discord::Core::Create(823263505246453790, DiscordCreateFlags_Default, &core);
	core->ActivityManager().RegisterSteam(1233570);
	core->UserManager().OnCurrentUserUpdate.Connect([]() {
		//core->UserManager().GetCurrentUser(&currentUser);
	});
}

PresenceManager::~PresenceManager() {
	//idk man
}

void PresenceManager::UpdatePresence() {
	//FUN FACT: details is above state
	//just writing this down here because i keep forgetting
	const char* state = "";
	const char* details = "Loading";
	const char* largeImage = "main_logo";
	const char* smallImage = "";
	const char* largeImageText = "Mirror's Edge Catalyst";
	const char* smallImageText = "";

	if (isLoading) {
		details = "Loading";
		state = "";
		largeImage = "main_logo";
		smallImage = "";
		largeImageText = "Mirror's Edge Catalyst";
		smallImageText = "";
	}
	else {
		if (currentMission == "None") {
			state = "Free Roam";
		}
		else {
			if (strstr(currentMission, "OWPh") || strstr(currentMission, "Opp")) {
				state = "Opportunity mission";
				smallImage = "opportunity_mission";
			}
			else {
				state = currentMission;
				smallImage = "main_logo";
				smallImageText = "Main/Side mission";
			}
		}

		switch (currentDistrict)
		{
		case 0:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "zephyr_transit_hub";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;
		case 1:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "triumvirate_drive";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;
		case 2:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "centurian_yards";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;
		case 3:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "concord_plaza";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;
		case 4:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "charter_hill";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;
		case 5:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "shimmering_heights";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;
		case 6:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "crystal_valley";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;
		case 7:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "eden_village";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;
		case 8:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "ocean_pier";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;
		case 9:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "regatta_bay";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;
		case 10:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "rezoning";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;
		case 11:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "omnistat_tunnels";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;
		case 12:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "the_shard";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;
		case 13:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "glass";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;

		default:
			details = DistrictUtils::EnumToString(currentDistrict);
			largeImage = "main_logo";
			largeImageText = DistrictUtils::EnumToString(currentDistrict);
			break;
		}
	}

	discord::Activity activity{};
	activity.SetState(state);
	activity.SetDetails(details);
	activity.GetAssets().SetLargeImage(largeImage);
	activity.GetAssets().SetSmallImage(smallImage);
	activity.GetAssets().SetLargeText(largeImageText);
	activity.GetAssets().SetSmallText(smallImageText);
	core->ActivityManager().UpdateActivity(activity, [](discord::Result result) {

	});
}

void PresenceManager::RunCallbacks() {
	core->RunCallbacks();
}