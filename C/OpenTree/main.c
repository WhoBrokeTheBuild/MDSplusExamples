#include <treeshr.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    int result;
    char * experiment = "example";
    int shot = -1;

    if (argc >= 2) {
        experiment = argv[1];
    }

    if (argc >= 3) {
        shot = atoi(argv[2]);
    }

    result = TreeOpen(experiment, shot, 0);
    if (IS_NOT_OK(result)) {
        fprintf(stderr, "Failed to open %s shot %d\n", experiment, shot);
        return result;
    }

    printf("Successfully opened %s shot %d\n", experiment, shot);

    // Analysis code here

    TreeClose(experiment, shot);

    return 0;
}