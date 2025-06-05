#include <Geode/modify/AppController.hpp>

using namespace geode::prelude;

class $modify(MyAppController, AppController) {
	void promptForRate() {
		if (!Mod::get()->getSettingValue<bool>("enabled")) AppController::promptForRate();
	}
};