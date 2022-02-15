#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n; 
        cin >> n;

        int mult = 1;
        vector<int> answer;

        while (n>0)
        {
            int ans = n%10;
            n /= 10;
            if(ans)
            {
                answer.push_back(ans*mult);
            }
            mult *= 10;
        }
        cout << answer.size() << endl;
        for(int i=0; i<answer.size(); i++)
        {
            cout << answer[i] << " ";
        }
        cout << endl;
    }

    return 0;
}