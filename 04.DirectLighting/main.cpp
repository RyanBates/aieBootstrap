#include "_04_DirectLightingApp.h"

int main() {
	
	// allocation
	auto app = new _04_DirectLightingApp();

	// initialise and loop
	app->run("AIE", 1280, 720, false);

	// deallocation
	delete app;

	return 0;
}