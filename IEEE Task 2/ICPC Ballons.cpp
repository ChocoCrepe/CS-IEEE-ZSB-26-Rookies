
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
        string text;
        cin >> text;
        int ans = 0;
        vector<bool> freq(26);
        for (int i = 0; i < n; i++)
        {
            int index = (text[i] - 'A');
            if (freq[index] == 0)
            {
                ans++;
            }
            ans++;
            freq[index] = true;
        }
        cout << ans << endl;
            
    }








    return 0;
}
