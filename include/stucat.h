#ifndef STUCAT_H_
#define STUCAT_H_

int checker(int fd, char *buffer);
int printer(char *arg, int opt);
int stu_strlen(const char *str);
void print_err(char *prog_name, char *file_name);
int option(int argc, char **argv);
int has_opt (char *av, char opt);
int helper();
char *reader(char *av);
int hasopt(const char *str, char subject);
int option_e(char *ptr, char *buffer, int size_read);
int option_t(char *ptr, char *buffer, int size_read);
int option_et(char *ptr, char *buffer, int size_read);
#endif
