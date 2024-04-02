#include <iostream>
#include <string>
#include <windows.h>
#include <cstring>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    char userString[999];
    char separator = ',';
    string seprated[999];
    cout << "Enter your String:" << '\n';
    cin.getline(userString, 999);
    while (userString[a] != '\0')
    {
        if (userString[a] != separator)
        {
            seprated[b] += userString[a];
        }
        else
        {
            b++;
        }
        a++;
    }
    for (int i = 0; i <= b; i++)
    {
        cout << "index" << i << ":" << seprated[i].length() << " len" << '\n';
    }

    Sleep(3000);
    return 0;
}