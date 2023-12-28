#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4};
    vector<int> v2 = {101,102,103,104};
    // v.erase(v.begin()+ 2);
    // v.erase(v.begin()+1, v.begin()+3);
    v.erase(v.begin()+1, v.end()-1);
    cout << v.size() << endl;
    for(int x: v)
    {
        cout << x << " ";
    }
    return 0;
}