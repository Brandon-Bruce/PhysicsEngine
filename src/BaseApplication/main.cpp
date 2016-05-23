#include "MyApplication.h"
#include <GLFW/glfw3.h>

int main() {
	
	BaseApplication* app = new MyApplication();
	if (app->startup())
		app->run();
	app->shutdown();

	return 0;
}