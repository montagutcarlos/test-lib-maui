#include "HolaMundo.h"

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "HolaMundo", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "HolaMundo", __VA_ARGS__))

extern "C" {
	/* Esta función trivial devuelve la plataforma ABI para la que se ha compilado esta biblioteca dinámica nativa.*/
	const char * HolaMundo::getPlatformABI()
	{
	#if defined(__arm__)
	#if defined(__ARM_ARCH_7A__)
	#if defined(__ARM_NEON__)
		#define ABI "armeabi-v7a/NEON"
	#else
		#define ABI "armeabi-v7a"
	#endif
	#else
		#define ABI "armeabi"
	#endif
	#elif defined(__i386__)
		#define ABI "x86"
	#else
		#define ABI "unknown"
	#endif
		LOGI("This dynamic shared library is compiled with ABI: %s", ABI);
		return "This native library is compiled with ABI: %s" ABI ".";
	}

	int HolaMundo::ObtenerNumero()
	{
		return 666;
	}

	void HolaMundo()
	{
	}

	HolaMundo::HolaMundo()
	{
	}

	HolaMundo::~HolaMundo()
	{
	}


}
