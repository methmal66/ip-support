#include <stdio.h>
#include <string.h>

void reverse_string(char[], char[]);

int main(int argc, char const *argv[])
{
    char text[] = "Hello world!";
    char reversed[100];
    reverse_string(text, reversed);
    printf("reversed of %s is %s\n", text, reversed);
}

void reverse_string(char line[], char answer[])
{
    short len = strlen(line);
    for (int i = 0; i < len; i++)
        answer[i] = line[len - 1 - i];
}
