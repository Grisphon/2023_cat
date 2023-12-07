#include "stucat.h"

char *strdupcat(char *str1, char *str2)
{
    char *final_str;
    int size;
    int count;

    if (str1 == NULL) {
        str1 = "";
    }
    count = 0;
    size = stu_strlen(str1) + stu_strlen(str2);
    final_str = malloc(sizeof(char) * size + 1);
    if (!final_str)
        return NULL;
    while (count < (int)stu_strlen(str1)) {
        final_str[count] = str1[count];
        count = count + 1;
    }
    while (count < size) {
        final_str[count] = str2[count - stu_strlen(str1)];
        count = count + 1;
    }
    final_str[count] = '\0';
    return final_str;
}

char *reader(char *av)
{
    int fd;
    char *buffer;
    int size_read;
    char *full_file;
    char *freeable;

    full_file = NULL;
    fd = open(av, O_RDONLY);
    buffer = malloc(sizeof (char) * 101);
    size_read = read(fd, buffer, 100);
    while (size_read > 0) {
        buffer[size_read] = '\0';
        freeable = full_file;
        full_file = strdupcat(full_file, buffer);
        free(freeable);
        size_read = read(fd, buffer, 100);
    }
    close(fd);
    free(buffer);
    return full_file;
}
