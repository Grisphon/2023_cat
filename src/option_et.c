#include "stucat.h"

int option_et(char *ptr, char *buffer, int size_read)
{
    while (ptr < buffer + size_read) {
        if (*ptr == '\n') {
            write(1, "$", 1);
            write(1, ptr, 1);
        } else if (*ptr == '\t') {
            write(1, "^I", 2);
            ptr = ptr + 1;
        } else
            write(1, ptr, 1);
        ptr = ptr + 1;
    }
    return 0;

}
