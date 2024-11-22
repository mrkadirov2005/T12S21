CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11

# Define the object files for Quest 1 and Quest 2
OBJ_FILES_1 = main_module_entry_point.o print_module.o documentation_module.o
OBJ_FILES_2 = main_module_entry_point.o print_module.o documentation_module.o

# Define the object files for Quest 3
OBJ_FILES_3 = bst.o bst_create_test.o

# Define the output executables
OUTPUT_1 = ../build/Quest_1
OUTPUT_2 = ../build/Quest_2
OUTPUT_3 = ../build/Quest_3

# Targets
all: $(OUTPUT_1) $(OUTPUT_2) $(OUTPUT_3)

$(OUTPUT_1): $(OBJ_FILES_1)
	$(CC) $(CFLAGS) -o $(OUTPUT_1) $(OBJ_FILES_1)

$(OUTPUT_2): $(OBJ_FILES_2)
	$(CC) $(CFLAGS) -o $(OUTPUT_2) $(OBJ_FILES_2)

$(OUTPUT_3): $(OBJ_FILES_3)
	$(CC) $(CFLAGS) -o $(OUTPUT_3) $(OBJ_FILES_3)

main_module_entry_point.o: main_module_entry_point.c print_module.h documentation_module.h
	$(CC) $(CFLAGS) -c main_module_entry_point.c -o main_module_entry_point.o

print_module.o: print_module.c print_module.h
	$(CC) $(CFLAGS) -c print_module.c -o print_module.o

documentation_module.o: documentation_module.c documentation_module.h
	$(CC) $(CFLAGS) -c documentation_module.c -o documentation_module.o

# Quest 3 Object File Compilation
bst.o: bst.c bst.h
	$(CC) $(CFLAGS) -c bst.c -o bst.o

bst_create_test.o: bst_create_test.c bst.h
	$(CC) $(CFLAGS) -c bst_create_test.c -o bst_create_test.o

clean:
	rm -f $(OBJ_FILES_1) $(OBJ_FILES_2) $(OBJ_FILES_3) $(OUTPUT_1) $(OUTPUT_2) $(OUTPUT_3)

.PHONY: all clean
