#ifndef __LOG_H__
#define __LOG_H__
#include <stdint.h>

#define LOG_NONE 0
#define LOG_ERROR 1
#define LOG_WARNING 2
#define LOG_INFO 3
#define LOG_DEBUG 4

uint8_t log_level = LOG_DEBUG;
const char *logMessage[] = {"LOG_NONE", "LOG_ERROR", "LOG_WARNING", "LOG_INFO", "LOG_DEBUG"};

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#define LOG_PRINTF(log_lev, fmt, ...) \
        do { if ((log_lev) <= (log_level)) Serial.printf("%s::%s:%d:%s(): " fmt, logMessage[log_lev], __FILENAME__, \
                                __LINE__, __FUNCTION__, __VA_ARGS__); } while (0)

#define LOG_PRINT(log_lev, fmt) \
        do { if ((log_lev) <= (log_level)) Serial.printf("%s::%s:%d:%s(): " fmt, logMessage[log_lev], __FILENAME__, \
                                __LINE__, __FUNCTION__); } while (0)

#define LOG_PRINTLN(log_lev, fmt) \
        do { if ((log_lev) <= (log_level)) Serial.printf("%s::%s:%d:%s(): " fmt "\n", logMessage[log_lev], __FILENAME__, \
                                __LINE__, __FUNCTION__); } while (0)

#define LOG_PRINT_DATA(log_lev, _data) \
        do { if ((log_lev) <= (log_level)) Serial.print(_data); } while (0)


#endif