#include<iostream>
using namespace std;

int main()
{
    int n, curMax = 0, curMin = 0;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

        if(arr[curMax]<arr[i])
        {
            curMax = i;
        }
        if(arr[curMin]>=arr[i])
        {
            curMin = i;
        }
    }

    if(curMax>curMin)
    {
        cout << curMax + (n-1-curMin) - 1;
    }
    else
    {
        cout << curMax + (n-1-curMin);
    }

    return 0;
}