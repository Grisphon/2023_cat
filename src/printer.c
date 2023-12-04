#include "stucat.h"
#include <stdlib.h>
#include <unistd.h>

int printer()
{
    char *buffer;
    int size_read;

    buffer = malloc(sizeof (char) * 11);
    size_read = read(1, buffer, 10);
    while (size_read != 0) {
        write(1, buffer, size_read);
        size_read = read(1, buffer, 10);
    }
    free(buffer);
    return 1;
}
