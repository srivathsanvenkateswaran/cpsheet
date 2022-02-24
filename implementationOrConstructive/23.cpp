#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int reqCube = 0;
    int currHeight = 0;

    while(true)
    {
        currHeight++;
        reqCube += currHeight;

        if(n < reqCube)
        {
            currHeight--;
            break;
        }

        n -= reqCube;
    }

    cout << currHeight << '\n';

    return 0;
}