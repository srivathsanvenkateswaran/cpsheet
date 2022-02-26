#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; 

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> v;

        for(int i=0; i<n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        int count = 0;

        for(int i=0; i<n-1; i++)
        {
            if(v[i][m-1] == 'R')
            {
                count++;
            }
        }

        for(int i=0; i<m-1; i++)
        {
            if(v[n-1][i] == 'D')
            {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}