#include <nn/hid.h>
extern "C"{
int GetNativeFSCacheSize () {
	return 32;
}
bool InitializeTouchScreen () {
	nn::hid::InitializeTouchScreen(); return true;
}
int GetSwitchSupportedNpadStyle () {
	return 3;
}
int GetSwitchSupportedNpadCount () {
	return 8;
}
bool IsJoyConHorizontalByDefault () {
	return false;
}
}
