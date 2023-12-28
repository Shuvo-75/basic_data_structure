#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* //type - 1 
    vector<int>x;
    cout << x.size() << endl;  */
   
    // vector<int>x(5); // type - 2

    // vector<int>x(10, 5); // type - 3
    
    /* // type - 4 
    vector<int>x2(5, 100);
    vector<int>x(x2); */
    
    /* // type - 5 
    int a[5] = {1,3,4,5,6};
    vector<int>x(a, a+5); */

    vector<int>x={1,3,4,6,7};
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    cout << x.size() <<endl;
    return 0;
}