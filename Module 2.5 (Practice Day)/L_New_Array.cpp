#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    vector<int> C;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    C.insert(C.begin(), B.begin(), B.end());
    C.insert(C.end(), A.begin(), A.end());

    for(int val:C)
    {
        cout << val << " ";
    }

    return 0;
}