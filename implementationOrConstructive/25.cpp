#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int firstOne = -1;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '1')
            {
                firstOne = i;
                break;
            }
        }

        int lastOne = s.size();

        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i] == '1')
            {
                lastOne = i;
                break;
            }
        }

        int zeroCount = 0;

        if(firstOne != -1)
        {
            for(int i=firstOne; i<lastOne; i++)
            {
                if(s[i] == '0')
                {
                    zeroCount++;
                }
            }
        }
        
        cout << zeroCount << '\n';
    }

    return 0;
}