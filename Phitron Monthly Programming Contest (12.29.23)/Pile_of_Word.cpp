#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        string a, b;
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a == b)
        {
            cout << "YES" << endl;
        } else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}