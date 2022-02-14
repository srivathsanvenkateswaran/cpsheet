#include<iostream>
#include<limits>
#include<string>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    cin.ignore (numeric_limits<streamsize>::max(),'\n');
 
    string operators[4] = {"X++", "++X", "X--", "--X"};
    string word;
    int ans=0;
 
    for(int i=0; i<n; i++)
    {
        cin >> word;
 
        if(word[1] == '+')
        {
            ans++;
        }
        else
        {
            ans--;
        }
    }
 
    cout << ans;
 
    return 0;
}