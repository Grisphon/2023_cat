#include "stucat.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int only_opt(int ac, char **av)
{
    int count;

    count = 0;
    while (count < ac) {
        if (av[count][0] != '-')
            return 1;
    }
    return 0;
}

int main(int ac, char **av)
{
    int count;
    int error;
    int had_err;
    int opt;

    opt = option(ac, av);
    had_err = 0;
    error = 0;
    count = 1;
    if (ac == 1 || only_opt(ac, av))
        printer("-\0", opt);
    if (opt == 1)
        return 0;
    while (count < ac) {
        error = printer(av[count], opt);
        if (error == 1)
            print_err(av[0], av[count]);
        count = count + 1;
        if (had_err == 0 && error == 1)
            had_err = 1;
    }
    return had_err;
}

