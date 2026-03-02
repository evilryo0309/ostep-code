#include <stdio.h>
#include <stdlib.h>
#include "common.h"

/// @brief This program prints a string to the console every second, simulating CPU work by spinning for 1 second after each print.
/// @param argc The number of command-line arguments. Should be 2 (the program name and the string to print).
/// @param argv The array of command-line arguments.
/// @return Returns 0 on success, or 1 if the usage is incorrect.
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "usage: cpu <string>\n");
        exit(1);
    }
    char *str = argv[1];

    while (1)
    {
        printf("%s\n", str);
        Spin(1);
    }
    return 0;
}
