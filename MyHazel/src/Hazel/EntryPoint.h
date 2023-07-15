#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();//返回一个Application对象的指针

int main(int argc, char** argv)
{
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}


#endif 
