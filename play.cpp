#include <stdlib.h>
#include <stdio.h>

int main()
{
    char filename[] = "../11.cpp";
    char *path = realpath(filename, NULL);

    if (path == NULL)
    {
        printf("cannot find file with name[%s]\n", filename);
    }
    else
    {
        printf("path[%s]\n", path);
        free(path);
    }
}