#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {1,2,3,4,5,6,7,8,9,3};
    /* replace(v.begin(), v.end(), 3, 89);
    for(int x: v)
    {
        cout << x << " ";
    } */

    // vector<int>:: iterator it;
    auto it = find(v.begin(), v.end(), 100);
    if(it == v.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}