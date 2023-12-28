#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
    for(int value:x)
    {
        if(value != 0)
        {
            if(value > 0)
            {
                cout << "1" << " ";
            } else
            {
                cout << "2" << " ";
            }
        }
        else
        {
            cout << value << " ";
        }
    }
    
    
    return 0;
}