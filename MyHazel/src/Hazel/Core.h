#pragma once

#ifdef HZ_PLATFORM_WINDOWS
/*如果是windows平台，导出dll，否则导入dll
*/
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif
#else
	#error Hazel only supports Windows!
	
#endif