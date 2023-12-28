#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y;
    cin >> x >> y;
    vector<long long int> v;
    for (int i = 0; i < x; i++)
    {
        long long int m;
        cin >> m;
        v.push_back(m);
    }
    vector<long long int> prefix(x);
    prefix[0] = v[0];
    for (int i = 1; i < x; i++)
    {
        prefix[i] = v[i] + prefix[i-1];
    }

    while (y--)
    {
        long long int l, r;
        cin >> l >> r;
        l--;
        r--;
        long long int sum = 0;
        if(l==0)
        {
            sum = prefix[r];
        }
        else
        {
            sum = prefix[r] - prefix[l-1];
        }
        cout << sum << endl;
    }
    
    return 0;
}