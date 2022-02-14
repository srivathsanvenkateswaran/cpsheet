#include<iostream>
using namespace std;
 
int main()
{
    int r, c;
    int mat[5][5];
 
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> mat[i][j];
        }
    }
 
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(mat[i][j] == 1)
            {
                r = i;
                c = j;
                break;
            }
        }
    }
 
    cout << abs(2-r) + abs(2-c) ;
 
    return 0;
}