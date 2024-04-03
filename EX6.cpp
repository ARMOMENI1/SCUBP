#include <iostream>
#include <cstdlib>
#include <cmath>
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
    // Average
    int Sum = 0;
    for (int i = 0; i < 10; i++)
    {
        Sum += numbers[i];
    }
    int AVG = Sum / 10;
    // Deviation
    int DeviationFAVG[10];
    for (int i = 0; i < 10; i++)
    {
        DeviationFAVG[i] = numbers[i] - AVG;
    }
    int POTS = 0;
    for (int i = 0; i < 10; i++)
    {
        POTS += pow(DeviationFAVG[i], 2);
    }
    int Deviation = sqrt(POTS / 10);
    // Variance
    int Variance = pow(Deviation, 2);
    // Show results
    cout << "numbers :";
    for (int i = 0; i < 10; i++)
    {
        cout <<numbers[i] << "   ";
    }
    cout << '\n';
    cout << "Average :" << AVG << '\n';
    cout << "Deviation :" << Deviation << '\n';
    cout << "Variance :" << Variance << '\n';
    Sleep(10000);
    return 0;
}
