#include <stdio.h>

int main(void)
{
    int i;
    FILE *file_handler, *file_reading;
    /*
    if io.txt does not exist it creates the file
    'w' =>mode deletes everything that is in the io.txt file and writes what its given
    'a'=> does not delete what is already there-it just appends
    'r'=> reading mode
    */
    file_handler = fopen("io.txt", "w");
    // fputs("A string\n", file_handler);

    // int data = 10;
    // fprintf(file_handler, "Data: %d\n", data);

    for (i = 1; i < 10; i++)
        fprintf(file_handler, "%d\n", i);

    fclose(file_handler);

    file_reading = fopen("io.txt", "r");
    int input = 0;
    int lines = 0;
    int numbers[100];

    while (fscanf(file_reading, "%d", &input) != EOF)
    {
        numbers[lines] = input;
        lines++;
    }
    fclose(file_reading);

    FILE *new_file;

    new_file = fopen("in.txt", "r");
    // this is a charater array that can hold 256 charaters
    char buffer[256];
    // buffer-> the array to write input to
    // 256->the size of the buffer
    // new_file->the file handler
    fgets(buffer, 256, new_file);
    printf("%s\n", buffer);
    fclose(new_file);
    return (0);
}