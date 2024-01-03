#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int h, a, b;
        cin >> h >> a >> b;
        int min = 0;
        if(h >= a && a <= b)
        {
            cout << "Impossible" << endl;
        } else 
        {
            while (h > 0)
            {
                if(h > a)
                {
                    min = min + 2;
                    h = h - a + b;
                } else if(h<=a)
                {
                    min++;
                    break;
                }
                
            }
            
            cout << min << endl;
        }
    }
    
    return 0;
}