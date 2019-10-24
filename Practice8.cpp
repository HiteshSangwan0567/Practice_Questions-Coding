#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    long long int a[n+1],b[n+1];
    a[0] = 0;
    for(int i = 1; i<=n; i++)
    {
        cin>>b[i];
        a[i] = b[i] + a[i-1];
    }
    while(q--)
    {
        int L,R;
        cin>>L>>R;
        cout<<( a[R] - a[L-1] )/(R-L+1)<<"\n";
    }

}
