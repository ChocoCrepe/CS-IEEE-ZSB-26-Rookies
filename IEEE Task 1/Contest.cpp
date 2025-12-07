
#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
using namespace std;

const float PI = 3.14159;




int main()
{
    int n;
    cin >> n;
    int Result = 0;
    int Num1,Num2, Num3;
    for (int i = 1; i <= n; i++)
    {
        cin >> Num1>> Num2>> Num3;
        if ((Num1 + Num2 + Num3) >= 2)
        {
            Result++;
        }
    }
    cout << Result;
    return 0;
}
