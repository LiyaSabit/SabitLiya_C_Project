#include <stdio.h>
#include <string.h>

void check_num(int n);
void check_name(const char*  s);
void print_multiples_of_three(int array[], int size);

int main(void)
{
    // the firts part of task_1
    int num; 
    printf("Enter a number: ");
    scanf("%d", &num); 
    check_num(num); 
    
    // the second part of task_1
    char name[100]; 
    printf("Enter a name: ");
    scanf("%s", name); 
    check_name(name);
     
    // the third part of task_1
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n]; 
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]); 
    }
    print_multiples_of_three(array, n);

}   

void check_num(int n)
{
    if (n > 7)
    {
        printf("Hello\n");
    }
}

void check_name(const char* s)
{
    if (strcmp(s, "John") == 0)
    {
        printf("Hello, John\n");
    }
    else
    {
        printf("There is no such name\n");
    }
}

void print_multiples_of_three(int array[], int size) 
{
    for (int j = 0; j < size; j++) 
    {
        if (array[j] % 3 == 0) 
        {
            printf("%d ", array[j]);
        }
    }
    printf("\n");
}