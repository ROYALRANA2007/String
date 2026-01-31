#include <stdio.h>
#include <string.h>
int countSpaces(char str[])
{
    int i, count = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char str[100];
    int spaces;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    spaces = countSpaces(str);
    printf("Number of spaces = %d\n", spaces);
    return 0;
}