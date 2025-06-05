#include <Geode/modify/AppController.hpp>

using namespace geode::prelude;

class $modify(MyAppController, AppController) {
	void promptForRating() {
		if (!Mod::get()->getSettingValue<bool>("enabled")) AppController::promptForRating();
	}
};