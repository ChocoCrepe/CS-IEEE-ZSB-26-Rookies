
#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
using namespace std;

const float PI = 3.14159;




int main()
{
    int t;
    cin >> t;
    int a, b, c, d;
    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b >> c >> d;
        if ((a == b) && (a==c) && (a == d))
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}
