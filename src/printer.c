#include "stucat.h"

int chooser(int size_read, char *buffer, int fd, int opt)
{
    char *ptr;

    while (size_read != 0) {
        if (size_read == -1)
            return 1;
        ptr = buffer;
        if (opt%100 > 9 && opt > 99)
            option_et(ptr, buffer, size_read);
        else if (opt%100 > 9)
            option_e(ptr, buffer, size_read);
        else if (opt > 99) {
            option_t(ptr, buffer, size_read);
        }
        else
            write(1, buffer, size_read);
        size_read = read(fd, buffer, 10);
    }
    return 0;
}

int printer(char *file_name, int opt)
{
    char *buffer;
    int size_read;
    int fd;

    fd = 0;
    if (file_name[0] == '-' && file_name[1] != '\0')
        return 0;
    else if (file_name[0] != '-')
        fd = open(file_name, O_RDONLY);
    buffer = malloc(sizeof (char) * 10);
    if (checker(fd, buffer) == 1)
        return 1;
    size_read = read(fd, buffer, 10);
    if (chooser(size_read, buffer, fd, opt) == 1)
        return 1;
    free(buffer);
    return 0;
}
