#include <Geode/modify/PlatformToolbox.hpp>

using namespace geode::prelude;

class $modify(MyAppController, AppController) {
	void tryShowRateDialog(gd::string fooBar) {
		if (!Mod::get()->getSettingValue<bool>("enabled")) PlatformToolbox::tryShowRateDialog(fooBar);
	}
};