#include "stucat.h"

int main(int ac, char **av)
{
    int count;

    count = 1;
    if (ac == 1)
        printer("-\0");
    while (count < ac) {
        printer(av[count]);
        count = count + 1;
    }
    return 0;
}
