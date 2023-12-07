#include "stucat.h"
#include "errno.h"
#include "string.h"

void print_err(char *prog_name, char *file_name)
{
    char *error;

    error = strerror(errno);
    write(1, prog_name, stu_strlen(prog_name));
    write(1, ": ", 2);
    write(1, file_name, stu_strlen(file_name));
    write(1, ": ", 2);
    write(1, error, stu_strlen(error));
    write(1, "\n", 1);
}
