#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x;

        int digit = x%10;

        int ans = (digit-1) * 10;

        int numberOfDigits = 0;
        
        while(x > 0)
        {
            numberOfDigits++;
            x /= 10;
        }

        // or use 
        // numberOfDigits = int(log10(x) + 1)

        cout << ans + ((numberOfDigits)*(numberOfDigits+1))/2 << '\n';
    }

    return 0;
}