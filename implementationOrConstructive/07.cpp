#include<iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    bool flag = true;

    for(int i=0; i<r; i++)
    {
        if(!(i%2))
        {
            for(int j=0; j<c; j++)
            {
                cout << "#";
            }
            cout << endl;
            continue;
        }
        else
        {
            if(flag)
            {
                for(int i=1; i<c; i++)
                {
                    cout << ".";
                }
                cout << "#" << endl;
            }
            else 
            {
                cout << "#";
                for(int i=1; i<c; i++)
                {
                    cout << ".";
                }
                cout << endl;
            }
            flag = !flag;
        }
    }

    return 0;
}