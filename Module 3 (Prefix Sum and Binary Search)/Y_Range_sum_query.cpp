#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    vector<int> v;
    for (int i = 0; i < x; i++)
    {
        int m;
        cin >> m;
        v.push_back(m);
    }

    while (y--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int sum = 0;
        for (int i = l; i <= r; i++)
        {
            sum = sum + v[i];
        }
        cout << sum << endl;
    }
    
    
    return 0;
}