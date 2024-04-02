#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    string users[5] = {
        "AhmadReza",
        "Arman",
        "Mandana",
        "kourosh",
        ""};
    string user;
    bool inquiry = 0;
    cout << "Enter your Name:" << '\n';
    getline(cin, user);
    for (int i = 0; i < 4; i++)
    {
        if (users[i] == user)
        {
            inquiry = 1;
        }else{
        }
        
    }
    if (inquiry == true)
    {
        cout << "Welcome!" << '\n';
    }
    else
    {
        users[4] = user;
        cout << "User Added!" << '\n'
             << "Welcome!" << '\n';
    }
    for (int b = 0; b < 5; b++)
    {
        cout << users[b] << '\n';
    }
    Sleep(3000);
    return 0;
}