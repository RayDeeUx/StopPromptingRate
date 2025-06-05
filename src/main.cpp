#include <Geode/modify/PlatformToolbox.hpp>

using namespace geode::prelude;

class $modify(MyPlatformToolbox, PlatformToolbox) {
	void tryShowRateDialog(gd::string fooBar) {
		if (!Mod::get()->getSettingValue<bool>("enabled")) PlatformToolbox::tryShowRateDialog(fooBar);
	}
};