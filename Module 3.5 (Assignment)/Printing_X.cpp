#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if(i<n && i!=n/2)
        {
            for (int j = 0; j < n; j++)
            {
                if(i==j)
                {
                    cout << "\\";
                } else if((n-1-i)==j)
                {
                    cout << "/";
                } else
                {
                    cout << " ";
                }
            }
        } else if(i<n && i==n/2)
        {
            for (int j = 0; j < n; j++)
            {
                if(i==j)
                {
                    cout << "X";
                } else
                {
                    cout << " ";
                }
            }
            
        } 
        cout << endl;
    }
    
    return 0;
}