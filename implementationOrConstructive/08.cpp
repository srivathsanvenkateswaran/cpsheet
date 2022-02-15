#include<iostream>
#include<limits>
#include<string>
using namespace std;

int main()
{
    int n; 
    cin >> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    int ans = 0;

    for(int i=0; i<n; i++)
    {
        cin >> s;

        if(!s.compare("Tetrahedron"))
        {
            ans+=4;
        }
        else if(!s.compare("Cube"))
        {
            ans+=6;
        }
        else if(!s.compare("Octahedron"))
        {
            ans+=8;
        }
        else if(!s.compare("Dodecahedron"))
        {
            ans+=12;
        }
        else if(!s.compare("Icosahedron"))
        {
            ans+=20;
        }
    }

    cout << ans;

    return 0;
}