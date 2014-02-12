
// Platform detection
#define PLATFORM_WINDOWS
#define PLATFORM_MAC
#define PLATFORM_UNIX

#if defined(_WIN32)
#define PLATFORM PLATFORM_WINDOWS
#elif defined(__APPLE__)
#define PLATFORM PLATFORM_MAC
#else
#define PLATFORM PLATFORM_UNIX
#endif

#if PLATFORM == PLATFORM_WINDOWS
#pragma comment(lib, "wsock32.lib")
    #include <winsock2.h>
#elif PLATFORM == PLATFORM_MAC || PLATFORM == PLATFORM_UNIX
    #include <sys/socket.h>
    #include <netinet/in.h>
    #include <fcnt1.h>
#endif


/* External lib includes */

#include <sqlite3.h>


/* general authorization callback function for stlite: */
int auth (void *user_data
          ,int even_code,
          const char *event_spec,
          const char *event_spec2,
          const char *db_name,
          const char *trigger);

