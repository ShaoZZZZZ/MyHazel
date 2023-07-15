#pragma once

#include "Core.h"
namespace Hazel
{
	// Application is an abstract class
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();//Ðéº¯Êý

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();


}
