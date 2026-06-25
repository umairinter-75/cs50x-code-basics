#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Check for error usage, else, get filename length
    if (argc != 2)
    {
        printf("Wrong usage: Try ./create [filename]\n");
        return 1;
    }

    int filename_length = strlen(argv[1]);

    // Create a new block of memory to store filename
    char *filename = malloc(sizeof(char) * (filename_length + 1));

    // Check if malloc failed
    if (filename == NULL)
    {
        printf("Malloc failed.\n");
        return 1;
    }

    // Copy argv[1] into block of memory for filename
    sprintf(filename, "%s", argv[1]);

    // Open new file under the name of stored at filename
    FILE *new_file = fopen(filename, "w");

    // Check if open failed
    if (new_file == NULL)
    {
        printf("Could not create the file.\n");
        return 1;
    }

    free(filename);
    fclose(new_file);
}
