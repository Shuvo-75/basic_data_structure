#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v1;
    vector<int>v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x; 
        cin >> x; 
        v2.push_back(x);
    }

    int pos;
    cin >> pos;
    
    v1.insert(v1.begin()+pos, v2.begin(), v2.end());

    for(int value:v1)
    {
        cout << value << " ";
    }
    
    return 0;
}