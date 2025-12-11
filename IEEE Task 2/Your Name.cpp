
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
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s;
        cin >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
   
    return 0;
}
