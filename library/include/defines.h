#if defined(_WIN32) || defined(_WIN64)
  #ifdef CURVELIBRARY_EXPORTS
    #define CURVELIBRARY_API __declspec(dllexport)
  #else
    #define CURVELIBRARY_API __declspec(dllimport)
  #endif
#else
  #ifdef CURVELIBRARY_EXPORTS
    #define CURVELIBRARY_API __attribute__((visibility("default")))
  #else
    #define CURVELIBRARY_API
  #endif
#endif