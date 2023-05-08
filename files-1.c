#include <stdio.h>
/*
FILE HANDLING
1. strem-oriented data files-the data is stored in the same manner as it appears on the screen
2. system-oriented data files-the data files are more closely associated with the os

FILE OPERATIONS
1. creation of a new file
2. opening a file
3. reading a file
4. writing data in a file
5. closing a file

STEPS FOR PROCESSING A FILE
1. declare a file pointer variable
2. open a file using fopen() function
3.process the file using the suitable function
4.close the file using the fclose() function
example:
FILE *fopen(const char *filePath, const char *mode);

FUNCTION AVAILABLE TO USE WHEN PROCESSING A FILE
fopen(), fclose(), getc(), putc(), getw(),putw(),fprintf(),fscanf(), fgets(),
fputs(),feof()
*/

int main(void)
{
    FILE *file;
    file = fopen("file.txt", "w");

    // file processing
    fprintf(file, "%s", "Hello Word");
    // end of file processing

    fclose(file);
    return (0);
}