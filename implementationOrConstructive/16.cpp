#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = 0;

    if(a==b)
    {
        ans = 1;
    }
    else
    {
        while(a<=b)
        {
            a=a*3;
            b=b*2;
            ans++;
        }  
    }

    cout << ans;

    return 0;
}