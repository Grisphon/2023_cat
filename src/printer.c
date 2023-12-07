#include "stucat.h"

int printer(char *file_name, int opt)
{
    char *buffer;
    int size_read;
    int fd;

    if (opt == 1)
        fd = 0;
    fd = 0;
    if (file_name[0] == '-' && file_name[1] != '\0')
        return 0;
    else if (file_name[0] != '-')
        fd = open(file_name, O_RDONLY);
    buffer = malloc(sizeof (char) * 10);
    if (checker(fd, buffer) == 1)
        return 1;
    size_read = read(fd, buffer, 10);
    while (size_read != 0) {
        if (size_read == -1)
            return 1;
        write(1, buffer, size_read);
        size_read = read(fd, buffer, 10);
    }
    free(buffer);
    return 0;
}
