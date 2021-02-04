#pragma once

#include"core.h"
#include<iostream>

namespace Rabona {
	class RABONA_API Application
	{
	public:
		//constructors
		Application();
		virtual ~Application();

		//public functions
	public:
		void Run();
	};

	Application* CreateApplication();
}

