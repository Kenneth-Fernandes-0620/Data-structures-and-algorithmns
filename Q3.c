#include <stdio.h>

/**
 * 1 D Char array
Write a C program using functions and pointers for the following
1. Read and display a string
2. Without using string builtin functions, calculate the string length
3. Without using string builtin functions, reverse the string
4. Without using string builtin functions, copy one string into other
5. Read a string and check whether the given character is present or not. If present, count the number of times, it is repeated
*/

int strlength(char *);

void string_copy(char *str)
{
    int size = strlength(str);
    char str2[size];
    for (int i = 0; str[i] != '\0'; ++i)
    {
        str2[i] = str[i];
    }
    printf("Copied String is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%c", str2[i]);
    }
}

int strlength(char *str)
{
    int size = 0;
    while (*(str + size) != '\0')
        size++;
    return size;
}

void print_reverse_string(char *str)
{
    int size = strlength(str);
    while (size >= 0)
    {
        printf("%c", *(str + size));
        size--;
    }
    printf("\n");
}

int countOccurences(char *str, char x)
{
    int size = strlength(str), count = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(str + i) == x)
            count++;
    }
    return count;
}

int main()
{
    char arr[100];
    printf("Enter the String: ");
    fgets(arr, sizeof arr, stdin);
    printf("String is: ");
    puts(arr);
    printf("String length is: %d\n", strlength(arr));
    printf("String in Reverse is: ");
    print_reverse_string(arr);
    string_copy(arr);
    int occurences = countOccurences(arr, 'l');
    if (occurences == 0)
        printf("String does not contain character\n");
    else
        printf("Number of times the char occured in the string is: %d\n", occurences);
}