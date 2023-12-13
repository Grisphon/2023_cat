#include "stucat.h"
#include <unistd.h>

int helper()
{
    write(1, "Usage: cat [OPTION]... [FILE]...\n", 33);
    write(1, "Concatenate FILE(s) to standard output.\n", 40);
    write(1, "\n", 1);
    write(1, "With no FILE, or when FILE is -, read standard input.\n", 54);
    write(1, "  -E                  display $ at end of each line\n", 52);
    write(1, "  -T                  display TAB characters as ^I\n", 51);
    write(1, "  -h                  display this help and exit\n", 49);
    return 1;
}
