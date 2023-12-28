#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    } 
    vector<long long int> prefix(n);
    prefix[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = v[i] + prefix[i-1];
    }
    sort(prefix.begin(), prefix.end(), greater<long long int>());
    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }
    
    
    return 0;
}