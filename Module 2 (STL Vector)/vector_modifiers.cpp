#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x = {10,20,30,40,50,60,70,89};
    x.pop_back();
    cout << x.size() << endl;
    x.push_back(99);
    cout << x.size() << endl;
    /* vector<int> v = {1,2,3,4,5,6,7};
    v = x; 
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    } */

    

    return 0;
}