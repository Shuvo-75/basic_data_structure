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
    sort(v.begin(), v.end());
    while (y--)
    {
        int input;
        cin >> input;
        int l = 0;
        int r = x-1;
        bool flag = false;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(v[mid]==input)
            {
                flag = true;
                true;
            }
            if(v[mid] < input)
            {
                l = mid+1;
            } else
            {
                r = mid - 1;
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