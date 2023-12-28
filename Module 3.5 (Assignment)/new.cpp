#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10000];

    int i = 0;
    while (cin >> a[i])
    {
        i++;
    }

    int n = i; 
    int target;
    cin >> target;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                cout << a[i] << "," << a[j];
                return 0;
            }
        }
    }

    cout << "No pair found.";
    return 0;
}
