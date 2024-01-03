#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = n-2;
    for (int i = 1; i <= n; i++)
    {
        // first line
        if(i==1)
        {
            for(int j = 1; j <= n; j++)
            {
                cout << j;
            }
            cout << endl;
        }

        if(i > 1 && i < n)
        {
            for(int j = 1; j <= n ; j++)
            {
                if(j==1)
                {
                    cout << i;
                } else if(j > 1 && j < n)
                {
                    cout << " ";
                } 
                else if (j == n)
                {
                    cout << n-i+1;
                }
            }
            cout << endl;
            
        }

        if(i==n-1)
        {
            for (int j = n; j >= 1; j--)
            {
                cout << j;
            }
        } 

    }
    
    return 0;
}