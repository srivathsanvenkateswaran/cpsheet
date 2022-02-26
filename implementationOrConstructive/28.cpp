#include <bits/stdc++.h>
using namespace std;

bool isVowel(char a)
{
    if(a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' || a == 'O' || a == 'o' || a == 'U' || a == 'u' || a == 'Y' || a == 'y')
    {
        return true;
    }
    return false;
}

int main()
{
    string input;
    cin >> input;

    string output;

    for(int i=0; i<input.size(); i++)
    {
        if(!isVowel(input[i]))
        {
            output += '.';
            if(input[i] >= 'A' && input[i] <= 'Z')
            {
                output += (input[i] + ('z'-'Z'));
            }
            else
            {
                output += input[i];
            }
        }
    }

    cout << output;

    return 0;
}