
#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
using namespace std;

const float PI = 3.14159;




int main()
{
    int t;
    int a, b, c;
    int max;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b >> c;
        max = a;
        if (b > max)
        {
            max= b;
        }
        if (c > max)
        {
            max = c;
        }
        if (max == a)
        {
            if ((b+c) == a)
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
            
        }
        else if (max == b)
        {
            if ((a + c) == b)
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
            
        }
        else if (max == c)
        {
            if ((b + a) == c)
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
           
        }
    }


    return 0;
}
