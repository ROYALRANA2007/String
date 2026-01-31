#include <stdio.h>
#include <string.h>
int count_vowels(char str1[])
{
    int count =0;
    for(int i = 0; i < strlen(str1); i++)
    {
        char ch = str1[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            { 
             count++;
            }
    }
    return count;
}
int main()
{
    char str1[50];
    printf("enter any string : ");
    fgets(str1,50,stdin);
    int vowels=count_vowels(str1);
    printf("the total number of vowels is %d ",vowels);
    return 0;
}