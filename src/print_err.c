#include "stucat.h"

void print_err(char *prog_name, char *file_name)
{
    write(1, prog_name, stu_strlen(prog_name));
    write(1, ": ", 2);
    write(1, file_name, stu_strlen(file_name));
    write(1, ": Cannot process file\n", 22);
}
