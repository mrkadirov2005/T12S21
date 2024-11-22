#include "print_module.h"

#include <stdio.h>
#include <time.h>

void print_log(void (*print)(char*), const char* message) {
    // Get the current time
    time_t raw_time;
    struct tm* time_info;
    char time_buffer[9];  // HH:MM:SS format

    time(&raw_time);
    time_info = localtime(&raw_time);

    // Format the current time into HH:MM:SS
    strftime(time_buffer, sizeof(time_buffer), "%H:%M:%S", time_info);

    // Print the log with current time
    print("[LOG] ");
    print(time_buffer);
    print(" ");
    print((char*)message);  // Cast to char* for compatibility
    print("\n");
}

void print_char(char* str) {
    fputs(str, stdout);  // Print the string to standard output
}
