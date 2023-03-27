#include <stdio.h>
#include <string.h>

void substring_search(){
char str[] = "The quick brown fox jumps over the lazy dog";
    char *result = strstr(str, "brown");
    if (result != NULL) {
        printf("Substring found at index %ld\n", result - str);
        int size = strlen("brown");
        printf("%.*s\n", size, result);
    } else {
        printf("Substring not found\n");
    }
}

int string_len() {
    char str[] = "Hello, world!";
    int len = strlen(str);
    printf("Length of the string is %d", len);
    return len;
}

void string_copying() {
    char str1[] = "Hello, world!";
    char str2[50];
    strcpy(str2, str1);
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
}

void string_concat(){
    char str1[50] = "Hello, ";
    char str2[] = "world!";
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

int string_comparison() {
    char str1[] = "Hello, world!";
    char str2[] = "Hello, world!";
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }
}

int main() {
    string_comparison();
    return 0;
}