#include "stucat.h"

int printer(char *file_name)
{
    char *buffer;
    int size_read;
    int fd;

    if (file_name[0] == '-' && file_name[1] == '\0')
        fd = 1;
    else
        fd = open(file_name, O_RDONLY);
    buffer = malloc(sizeof (char) * 10);
    size_read = read(fd, buffer, 10);
    while (size_read != 0) {
        write(1, buffer, size_read);
        size_read = read(fd, buffer, 10);
    }
    free(buffer);
    return 1;
}
