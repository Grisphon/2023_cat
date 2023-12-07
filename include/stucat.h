#ifndef STUCAT_H_
#define STUCAT_H_

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int checker(int fd, char *buffer);
int printer(char *arg, int opt);
int stu_strlen(const char *str);
void print_err(char *prog_name, char *file_name);
int option(int argc, char **argv);
int has_opt (char *av, char opt);
int helper();
char *reader(char *av);
int hasopt(const char *str, char subject);
#endif
