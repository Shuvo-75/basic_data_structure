#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    long long int y;
    cin >> x >> y;
    vector<int> v;
    for (int i = 0; i < x; i++)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }

    while (y--)
    {
        int value;
        cin >> value;
        bool flag = false;
        for (int i = 0; i < x; i++)
        {
            if(v[i] == value)
            {
                flag = true;
                break;
            }
        }
        if(flag == true)
        {
            cout << "found" << endl;
        } else 
        {
            cout << "not found" << endl;
        }
    }
    
    
    return 0;
}