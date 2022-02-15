#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int temp;
    bool flag = false;

    for(int i=0; i<n; i++)
    {
        cin >> temp;
        if(temp)
        {
            flag = true;
            break;
        }
    }

    if(flag)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }

    return 0;
}