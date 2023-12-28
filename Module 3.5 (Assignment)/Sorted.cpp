#include<bits/stdc++.h>
using namespace std;
int main()
{
    int no;
    cin >> no;
    for (int i = 0; i < no; i++)
    {
        int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
        }
        v2.insert(v2.begin()+0, v1.begin(), v1.end());
        sort(v1.begin(), v1.end());
        if(v1 == v2)
        {
            cout << "YES" << endl;
        } else
        {
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}