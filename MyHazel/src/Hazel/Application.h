#pragma once

#include "Core.h"
namespace Hazel
{
	// Application is an abstract class
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();//�麯��

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();


}
