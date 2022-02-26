#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;

    string encryptedString;
    cin >> encryptedString;

    int increment = 1;
    int i = 0;

    while(i<n)
    {
        cout << encryptedString[i];
        i += increment;
        increment++;
    }

    return 0;
}