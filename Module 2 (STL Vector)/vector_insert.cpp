#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,6,7};
    vector<int> v2 = {101,102,103,104,105};
    // v.insert(v.begin()+2, 100);
    v.insert(v.begin() + 2, v2.begin(), v2.end());
    cout << v.size() << endl;
    for(int x: v)
    {
        cout << x << " ";
    }
    return 0;
}