#ifndef DOCUMENTATION_MODULE_H
#define DOCUMENTATION_MODULE_H

#include <stdio.h>
#include <string.h>

#define Documents "Linked lists", "Queues", "Maps", "Binary Trees"
#define Available_document "Binary Trees"
#define Documents_count 4  // Define the number of documents (based on the list)

int* check_available_documentation_module(int (*validate)(char*), int document_count, ...);
int validate(char* data);

#endif  // DOCUMENTATION_MODULE_H
