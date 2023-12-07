#include "stucat.h"

int main(int ac, char **av)
{
    int count;
    int error;
    int had_err;

    had_err = 0;
    error = 0;
    count = 1;
    if (ac == 1)
        printer("-\0");
    if (option(ac, av) == 1)
        return 0;
    while (count < ac) {
        error = printer(av[count]);
        if (error == 1)
            print_err(av[0], av[count]);
        count = count + 1;
        if (had_err == 0 && error == 1)
            had_err = 1;
    }
    return had_err;
}
