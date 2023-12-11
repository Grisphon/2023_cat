#include "stucat.h"

int option_t(char *ptr, char *buffer, int size_read)
{
    while (ptr < buffer + size_read) {
        if (*ptr == '\t') {
            write(1, "^I", 2);
            ptr = ptr + 1;
        } else {
            write(1, ptr, 1);
            ptr = ptr + 1;
        }
    }
    return 0;
}
