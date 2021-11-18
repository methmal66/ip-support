#include <stdio.h>
#include <string.h>

int is_containing_case(char[], int min, int max);
int is_containing_special(char[]);

int main(int argc, char const *argv[])
{
    char password[128];
    printf("Enter your password : ");
    scanf("%s", password);

    int has_minimum_length = strlen(password) >= 10;
    int has_lower_letter = is_containing_case(password, 97, 122);
    int has_upper_letter = is_containing_case(password, 65, 90);
    int has_number = is_containing_case(password, 48, 57);
    int has_special_character = is_containing_special(password);
    if (has_minimum_length && has_lower_letter && has_upper_letter && has_number && has_special_character)
        printf("Your password is valid\n");
    else
        printf("Your password is invalid!\n");
    return 0;
}

int is_containing_case(char passwd[], int min, int max)
{
    for (int i = 0; i < strlen(passwd); i++)
    {
        int letter = passwd[i];
        if (letter >= min && letter <= max)
            return 1;
    }
    return 0;
}

int is_containing_special(char passwd[])
{
    char special[] = {'@', '&', '$'};
    int len = strlen(passwd);
    for (int i = 0; i < len; i++)
    {
        int letter = passwd[i];
        for (int j = 0; j < 3; j++)
            if (letter == special[j])
                return 1;
    }
    return 0;
}
