#include <stdio.h>
/*
1 D integer array
Write a C program using functions and pointers for the following
1. Read and display n numbers
2. Read and display odd positioned elements
3. Display the even numbers from the set of integers
4. Display maximum number from the set of integers
5. Calculate the sum and average of n numbers

*/

void questions()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("[%d]: ", i);
        scanf("%d", arr + i);
    }
    printf("\nThe elements of the array are: \n");
    for (int i = 0; i < n; i++)
        printf("Element [%d]: %d\n", i, *(arr + i));

    printf("\nThe elements at odd positions in the array are: \n");
    for (int i = 1; i < n; i += 2)
        printf("Element [%d]: %d\n", i, *(arr + i));

    printf("\nThe even elements of the array are: \n");
    for (int i = 1; i < n; i += 2)
        if (arr[i] % 2 == 0)
            printf("Element [%d]: %d\n", i, *(arr + i));
    int max = find_max(arr, n);
    printf("\nThe maximum number is: %d\n", max);
    int sum = find_sum(arr, n);
    printf("\nThe sum of the numbers is: %d\n", sum);
    printf("\nThe average of the numbers is: %d\n", sum / n);
}

int find_max(int *arr, int size)
{
    if (size <= 0)
        return;
    int max = 0;
    for (int i = 0; i < size; i++)
        if (max < *(arr + i))
            max = *(arr + i);
    return max;
}

int find_sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += *(arr + i);
    return sum;
}

int main()
{
    questions();
    return 0;
}