#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    // cout << v.size() << endl; // thpe - 1
    // cout << v.max_size() << endl; //type 2
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.clear();
    // v.pop_back();
    cout << v.size() << endl;
    v.resize(3);
    v.resize(10, 100);
    cout << v.size() << endl;
    // cout << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    


    return 0;
}