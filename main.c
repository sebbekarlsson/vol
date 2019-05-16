#include <stdio.h>
#include <stdlib.h>
#include "include/vol.h"


int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Usage: vol <volume>\n");
        return 1;
    }

    set_volume(atoi(argv[1]));
    printf("%0.6f\n", get_volume());

    return 0;
}
