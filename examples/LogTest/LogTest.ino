#include <log.h>

void setup() {
    Serial.begin(115200);
    LOG_PRINTF(LOG_DEBUG,"Number %d\n", 1);
    LOG_PRINT_DATA(LOG_INFO, "Test example\n");
    LOG_PRINT(LOG_WARNING, "Good bye");
}

void loop() {

}