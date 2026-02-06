#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

void sum_of_digits(char str[])
{
    int sum = 0, i;
    for (i = 0; str[i] != '\0'; i++)

    {
        if (isdigit(str[i]))
        {
            sum = sum + str[i] - '0';
        }
    }
    cout << sum<<endl;
}

int main()

{
    char str[100];
    cout << "Enter the statement: ";
    cin.getline(str, 100);


    sum_of_digits(str);
    return 0;
}
