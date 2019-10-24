#include<iostream>
using namespace std;
int main()
{
    int n, A[100], z1[100],z2[100],x[100], h[100], y[100], i;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>A[0];
        cin>>A[1];
        cin>>A[2];
        cin>>A[3];
        z1[i]=A[0]*60+A[1];
        z2[i]=A[2]*60+A[3];
        x[i]=z2[i]-z1[i];
        h[i]=x[i]%60;
        y[i]=x[i]/60;
    }
    for(i=1;i<=n;i++)
    {
        cout<<y[i]<<" "<<h[i]<<endl;;
    }
}
