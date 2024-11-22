#include "documentation_module.h"

#include <stdarg.h>
#include <stdio.h>

// Function that checks the availability of documents
int* check_available_documentation_module(int (*validate)(char*), int document_count, ...) {
    static int result[16] = {0};  // Array to hold availability for up to 16 documents
    va_list args;

    // Start processing variable arguments
    va_start(args, document_count);

    // Iterate over each document
    for (int i = 0; i < document_count; ++i) {
        char* document = va_arg(args, char*);
        result[i] = validate(document);  // Apply the validation function to each document
    }

    // End processing variable arguments
    va_end(args);

    return result;  // Return the array of availability results
}
