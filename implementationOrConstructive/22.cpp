#include<bits/stdc++.h>
using namespace std;

int main()
{
    string table;
    string hands[5];

    cin >> table;

    for(int i=0; i<5; i++)
    {
        cin >> hands[i];
    }

    bool flag = false;

    for(int i=0; i<5; i++)
    {
        if(table[0] == hands[i][0] || table[1] == hands[i][1])
        {
            flag = true;
            break;
        }
    }

    if(flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}