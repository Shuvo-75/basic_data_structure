#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if((int)s.front()>= 'a' || (int)s.front()<= 'z')
    {
        s.front() = s[0] - 32;
    }
    else if((int)s.front()>= 'A' || (int)s.front()<= 'Z')
    {
        s.front();
    }
    cout << s << endl;
    return 0;
}