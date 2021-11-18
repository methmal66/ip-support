#include <stdio.h>

int main()
{
    const int count = 5;
    for (int i = 0; i < 5; i++)
    {
        char name[100];
        printf("Enter your name : ");
        scanf("%s", name);

        long int loyalty_number;
        printf("Enter your loyalty number : ");

        scanf("%li", &loyalty_number);

        FILE *ptr = fopen("loyalty.dat", "r+");
        if (ptr == NULL)
        {
            printf("OI! Cannot access file\n");
            return -1;
        }

        char file_name[100];
        long int file_loyalty_number;
        int user_exist = 0;
        while (fscanf(ptr, "%li %s", &file_loyalty_number, file_name) != EOF /*End Of File*/)
            if (loyalty_number == file_loyalty_number)
                user_exist = 1;

        if (user_exist)
        {
            printf("User already exist. yasai yasai... try again!\n");
            i--;
        }
        else
        {
            fprintf(ptr, "%li %s\n", loyalty_number, name);
            printf("Supiri! New user added to the file!\n");
            fclose(ptr);
        }
    }
}
