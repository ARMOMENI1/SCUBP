#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;
int main()
{
    // Random numbers
    int numbers[10];
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        numbers[i] = rand();
    }
    // The largest number
    int Largest = numbers[0];
    for (int i = 0; i < 10; i++)
    {
        if (Largest <= numbers[i])
        {
            Largest = numbers[i];
        }
    }
    // The smallest number
    int SmallestID;
    int Smallest = numbers[0];
    for (int i = 0; i < 10; i++)
    {
        if (Smallest >= numbers[i])
        {
            Smallest = numbers[i];
            SmallestID = i;
        }
    }
    // Arrange
    int Arranged[10];
    int pending[10];
    int NotChecked[10];
    for (int a = 0; a < 10; a++)
    {
        if (a == 0)
        {
            Arranged[0] = Smallest;
            for (int i = 0; i < 10; i++)
            {
                if (i != SmallestID)
                {
                    pending[i] = numbers[i];
                }
                else
                {
                    pending[i] = 0;
                }
            }
        }
        else
        {
            int smallest;
            for (int i = 0; i < 10; i++)
            {
                smallest = pending[i];
                if (smallest != 0)
                {
                    break;
                }
            }

            int smallestid;
            for (int i = 0; i < 10; i++)
            {
                if (smallest >= pending[i] && pending[i] != 0)
                {
                    smallest = pending[i];
                    smallestid = i;
                }
            }
            Arranged[a] = smallest;
            for (int i = 0; i < 10; i++)
            {
                if (i != smallestid)
                {
                    NotChecked[i] = pending[i];
                }
                else
                {
                    NotChecked[i] = 0;
                }
            }
            for (int i = 0; i < 10; i++)
            {
                pending[i] = NotChecked[i];
            }
            int NotChecked[10];
        }
    }
    // Show results
    cout << "numbers :";
    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i] << "   ";
    }
    cout << '\n';
    cout << "Largest :" << Largest << '\n';
    cout << "Smallest :" << Smallest << '\n';
    for (int i = 0; i < 10; i++)
    {
        cout << Arranged[i] << '\n';
    }
    Sleep(10000);

    return 0;
}
