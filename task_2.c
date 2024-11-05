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
            return 0; 
        }
        
    }

    // printf("%i\n", check_1);
    // printf("%i\n", check_2);
    if(check_1 == 0 && check_2 == 0) //checks if all of the brackets are closed
    {
        printf("yes\n");
    }
    else 
    {
        printf("no\n");
    }
}