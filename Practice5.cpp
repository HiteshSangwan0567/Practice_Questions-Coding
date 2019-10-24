#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    string name;
    cin>>name;
    for(int i=0;i<name.size();i++)
    {
        sum+=((int)name[i]-96);
    }
    cout<<sum;
}
