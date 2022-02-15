#include<iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    int luckyCount = 0;

    while(n>0)
    {
        if(n%10 == 4 || n%10 == 7)
        {
            // It is a lucky number. 
            luckyCount++;
        }
        
        n /= 10;
    }

    if(luckyCount == 7 || luckyCount == 4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}