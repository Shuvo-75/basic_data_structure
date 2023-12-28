#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x = {1,2,3,4,5,6,7,8,9};
    cout << x[0] << endl; // easy way to accecc ith element 
    cout << x.at(0) << endl;

    cout << x[x.size()-1] << endl;
    cout << x.back()<< endl; // easy way to access last element

    cout << x.front() << endl;
    cout << x[0] << endl; // easy way to access first element 

    // access using iterator
    for (auto it = x.begin(); it < x.end(); it++)
    {
        cout << *it << " ";
    }
    
    return 0;
}