#include<iostream>
using namespace std;

int main()
{
    long k, n, w;
    cin >> k >> n >> w;

    long totalCost = (w * (w+1))/2;
    totalCost*=k;

    if(totalCost<n)
    {
        cout << 0;
    }
    else
    {
        cout << totalCost - n;
    }

    return 0;
}