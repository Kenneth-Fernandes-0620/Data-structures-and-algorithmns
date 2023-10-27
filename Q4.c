#include <stdio.h>
// 2 D Char array
// Write a C program using functions and pointers for the following
// 1. Read and display n names
// 2. Implement bubble sort for n names

int main()
{
    int n;
    printf("How many names do you want to store: ");
    scanf("%d", &n);
    char names[n][50];
    printf("Enter the names: \n");
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        fgets((names[i]), 50, stdin);
    }

    printf("\nNames are: \n");
    for (int i = 0; i < n; i++)
    {
        puts(names[i]);
    }

    return 0;
}