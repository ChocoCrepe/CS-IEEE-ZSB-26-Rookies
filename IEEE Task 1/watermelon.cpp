
#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
using namespace std;

const float PI = 3.14159;




int main()
{
    int w;
    cin >> w;
    if (w > 2)
    {
        if (w % 2 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
