#ifndef PRINT_MODULE_H
#define PRINT_MODULE_H

#include <stdio.h>

void print_log(void (*print)(char*), const char* message);
void print_char(char* str);  // Updated to accept char* (string)

#endif  // PRINT_MODULE_H
