#include <stdio.h>

#include "documentation_module.h"
#include "print_module.h"

// Dummy validation function for checking document availability (example)
int validate(char* data) {
    // Example validation: return 1 if the document is "Binary Trees", otherwise return 0
    if (data != NULL && strcmp(data, "Binary Trees") == 0) {
        return 1;
    }
    return 0;
}

int main() {
    // Define the document names
    const char* documents[] = {"Linked lists", "Queues", "Maps", "Binary Trees"};

    // Check document availability using check_available_documentation_module
    int* availability = check_available_documentation_module(validate, 4, documents[0], documents[1],
                                                             documents[2], documents[3]);

    // Output the result in a human-readable format
    for (int i = 0; i < 4; ++i) {
        // Print the document name with 15 character width, and its availability status
        printf("%-15s: %s\n", documents[i], availability[i] ? "available" : "unavailable");
    }

    return 0;
}
