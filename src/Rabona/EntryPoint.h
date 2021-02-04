#pragma once

#ifdef RB_PLATFORM_WINDOWS

extern Rabona::Application* Rabona::CreateApplication();
int main(int argc, char** argv)
{
	printf("RAbona Engine");
	auto app = Rabona::CreateApplication();
	app->Run();
	delete app;
}
#endif