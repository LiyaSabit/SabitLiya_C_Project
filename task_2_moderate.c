// SabitLiya_C_Project

#include <stdio.h>
#include <string.h>

int main(void)
{
    int check_1 = 0, check_2 = 0;
    char sequence[100];
    scanf("%99s", sequence); // taking input (brackets)
    for (int i = 0, n = strlen(sequence); i < n; i++) // run through the each char/bracket
    {   
        if (sequence[0] == '[' || sequence[0] == '(') //checks is the first bracket opened or not
        {
            if (sequence[i] == '[')
            {
                check_1++; //opening the first type of brackets 
            }
            if (sequence[i] == '(')
            {
                check_2++; //opening the second type of brackets
            }
            if (sequence[i] == ']')
            {
                check_1--; //closing the first type of brackets 
            }
            if (sequence[i] == ')')
            {
                check_2--; //closing the second type of brackets 
            }
        }
        else
        {
            printf("no\n");
            printf("You need to open brackets first\n");
            return 0; 
        }
        
    }

    // printf("%i\n", check_1);
    // printf("%i\n", check_2);
    printf("Is it correct bracket sequence? ");
    if (check_1 == 0 && check_2 == 0) //checks if all of the brackets are closed
    {
        printf("yes\n");
    }
    else 
    {
        printf("no\n");
        if (check_1 > 0) 
        {
            printf("You need to close %i square bracket(s)\n", check_1);
        }
        if (check_1 < 0)
        {
            printf("You have excess %i square bracket(s)\n", (-1) * check_1);
        }
        if (check_2 > 0)
        {
            printf("You need to close %i round bracket(s)\n", check_2);
        }
        if (check_2 < 0)
        {
            printf("You have excess %i round bracket(s)\n", (-1) * check_2);
        }
    }

}