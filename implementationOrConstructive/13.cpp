#include<iostream>
using namespace std;

int main()
{
    int n; 
    cin >> n;

    int a, b, currNoPeople=0, maxCap=0;

    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        currNoPeople += (b-a);
        maxCap = max(maxCap, currNoPeople);
    }

    cout << maxCap;

    return 0;
}