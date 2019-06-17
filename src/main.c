#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/vol.h"


void print_usage()
{
    printf("Usage:\n");
    printf("  To set volume: vol set <volume>\n");
    printf("  To get volume: vol get\n");
}

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        print_usage(); 
        return 1;
    }

    if (strcmp(argv[1], "set") == 0)
    {
        if (argc < 3)
        {
            print_usage();
            return 1;
        }

        set_volume(atoi(argv[2]));
    }
    else
    if (strcmp(argv[1], "get") != 0)
    {
        printf("Unknown option `%s`\n", argv[1]);
        return 1;
    }
    
    printf("%0.6f\n", get_volume());

    return 0;
}
