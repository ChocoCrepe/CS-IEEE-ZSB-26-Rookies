
#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
using namespace std;

const float PI = 3.14159;




int main()
{
    int k, r, n;
    cin >> k >> r;
    for (int i = 1; i <= 9; i++)
    {
        if ((k * i) % 10 == r || (k * i) % 10 == 0)
        {
            n = i;
            break;
        }
    }
    cout << n << endl;
    return 0;
}
