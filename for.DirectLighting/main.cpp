#include "for_DirectLightingApp.h"

int main() {
	
	// allocation
	auto app = new for_DirectLightingApp();

	// initialise and loop
	app->run("AIE", 1280, 720, false);

	// deallocation
	delete app;

	return 0;
}