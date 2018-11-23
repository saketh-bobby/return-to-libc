#include <stdlib.h>
#include <stdio.h>

int bof(FILE *badfile)
{
    char buffer[7];

    fread(buffer, sizeof(char), 23, badfile);

    return 1;
}

int main(int argc, char **argv)
{
    FILE *badfile;

    badfile = fopen("badfile", "r");
    bof(badfile);

    printf("Returned Properly\n");

    fclose(badfile);
    return 1;
}

