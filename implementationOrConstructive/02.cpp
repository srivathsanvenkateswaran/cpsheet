#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    for(int i=0; i<x.size(); i++)
    {
        if(x[i] >= '5')
        {
            x[i] = ('9'-x[i]) + '0';
        }
    }

    if(x[0] == '0')
    {
        x[0] = '9';
    }

    cout << x;

    return 0;
}