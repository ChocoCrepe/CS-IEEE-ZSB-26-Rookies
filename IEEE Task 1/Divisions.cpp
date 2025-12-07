
#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
using namespace std;

const float PI = 3.14159;




int main()
{
    int Rating;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> Rating;
        if (Rating >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if (Rating >= 1600)
        {
            cout << "Division 2" << endl;
        }
        else if (Rating >= 1400)
        {
            cout << "Division 3" << endl;
        }
        else if (Rating < 1400)
        {
            cout << "Division 4" << endl;
        }
    }



    return 0;
}
