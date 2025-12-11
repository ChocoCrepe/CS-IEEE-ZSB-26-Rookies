
#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;

const float PI = 3.14159;




int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] == a[1])
        {
            for (int i = 0; i < n; i++)
            {
                if (a[0] != a[i])
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        else
        {
            if (a[0] == a[2])
                cout << "2" << endl;
            else
                cout << "1" << endl;
        }
    }
   
    return 0;
}
