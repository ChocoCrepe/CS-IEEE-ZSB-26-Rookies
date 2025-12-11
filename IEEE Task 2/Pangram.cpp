
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

    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<bool> freq(26);
    for (int i = 0; i < n; i++)
    {
        text[i] = toupper(text[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int index = (text[i] - 'A');
        freq[index] = true;
    }


    int val = count(freq.begin(), freq.end(), 1);
    if (val == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    return 0;
}
